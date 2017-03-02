# Misc. iPXE related stuff.

Various scripts used mainly while compiling iPXE (i.e. [embeded scripts](http://ipxe.org/embed)).
Though also this repo will probably be populated with other misc things later on.

## Structure:

```
.
├── CHANGELOG.md
├── config
│   └── local
│       ├── console.h
│       └── general.h
├── embeded
│   ├── shelldrop.ipxe
│   └── winpe.ipxe
├── LICENSE
├── notes
│   └── compile.md
└── README.md
```

- embeded: Contains scripts I embed into iPXE during compile time
- notes: Contains various notes related to what I do with iPXE
- `config/local/`: A copy of my `ipxe/src/config/local` files.

## License

This project is under the [GPLv3 license](LICENSE). Unless otherwise stated in individual files.

## Authors

- [Theodore Seán Tubbs](https://github.com/AdrianKoshka)
