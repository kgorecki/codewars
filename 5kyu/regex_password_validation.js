// Regex Password Validation 5th kyu kata
function validate(password) {
  return /^(?=.*[A-Z])(?=.*[a-z])(?=.*[0-9])[A-Za-z0-9]{6,}$/.test(password);
}

