<p align="center">
  <img src="./assets/banner.png" width="350" />
  <br /> <br />
</p>

<h1 align="center">NodeJS C++ Addons</h1>

<p align="center">🎓 This repository contains C++ Addons Examples for NodeJS.</p>

<p align="center">
  <a title="MIT License" href="LICENSE.md">
    <img src="https://img.shields.io/github/license/gridsome/gridsome.svg?style=flat-square&label=License&colorB=6cc24a">
  </a>
  <a title="Twitter: JoseJ_PR" href="https://twitter.com/JoseJ_PR">
    <img src="https://img.shields.io/twitter/url?color=1991DA&label=Twitter%20%40JoseJ_PR&logo=twitter&logoColor=FFFFFF&style=flat-square&url=https%3A%2F%2Ftwitter.com%2FJoseJ_PR">
  </a>  
  <a title="Github: Sponsors" href="https://github.com/sponsors/JoseJPR">
    <img src="https://img.shields.io/twitter/url?color=032f62&label=Github%20Sponsors%20%40JoseJPR&logo=github&logoColor=FFFFFF&style=flat-square&url=https%3A%2F%2Fgithub.com%2Fsponsors%2FJoseJPR">
  </a>
  <br />
  <br />
</p>

## 🔖 Description

WIP: I will add some examples as I need them.

## 🌍 Websites of Interest

WIP.

## 📌 Methodologies and Guidelines

Quality Assurance Code (QAC)

* ESTlint, tool for identifying and reporting on patterns found in ECMAScript/JavaScript code. \
  [NPM ESLint](https://www.npmjs.com/package/eslint) \
  [NPM ESLint | Airbnb](https://www.npmjs.com/package/eslint-config-airbnb)

## ✅ Prerequisites

In order to work with this project, your local environment must have at least the following versions:

* NodeJS Version: 14.xx
* NPM Version: 6.14.7

## 📐 How to work with this project

### Install NodeJS Dependences

```bash
$npm i
```

### Running the App

```bash
$node ./src/'folder'/'file.js'
```

## 📦 How to prepare and build a C++ Addons

### Install NodeJS Dependences

```bash
$mpn i -g node-gyp
```

### Generate the appropriate project build files.
```bash
$node-gyp configure
```

## Build the addon project.
```bash
$node-gyp build
```

## 📂 Code scaffolding

```any
/
├── assets 🌈                     # Images Sources.
├── env 🔌                        # Configure enviroments deploy.
├── src 💯
|   ├── hello-world               # First Addon.
|   |   ├── example01             # Show hello word message.
|   |   └── example02             # WIP.
|   └── ...
└── ...
```

## ⛽️ Review and Update Dependences

For review and update all npm dependences of this project you need install in global npm package "npm-check-updates" npm module.

```bash
# Install and Run
$npm i -g npm-check-updates
$ncu
```

## Happy Code

Created with JavaScript, lot of ❤️ and a few ☕️

## This README.md file has been written keeping in mind

- [GitHub Markdown](https://guides.github.com/features/mastering-markdown/)
- [Emoji Cheat Sheet](https://www.webfx.com/tools/emoji-cheat-sheet/)
