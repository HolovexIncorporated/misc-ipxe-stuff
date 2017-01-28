# How I compile the various iPXE binaries that I use

I mainly compile two forms of `iPXE`, `ipxe.efi` and `undionly.kpxe`. The
files are then usually [chainloaded](http://ipxe.org/howto/chainloading)<sup>[1]</sup> via a traditional PXE server.

## `ipxe.efi`

`ipxe.efi` is a UEFI PE executable, meant to be used on UEFI compliant systems.

```bash
make -j 8 EMBED=shelldrop.ipxe bin-x86_64-efi/ipxe.efi
```


## `undionly.kpxe`

`undionly.kpxe` is a `PXE` binary which uses the UNDI stack to provide network access.<sup>[2]</sup>

```bash
make -j 8 EMBED=shelldrop.ipxe bin/undionly.kpxe
```

## References:

1. http://ipxe.org/howto/chainloading
2. NiXZe in the `#ipxe` channel on freenode.
