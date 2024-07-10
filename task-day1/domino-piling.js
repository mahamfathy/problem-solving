function calculateDominoes() {
  const rows = parseInt(prompt("Enter the number of rows: "), 10);
  const columns = parseInt(prompt("Enter the number of columns: "), 10);

  const maxDominoes = Math.floor((rows * columns) / 2);
  document.body.innerHTML = `Max number of dominoes can be placed: ${maxDominoes}`;
}
calculateDominoes();
