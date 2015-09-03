#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -5;
int8_t x6 = INT8_MIN;
int32_t x9 = INT32_MIN;
volatile int16_t x11 = -3742;
volatile int32_t t2 = -179;
static int32_t t4 = 813;
uint8_t x40 = 0U;
uint32_t x48 = 0U;
int64_t x61 = INT64_MIN;
int64_t x62 = -1814676508736LL;
uint16_t x64 = UINT16_MAX;
int64_t t8 = -37255454882693LL;
uint32_t x66 = 313718U;
static int16_t x68 = 1;
uint32_t t11 = 170U;
int64_t x124 = INT64_MIN;
int64_t x130 = INT64_MIN;
int32_t x141 = INT32_MIN;
uint16_t x142 = UINT16_MAX;
volatile uint8_t x153 = 45U;
volatile int32_t x154 = INT32_MIN;
static int32_t t15 = -2073053;
volatile uint8_t x160 = 116U;
static uint64_t x163 = 10813638205482LLU;
int32_t t19 = 119359466;
uint8_t x184 = 3U;
uint16_t x185 = UINT16_MAX;
uint8_t x186 = 104U;
uint8_t x187 = 3U;
uint8_t x192 = 3U;
int64_t x203 = INT64_MIN;
int16_t x208 = -9046;
int8_t x210 = INT8_MAX;
volatile int32_t t25 = 3;
int64_t t26 = 21086058052039119LL;
int64_t x217 = INT64_MIN;
uint8_t x218 = 8U;
int64_t x222 = INT64_MIN;
int32_t x246 = INT32_MIN;
uint8_t x247 = 1U;
int32_t x251 = INT32_MIN;
volatile int64_t x263 = INT64_MIN;
volatile int64_t t34 = 1534017042544LL;
int8_t x278 = INT8_MAX;
int32_t t35 = -590575;
uint64_t x289 = 7100406LLU;
volatile uint64_t t36 = 11754207672358702LLU;
int16_t x307 = INT16_MIN;
int32_t x308 = INT32_MIN;
int8_t x321 = 0;
int32_t x338 = -960567335;
int64_t t43 = -88839438LL;
uint16_t x351 = 32059U;
int64_t x352 = -3876LL;
int64_t x356 = -1LL;
static int64_t x361 = INT64_MIN;
uint8_t x362 = 1U;
int8_t x364 = 5;
int32_t t48 = -390580;
uint64_t x377 = 34065289459186LLU;
uint8_t x378 = UINT8_MAX;
int64_t x383 = 654991314722156LL;
int64_t t50 = 60240218386276LL;
uint32_t x389 = 733819631U;
static uint32_t x392 = 15143U;
static uint64_t x394 = 803659390LLU;
int64_t x426 = INT64_MIN;
volatile int32_t t54 = 92006;
int16_t x439 = INT16_MAX;
int32_t t57 = -154756527;
volatile int16_t x460 = INT16_MAX;
uint8_t x477 = 10U;
static volatile int8_t x479 = INT8_MIN;
int8_t x484 = INT8_MIN;
static uint64_t x485 = 206178LLU;
uint64_t t62 = 3469127LLU;
static int8_t x493 = -1;
uint16_t x505 = UINT16_MAX;
volatile int32_t x506 = INT32_MIN;
volatile int8_t x510 = INT8_MIN;
int64_t x511 = -316305469662857LL;
int64_t x514 = -1LL;
volatile int32_t t67 = -192641;
int32_t x525 = INT32_MAX;
int16_t x532 = -1;
uint64_t x540 = 67045477065LLU;
uint8_t x543 = 24U;
int8_t x544 = 19;
uint32_t x579 = UINT32_MAX;
volatile uint64_t t75 = 4037686771LLU;
uint32_t x581 = 524348U;
int8_t x582 = 0;
int16_t x584 = INT16_MAX;
int32_t x591 = INT32_MIN;
int32_t x595 = 255185;
uint32_t t78 = 1111U;
static int16_t x603 = INT16_MAX;
int16_t x604 = INT16_MIN;
volatile uint8_t x609 = 1U;
uint64_t x614 = 7043605478328987713LLU;
volatile int32_t t83 = -3522697;
volatile int32_t t86 = -3476;
int64_t t87 = -46980929742LL;
volatile int32_t t89 = 8692;
int32_t t93 = -1294080;
static volatile uint16_t x690 = UINT16_MAX;
int32_t t94 = 59306840;
int64_t x693 = INT64_MIN;
int32_t x695 = INT32_MIN;
volatile int32_t t96 = 154;
int32_t t97 = 9;
int32_t x720 = INT32_MIN;
uint64_t t98 = 31LLU;
int32_t x724 = INT32_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint64_t x2 = 572LLU;
	uint16_t x4 = 1138U;
	volatile int32_t t0 = -969877194;

	t0 = (x1%(x2<=(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	int8_t x7 = -7;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -5;

	t1 = (x5%(x6<=(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x10 = UINT8_MAX;
	volatile int64_t x12 = -24169123580782LL;

	t2 = (x9%(x10<=(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	int8_t x14 = -1;
	static int32_t x15 = -220575192;
	volatile int64_t x16 = INT64_MIN;
	int32_t t3 = 3427;

	t3 = (x13%(x14<=(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -15;
	volatile uint32_t x22 = 1809U;
	int8_t x23 = 13;
	int16_t x24 = INT16_MIN;

	t4 = (x21%(x22<=(x23^x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x37 = 10LLU;
	static uint64_t x38 = 0LLU;
	uint32_t x39 = 11053189U;
	uint64_t t5 = 10268031875510LLU;

	t5 = (x37%(x38<=(x39^x40)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x45 = 3347562172LLU;
	volatile uint16_t x46 = UINT16_MAX;
	int64_t x47 = 485778401065770LL;
	uint64_t t6 = 1593490195908647LLU;

	t6 = (x45%(x46<=(x47^x48)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x53 = UINT32_MAX;
	int8_t x54 = 1;
	static int32_t x55 = INT32_MIN;
	int16_t x56 = -4067;
	static volatile uint32_t t7 = 32509U;

	t7 = (x53%(x54<=(x55^x56)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x63 = INT8_MIN;

	t8 = (x61%(x62<=(x63^x64)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x65 = INT64_MIN;
	int8_t x67 = -1;
	volatile int64_t t9 = -92475481490217588LL;

	t9 = (x65%(x66<=(x67^x68)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x77 = 51989841U;
	volatile int16_t x78 = INT16_MIN;
	int16_t x79 = 44;
	volatile int8_t x80 = 20;
	volatile uint32_t t10 = 7795U;

	t10 = (x77%(x78<=(x79^x80)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x97 = 2086828U;
	int64_t x98 = -2651044786813917LL;
	uint16_t x99 = 0U;
	static int64_t x100 = -1LL;

	t11 = (x97%(x98<=(x99^x100)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x121 = INT32_MAX;
	int16_t x122 = INT16_MIN;
	static int8_t x123 = INT8_MIN;
	volatile int32_t t12 = -256;

	t12 = (x121%(x122<=(x123^x124)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x129 = INT16_MAX;
	uint8_t x131 = 12U;
	static int8_t x132 = INT8_MIN;
	int32_t t13 = 1;

	t13 = (x129%(x130<=(x131^x132)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x143 = -137243662068411LL;
	uint64_t x144 = UINT64_MAX;
	int32_t t14 = 12;

	t14 = (x141%(x142<=(x143^x144)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x155 = UINT16_MAX;
	int8_t x156 = -2;

	t15 = (x153%(x154<=(x155^x156)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x157 = INT64_MIN;
	uint16_t x158 = UINT16_MAX;
	int64_t x159 = INT64_MAX;
	int64_t t16 = 40966451948LL;

	t16 = (x157%(x158<=(x159^x160)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x161 = INT16_MIN;
	uint32_t x162 = 11U;
	int64_t x164 = INT64_MIN;
	volatile int32_t t17 = 3429;

	t17 = (x161%(x162<=(x163^x164)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x173 = 24U;
	uint64_t x174 = 112783565LLU;
	volatile uint32_t x175 = 34754U;
	static int8_t x176 = INT8_MIN;
	int32_t t18 = 0;

	t18 = (x173%(x174<=(x175^x176)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x177 = 2U;
	static int8_t x178 = INT8_MAX;
	volatile int64_t x179 = INT64_MIN;
	volatile int16_t x180 = INT16_MIN;

	t19 = (x177%(x178<=(x179^x180)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x181 = INT16_MIN;
	int32_t x182 = -43512;
	volatile uint8_t x183 = 10U;
	volatile int32_t t20 = 3492;

	t20 = (x181%(x182<=(x183^x184)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x188 = UINT32_MAX;
	int32_t t21 = 60;

	t21 = (x185%(x186<=(x187^x188)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x189 = 14U;
	int16_t x190 = INT16_MIN;
	static uint32_t x191 = UINT32_MAX;
	static int32_t t22 = 68128;

	t22 = (x189%(x190<=(x191^x192)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x201 = INT64_MIN;
	static int8_t x202 = INT8_MIN;
	volatile int8_t x204 = -43;
	volatile int64_t t23 = -4113LL;

	t23 = (x201%(x202<=(x203^x204)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x205 = -635676691;
	uint16_t x206 = 0U;
	int8_t x207 = INT8_MIN;
	volatile int32_t t24 = -18067;

	t24 = (x205%(x206<=(x207^x208)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x209 = 1U;
	int32_t x211 = -13;
	int32_t x212 = INT32_MIN;

	t25 = (x209%(x210<=(x211^x212)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x213 = INT64_MAX;
	int16_t x214 = INT16_MAX;
	static uint64_t x215 = UINT64_MAX;
	volatile uint16_t x216 = 1229U;

	t26 = (x213%(x214<=(x215^x216)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x219 = INT64_MIN;
	int16_t x220 = INT16_MIN;
	volatile int64_t t27 = -28175064737308031LL;

	t27 = (x217%(x218<=(x219^x220)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x221 = INT16_MAX;
	volatile int32_t x223 = INT32_MIN;
	int16_t x224 = -1;
	static volatile int32_t t28 = -4443210;

	t28 = (x221%(x222<=(x223^x224)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = 192997208468699LL;
	uint64_t x231 = 41136LLU;
	uint64_t x232 = 197772441471208LLU;
	volatile int64_t t29 = 24LL;

	t29 = (x229%(x230<=(x231^x232)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x241 = UINT16_MAX;
	int8_t x242 = INT8_MIN;
	volatile int32_t x243 = INT32_MIN;
	volatile int64_t x244 = INT64_MIN;
	volatile int32_t t30 = 1020;

	t30 = (x241%(x242<=(x243^x244)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x245 = 49U;
	uint16_t x248 = 2135U;
	static volatile int32_t t31 = -230582;

	t31 = (x245%(x246<=(x247^x248)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x249 = 412447;
	int16_t x250 = -18;
	int32_t x252 = -132;
	volatile int32_t t32 = 218872;

	t32 = (x249%(x250<=(x251^x252)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x261 = INT8_MIN;
	int64_t x262 = INT64_MIN;
	static volatile int64_t x264 = 3426LL;
	int32_t t33 = 133;

	t33 = (x261%(x262<=(x263^x264)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x269 = INT64_MAX;
	volatile uint64_t x270 = 0LLU;
	int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MAX;

	t34 = (x269%(x270<=(x271^x272)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x277 = UINT16_MAX;
	static volatile int64_t x279 = -518465515113255961LL;
	int16_t x280 = -158;

	t35 = (x277%(x278<=(x279^x280)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x290 = INT16_MIN;
	uint16_t x291 = 2U;
	volatile int32_t x292 = -474;

	t36 = (x289%(x290<=(x291^x292)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x305 = 1072969402758148LL;
	uint8_t x306 = 2U;
	int64_t t37 = 4433008387777933998LL;

	t37 = (x305%(x306<=(x307^x308)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x317 = INT64_MAX;
	int64_t x318 = INT64_MIN;
	static uint32_t x319 = 67U;
	static volatile int64_t x320 = INT64_MAX;
	int64_t t38 = 7127933841272LL;

	t38 = (x317%(x318<=(x319^x320)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x322 = -3550899LL;
	int64_t x323 = INT64_MAX;
	uint32_t x324 = UINT32_MAX;
	static int32_t t39 = -17380995;

	t39 = (x321%(x322<=(x323^x324)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x325 = 12U;
	int32_t x326 = INT32_MAX;
	uint32_t x327 = UINT32_MAX;
	volatile int16_t x328 = INT16_MAX;
	int32_t t40 = 126;

	t40 = (x325%(x326<=(x327^x328)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x329 = 2;
	int16_t x330 = -1694;
	static uint16_t x331 = 6U;
	int64_t x332 = INT64_MAX;
	static volatile int32_t t41 = 263951;

	t41 = (x329%(x330<=(x331^x332)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x337 = INT32_MAX;
	uint8_t x339 = UINT8_MAX;
	int8_t x340 = -11;
	volatile int32_t t42 = -5492333;

	t42 = (x337%(x338<=(x339^x340)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x345 = INT64_MAX;
	int8_t x346 = -25;
	uint16_t x347 = 8U;
	uint8_t x348 = 3U;

	t43 = (x345%(x346<=(x347^x348)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x349 = -1;
	uint64_t x350 = 353906328LLU;
	int32_t t44 = 884;

	t44 = (x349%(x350<=(x351^x352)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x353 = 9;
	volatile int16_t x354 = INT16_MIN;
	uint8_t x355 = UINT8_MAX;
	volatile int32_t t45 = -20;

	t45 = (x353%(x354<=(x355^x356)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x357 = -1;
	int64_t x358 = INT64_MIN;
	static int32_t x359 = INT32_MAX;
	volatile int64_t x360 = 88610406912LL;
	volatile int32_t t46 = 797;

	t46 = (x357%(x358<=(x359^x360)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x363 = UINT8_MAX;
	int64_t t47 = -34159745760625LL;

	t47 = (x361%(x362<=(x363^x364)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x365 = -8320;
	volatile uint16_t x366 = UINT16_MAX;
	static uint8_t x367 = UINT8_MAX;
	uint32_t x368 = 1940899U;

	t48 = (x365%(x366<=(x367^x368)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x379 = UINT32_MAX;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t49 = 24348358221983LLU;

	t49 = (x377%(x378<=(x379^x380)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x381 = INT64_MAX;
	int32_t x382 = 0;
	uint8_t x384 = UINT8_MAX;

	t50 = (x381%(x382<=(x383^x384)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x390 = 2U;
	uint32_t x391 = UINT32_MAX;
	static volatile uint32_t t51 = 28262149U;

	t51 = (x389%(x390<=(x391^x392)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x393 = UINT16_MAX;
	uint8_t x395 = UINT8_MAX;
	int16_t x396 = -1;
	int32_t t52 = 633468939;

	t52 = (x393%(x394<=(x395^x396)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x409 = INT16_MIN;
	static volatile int16_t x410 = INT16_MAX;
	int16_t x411 = -1;
	int32_t x412 = INT32_MIN;
	volatile int32_t t53 = -2456774;

	t53 = (x409%(x410<=(x411^x412)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x425 = UINT16_MAX;
	uint8_t x427 = 11U;
	int8_t x428 = -1;

	t54 = (x425%(x426<=(x427^x428)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x437 = -1LL;
	static volatile int32_t x438 = -1;
	volatile uint8_t x440 = UINT8_MAX;
	volatile int64_t t55 = 123106203940LL;

	t55 = (x437%(x438<=(x439^x440)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x445 = 9U;
	int64_t x446 = INT64_MIN;
	static uint32_t x447 = 13U;
	int8_t x448 = INT8_MIN;
	volatile int32_t t56 = 4585430;

	t56 = (x445%(x446<=(x447^x448)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x449 = 0U;
	static volatile int32_t x450 = INT32_MIN;
	volatile uint8_t x451 = 0U;
	volatile int64_t x452 = -3LL;

	t57 = (x449%(x450<=(x451^x452)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x457 = 1;
	static uint8_t x458 = 0U;
	volatile uint8_t x459 = 29U;
	static int32_t t58 = 1272060;

	t58 = (x457%(x458<=(x459^x460)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x469 = 90949061U;
	static uint8_t x470 = UINT8_MAX;
	int64_t x471 = INT64_MIN;
	volatile int32_t x472 = INT32_MIN;
	volatile uint32_t t59 = 1126521113U;

	t59 = (x469%(x470<=(x471^x472)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x478 = 0LL;
	int16_t x480 = INT16_MIN;
	static int32_t t60 = 2004661;

	t60 = (x477%(x478<=(x479^x480)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x481 = -1LL;
	int8_t x482 = 7;
	int32_t x483 = -1;
	static volatile int64_t t61 = 6286885258872LL;

	t61 = (x481%(x482<=(x483^x484)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x486 = 1842U;
	uint8_t x487 = 21U;
	uint64_t x488 = 1069628581420700489LLU;

	t62 = (x485%(x486<=(x487^x488)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x494 = -1;
	int8_t x495 = INT8_MAX;
	uint16_t x496 = 3743U;
	volatile int32_t t63 = 7;

	t63 = (x493%(x494<=(x495^x496)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x501 = 0U;
	volatile int32_t x502 = -1;
	int32_t x503 = 48276;
	int32_t x504 = INT32_MAX;
	volatile uint32_t t64 = 38329U;

	t64 = (x501%(x502<=(x503^x504)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x507 = -14;
	static int8_t x508 = 3;
	volatile int32_t t65 = -17;

	t65 = (x505%(x506<=(x507^x508)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x509 = INT32_MIN;
	int64_t x512 = INT64_MIN;
	int32_t t66 = -3072387;

	t66 = (x509%(x510<=(x511^x512)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x513 = INT8_MIN;
	volatile int64_t x515 = -1LL;
	int16_t x516 = -1;

	t67 = (x513%(x514<=(x515^x516)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x526 = -1154855962354LL;
	int16_t x527 = INT16_MIN;
	int16_t x528 = INT16_MIN;
	volatile int32_t t68 = -286016;

	t68 = (x525%(x526<=(x527^x528)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x529 = INT64_MIN;
	static int64_t x530 = INT64_MIN;
	uint16_t x531 = 11U;
	int64_t t69 = -95601538LL;

	t69 = (x529%(x530<=(x531^x532)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x537 = INT8_MAX;
	int64_t x538 = INT64_MIN;
	static volatile int8_t x539 = -1;
	int32_t t70 = 48428592;

	t70 = (x537%(x538<=(x539^x540)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x541 = 1874;
	static volatile int16_t x542 = 1;
	int32_t t71 = -18;

	t71 = (x541%(x542<=(x543^x544)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x553 = INT64_MAX;
	static uint32_t x554 = 1369408791U;
	static int8_t x555 = 7;
	int64_t x556 = INT64_MAX;
	int64_t t72 = -22LL;

	t72 = (x553%(x554<=(x555^x556)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x565 = -1;
	static uint8_t x566 = 18U;
	uint8_t x567 = UINT8_MAX;
	static volatile int16_t x568 = INT16_MAX;
	int32_t t73 = 67005018;

	t73 = (x565%(x566<=(x567^x568)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x573 = UINT32_MAX;
	uint16_t x574 = 609U;
	uint32_t x575 = 56928277U;
	static int32_t x576 = INT32_MIN;
	volatile uint32_t t74 = 94U;

	t74 = (x573%(x574<=(x575^x576)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x577 = UINT64_MAX;
	volatile int32_t x578 = -1816;
	static int64_t x580 = 181564242510902627LL;

	t75 = (x577%(x578<=(x579^x580)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x583 = 5U;
	volatile uint32_t t76 = 71986U;

	t76 = (x581%(x582<=(x583^x584)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x589 = INT32_MAX;
	int64_t x590 = INT64_MIN;
	int64_t x592 = -1LL;
	int32_t t77 = -30;

	t77 = (x589%(x590<=(x591^x592)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x593 = 55381U;
	int8_t x594 = -1;
	volatile int32_t x596 = 36585;

	t78 = (x593%(x594<=(x595^x596)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x597 = INT64_MIN;
	uint8_t x598 = 45U;
	static uint32_t x599 = 4370U;
	int8_t x600 = INT8_MAX;
	volatile int64_t t79 = -29LL;

	t79 = (x597%(x598<=(x599^x600)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x601 = INT16_MAX;
	int64_t x602 = INT64_MIN;
	volatile int32_t t80 = -15;

	t80 = (x601%(x602<=(x603^x604)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x610 = 661410111U;
	static int8_t x611 = INT8_MAX;
	static volatile int16_t x612 = -29;
	int32_t t81 = -4;

	t81 = (x609%(x610<=(x611^x612)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x613 = -10235;
	int8_t x615 = -1;
	uint8_t x616 = UINT8_MAX;
	int32_t t82 = -447;

	t82 = (x613%(x614<=(x615^x616)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x617 = INT32_MIN;
	int16_t x618 = 2889;
	int32_t x619 = 163;
	uint32_t x620 = UINT32_MAX;

	t83 = (x617%(x618<=(x619^x620)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x621 = INT32_MAX;
	static volatile int32_t x622 = 41;
	int32_t x623 = INT32_MAX;
	uint16_t x624 = 10U;
	int32_t t84 = -3;

	t84 = (x621%(x622<=(x623^x624)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x625 = -966847;
	int8_t x626 = -5;
	static int32_t x627 = INT32_MAX;
	int32_t x628 = INT32_MIN;
	int32_t t85 = 21088;

	t85 = (x625%(x626<=(x627^x628)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x629 = INT32_MAX;
	int64_t x630 = INT64_MIN;
	volatile int16_t x631 = INT16_MIN;
	static int32_t x632 = -1;

	t86 = (x629%(x630<=(x631^x632)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x633 = INT64_MIN;
	static uint32_t x634 = 2U;
	static volatile int32_t x635 = -15003;
	int8_t x636 = 1;

	t87 = (x633%(x634<=(x635^x636)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x637 = INT64_MIN;
	volatile int32_t x638 = 1;
	uint16_t x639 = 1U;
	uint8_t x640 = 126U;
	volatile int64_t t88 = -2409779980596616510LL;

	t88 = (x637%(x638<=(x639^x640)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x645 = INT32_MAX;
	int8_t x646 = INT8_MIN;
	volatile int16_t x647 = INT16_MAX;
	int64_t x648 = 11368858126952LL;

	t89 = (x645%(x646<=(x647^x648)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x649 = UINT64_MAX;
	int32_t x650 = INT32_MIN;
	int64_t x651 = -1LL;
	uint8_t x652 = 83U;
	static uint64_t t90 = 1197199LLU;

	t90 = (x649%(x650<=(x651^x652)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x653 = 14U;
	uint16_t x654 = 3472U;
	uint32_t x655 = UINT32_MAX;
	volatile int32_t x656 = INT32_MAX;
	static int32_t t91 = 239120;

	t91 = (x653%(x654<=(x655^x656)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x657 = -1;
	int32_t x658 = INT32_MIN;
	volatile uint8_t x659 = 0U;
	volatile uint64_t x660 = UINT64_MAX;
	volatile int32_t t92 = -162189;

	t92 = (x657%(x658<=(x659^x660)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x661 = 4U;
	volatile int8_t x662 = INT8_MIN;
	volatile int32_t x663 = INT32_MAX;
	uint16_t x664 = 104U;

	t93 = (x661%(x662<=(x663^x664)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x689 = INT32_MIN;
	volatile int64_t x691 = -7LL;
	int32_t x692 = INT32_MIN;

	t94 = (x689%(x690<=(x691^x692)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x694 = 7942784LLU;
	uint8_t x696 = 4U;
	static volatile int64_t t95 = -5096259810724463LL;

	t95 = (x693%(x694<=(x695^x696)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x709 = INT16_MIN;
	int16_t x710 = 15;
	int16_t x711 = 3;
	uint16_t x712 = UINT16_MAX;

	t96 = (x709%(x710<=(x711^x712)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x713 = INT16_MIN;
	volatile uint64_t x714 = 62984509376558LLU;
	int64_t x715 = INT64_MIN;
	int32_t x716 = INT32_MAX;

	t97 = (x713%(x714<=(x715^x716)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x717 = 41325LLU;
	int64_t x718 = -316932365712LL;
	static int16_t x719 = INT16_MIN;

	t98 = (x717%(x718<=(x719^x720)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x721 = 1;
	int32_t x722 = INT32_MAX;
	uint32_t x723 = UINT32_MAX;
	static int32_t t99 = -1;

	t99 = (x721%(x722<=(x723^x724)));

	if (t99 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

