// Import Addon dependencies.
const addon = require('./addon/build/Release/addon');

// Instance method.
const runAddon = () => {
  console.log(`Number of params: ${addon.handler('Hello', 'World')}`);
}

// Run function.
runAddon();