// Import Addon dependencies.
const addon = require('./addon/build/Release/addon');

// Instance method.
const runAddon = () => {
  console.log(`Number of params: ${addon.helloWorld('Hello', 'World')}`);
}

// Run function.
runAddon();