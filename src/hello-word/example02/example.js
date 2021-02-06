/**
 * More info about include colors: https://stackoverflow.com/questions/9158150/colored-output-in-c/9158263
 */
const addon = require('./addon/build/Release/addon');

const runAddon = () => addon.helloWorld();

runAddon();