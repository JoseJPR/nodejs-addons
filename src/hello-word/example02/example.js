/**
 * More info about include colors: https://stackoverflow.com/questions/9158150/colored-output-in-c/9158263
 */
// Import Addon dependencies.
const addon = require('./addon/build/Release/addon');

// Instance method.
const runAddon = () => addon.helloWorld();

// Run function.
runAddon();