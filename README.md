# MK7-Memory

A collection of data structures for Mario Kart 7.

## Usage

- [python3](https://www.python.org/downloads)

The data structures are generated from template files located in the [template](template) folder.\
These files have a special syntax so that it's easier to add new members to the data structures while doing reverse engineering.\
To generate the output usable header files, run `make` in the repository root directory, which will generate an `include` folder.\
Finally, include the needed headers in your project and build it using C++23.

## Credits

- [Nintendo](https://github.com/nintendo)
- [OpenEAD](https://github.com/open-ead): [sead](https://github.com/open-ead/sead), [nnheaders](https://github.com/open-ead/nnheaders)
- [Anto726](https://github.com/Anto726): game research
- [PabloMK7](https://github.com/PabloMK7): game research
- [B_squo](https://github.com/Bsquo): game research
- [Marioiscool246](https://github.com/Marioiscool246): `Kart::NetData` research
- _tZ: `System::RootSystem`, its nested classes, and much more

## License

See [LICENSE](LICENSE).
