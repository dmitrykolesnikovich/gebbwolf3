#define SC_MAPMASK 0x02

void selectPlan(char plan) {
  outp(SC_INDEX, SC_MAPMASK);
  outp(SC_DATA, 1 << plane);
}