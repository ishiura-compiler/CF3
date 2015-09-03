#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x11 = 3858903U;
static int32_t x34 = 164;
uint32_t x72 = 185381U;
static int64_t t4 = 1LL;
int64_t x74 = INT64_MAX;
int16_t x82 = INT16_MIN;
int16_t x113 = -28;
static int8_t x114 = INT8_MAX;
uint64_t t9 = UINT64_MAX;
volatile int32_t x117 = INT32_MAX;
int16_t x120 = INT16_MIN;
volatile uint8_t x131 = UINT8_MAX;
int32_t x163 = 1;
volatile int8_t x179 = -1;
int16_t x180 = INT16_MIN;
int32_t t16 = 6673;
volatile int64_t t17 = -31737105041290LL;
int32_t x198 = -29;
static uint32_t x199 = 250U;
int64_t t19 = 42643380048421490LL;
uint16_t x234 = 5U;
int32_t x236 = -851462;
uint32_t x254 = UINT32_MAX;
static int8_t x255 = INT8_MIN;
int32_t x256 = 4;
int8_t x276 = INT8_MIN;
int16_t x282 = -1;
int64_t x283 = -1LL;
volatile int8_t x296 = INT8_MIN;
volatile int64_t t30 = 4084167425904014708LL;
volatile int16_t x306 = INT16_MAX;
volatile int64_t t32 = -3701024946LL;
int32_t x319 = INT32_MIN;
volatile int32_t t35 = -58196;
int32_t x335 = 1;
static uint32_t x344 = UINT32_MAX;
uint64_t x366 = UINT64_MAX;
int64_t x370 = INT64_MIN;
volatile int32_t x384 = INT32_MIN;
uint32_t x393 = 94047564U;
int64_t x396 = INT64_MIN;
volatile int32_t x397 = -1;
int64_t x398 = -1LL;
int64_t t46 = 12LL;
static int8_t x414 = INT8_MIN;
static volatile int32_t x420 = 1976753;
uint16_t x442 = 541U;
uint32_t x444 = 1533468912U;
volatile uint32_t t54 = 1441889238U;
int16_t x476 = INT16_MAX;
volatile uint64_t t57 = 6LLU;
volatile uint64_t x483 = 40LLU;
int32_t x505 = INT32_MIN;
int16_t x509 = -1;
static int8_t x515 = INT8_MAX;
static volatile int64_t t62 = -4440212914193LL;
uint16_t x522 = 697U;
static int64_t t63 = 774255938078502393LL;
volatile int64_t x529 = -2871879LL;
volatile uint64_t t66 = 6LLU;
static int16_t x551 = 1;
uint16_t x552 = 1876U;
uint64_t x557 = 27646LLU;
int64_t x558 = -1LL;
int8_t x572 = -17;
volatile uint8_t x579 = 8U;
volatile uint32_t x580 = UINT32_MAX;
volatile uint32_t t70 = 1123U;
int8_t x601 = 21;
static int8_t x629 = -1;
int8_t x632 = INT8_MIN;
static int32_t x635 = INT32_MAX;
int64_t t76 = -63622972257379839LL;
uint64_t x657 = 2006177806LLU;
volatile uint32_t x665 = 999182U;
int32_t x667 = -1;
int32_t x673 = -75;
int64_t x674 = INT64_MAX;
uint32_t x692 = 88460U;
volatile int8_t x696 = -1;
uint8_t x749 = 89U;
int64_t t84 = 20125537564743LL;
uint32_t x754 = 1231794283U;
int8_t x757 = INT8_MAX;
int32_t x758 = -119719;
int64_t x760 = INT64_MIN;
int16_t x762 = 242;
int32_t x778 = INT32_MIN;
uint16_t x791 = 1U;
volatile int16_t x807 = -1;
volatile int16_t x808 = INT16_MIN;
static uint8_t x809 = 2U;
static int8_t x811 = INT8_MIN;
volatile int32_t t91 = 42516101;
int32_t x817 = -58269;
uint8_t x819 = UINT8_MAX;
volatile uint32_t x820 = 1756660U;
int8_t x824 = 1;
static uint16_t x825 = 6U;
uint32_t x826 = 5U;
int64_t x841 = -1LL;
int8_t x849 = INT8_MAX;
volatile int32_t x850 = -1;


void f0(void) {
	int8_t x9 = 0;
	int32_t x10 = -2;
	static uint16_t x12 = UINT16_MAX;
	static uint32_t t0 = 0U;

	t0 = ((x9%(x10/x11))^x12);

	if (t0 != 65535U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x33 = -4750318;
	int8_t x35 = -1;
	static int16_t x36 = INT16_MIN;
	int32_t t1 = -257105537;

	t1 = ((x33%(x34/x35))^x36);

	if (t1 != 32710) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x45 = 61624581529649249LLU;
	int16_t x46 = 122;
	int16_t x47 = -1;
	uint32_t x48 = UINT32_MAX;
	uint64_t t2 = 3207118392661081646LLU;

	t2 = ((x45%(x46/x47))^x48);

	if (t2 != 61624577385447326LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x53 = INT32_MAX;
	uint64_t x54 = UINT64_MAX;
	int32_t x55 = -1;
	int8_t x56 = 28;
	volatile uint64_t t3 = 122442175100679LLU;

	t3 = ((x53%(x54/x55))^x56);

	if (t3 != 28LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x69 = 2312286LL;
	int64_t x70 = INT64_MIN;
	volatile int8_t x71 = 4;

	t4 = ((x69%(x70/x71))^x72);

	if (t4 != 2202747LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x73 = -1;
	volatile int32_t x75 = -1190;
	int8_t x76 = -21;
	volatile int64_t t5 = 367926LL;

	t5 = ((x73%(x74/x75))^x76);

	if (t5 != 20LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x81 = 28055U;
	int32_t x83 = 7885;
	int32_t x84 = INT32_MIN;
	int32_t t6 = -2022;

	t6 = ((x81%(x82/x83))^x84);

	if (t6 != -2147483645) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x97 = -983;
	uint8_t x98 = UINT8_MAX;
	volatile int16_t x99 = -1;
	volatile int16_t x100 = -3556;
	volatile int32_t t7 = -75227;

	t7 = ((x97%(x98/x99))^x100);

	if (t7 != 3386) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x105 = 1351129U;
	uint32_t x106 = UINT32_MAX;
	int32_t x107 = INT32_MIN;
	volatile uint64_t x108 = 2732LLU;
	uint64_t t8 = 534415216311572150LLU;

	t8 = ((x105%(x106/x107))^x108);

	if (t8 != 2732LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x115 = 27;
	volatile uint64_t x116 = UINT64_MAX;

	t9 = ((x113%(x114/x115))^x116);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x118 = 3U;
	int8_t x119 = -1;
	volatile int32_t t10 = -1841444;

	t10 = ((x117%(x118/x119))^x120);

	if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x121 = INT8_MIN;
	static uint32_t x122 = 1540557758U;
	uint32_t x123 = 10685958U;
	uint16_t x124 = 1U;
	volatile uint32_t t11 = 2903U;

	t11 = ((x121%(x122/x123))^x124);

	if (t11 != 129U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x129 = -1;
	uint8_t x130 = UINT8_MAX;
	int16_t x132 = 1;
	static int32_t t12 = 10447;

	t12 = ((x129%(x130/x131))^x132);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MIN;
	uint16_t x143 = 61U;
	uint32_t x144 = UINT32_MAX;
	int64_t t13 = 810667467758782812LL;

	t13 = ((x141%(x142/x143))^x144);

	if (t13 != 4294967295LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x149 = INT32_MIN;
	static uint16_t x150 = UINT16_MAX;
	static uint8_t x151 = UINT8_MAX;
	volatile int8_t x152 = 1;
	volatile int32_t t14 = -4402;

	t14 = ((x149%(x150/x151))^x152);

	if (t14 != -130) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x161 = 46;
	static int64_t x162 = -56656061949378907LL;
	static int32_t x164 = INT32_MIN;
	volatile int64_t t15 = -13842009427LL;

	t15 = ((x161%(x162/x163))^x164);

	if (t15 != -2147483602LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x177 = INT16_MIN;
	uint16_t x178 = 31312U;

	t16 = ((x177%(x178/x179))^x180);

	if (t16 != 31312) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x185 = INT64_MAX;
	static int64_t x186 = -2280770331LL;
	uint8_t x187 = UINT8_MAX;
	static int8_t x188 = INT8_MIN;

	t17 = ((x185%(x186/x187))^x188);

	if (t17 != -1126841LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x193 = 521044284U;
	int64_t x194 = INT64_MAX;
	int32_t x195 = -1;
	int64_t x196 = INT64_MIN;
	volatile int64_t t18 = -4754790564LL;

	t18 = ((x193%(x194/x195))^x196);

	if (t18 != -9223372036333731524LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x197 = INT8_MIN;
	int64_t x200 = -1LL;

	t19 = ((x197%(x198/x199))^x200);

	if (t19 != -17179788LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x201 = 123093028817412244LLU;
	static int32_t x202 = INT32_MIN;
	int16_t x203 = -66;
	uint32_t x204 = UINT32_MAX;
	volatile uint64_t t20 = 1214712193384LLU;

	t20 = ((x201%(x202/x203))^x204);

	if (t20 != 4277620739LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x209 = INT16_MIN;
	static int64_t x210 = INT64_MAX;
	volatile uint64_t x211 = 462LLU;
	int16_t x212 = INT16_MAX;
	volatile uint64_t t21 = 2279LLU;

	t21 = ((x209%(x210/x211))^x212);

	if (t21 != 19964008737753931LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x213 = 1267U;
	int32_t x214 = INT32_MIN;
	volatile uint8_t x215 = 1U;
	uint32_t x216 = UINT32_MAX;
	static volatile uint32_t t22 = 39548U;

	t22 = ((x213%(x214/x215))^x216);

	if (t22 != 4294966028U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x217 = UINT32_MAX;
	uint64_t x218 = UINT64_MAX;
	int8_t x219 = INT8_MAX;
	volatile uint8_t x220 = 102U;
	static volatile uint64_t t23 = 146LLU;

	t23 = ((x217%(x218/x219))^x220);

	if (t23 != 4294967193LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x233 = INT64_MIN;
	volatile int8_t x235 = -5;
	int64_t t24 = -1678LL;

	t24 = ((x233%(x234/x235))^x236);

	if (t24 != -851462LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x253 = -7571146;
	volatile uint32_t t25 = 2374U;

	t25 = ((x253%(x254/x255))^x256);

	if (t25 != 4U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x261 = -1;
	uint32_t x262 = UINT32_MAX;
	volatile int8_t x263 = -1;
	int16_t x264 = INT16_MIN;
	volatile uint32_t t26 = 722U;

	t26 = ((x261%(x262/x263))^x264);

	if (t26 != 4294934528U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x273 = UINT8_MAX;
	int16_t x274 = INT16_MIN;
	static int8_t x275 = 55;
	volatile int32_t t27 = 772095;

	t27 = ((x273%(x274/x275))^x276);

	if (t27 != -129) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x281 = 19175163;
	int16_t x284 = INT16_MIN;
	int64_t t28 = -3826LL;

	t28 = ((x281%(x282/x283))^x284);

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x285 = 423200724915LLU;
	int32_t x286 = INT32_MIN;
	int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MAX;
	uint64_t t29 = 37LLU;

	t29 = ((x285%(x286/x287))^x288);

	if (t29 != 2147444812LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x293 = 114186U;
	static int64_t x294 = -5675540232161547LL;
	static int64_t x295 = -1LL;

	t30 = ((x293%(x294/x295))^x296);

	if (t30 != -114294LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x305 = INT64_MIN;
	volatile int16_t x307 = INT16_MAX;
	static uint16_t x308 = 1U;
	volatile int64_t t31 = 178287186164LL;

	t31 = ((x305%(x306/x307))^x308);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x309 = 1530064669LL;
	int32_t x310 = INT32_MIN;
	static int64_t x311 = -1LL;
	int8_t x312 = -1;

	t32 = ((x309%(x310/x311))^x312);

	if (t32 != -1530064670LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x313 = INT16_MAX;
	uint64_t x314 = UINT64_MAX;
	uint32_t x315 = 585096U;
	static int32_t x316 = 14958;
	uint64_t t33 = 1595858LLU;

	t33 = ((x313%(x314/x315))^x316);

	if (t33 != 17809LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x317 = 1252910U;
	static uint32_t x318 = UINT32_MAX;
	int16_t x320 = INT16_MIN;
	volatile uint32_t t34 = 2075707380U;

	t34 = ((x317%(x318/x319))^x320);

	if (t34 != 4294934528U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	int8_t x331 = -7;
	int16_t x332 = INT16_MAX;

	t35 = ((x329%(x330/x331))^x332);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x333 = INT64_MIN;
	volatile int64_t x334 = -1LL;
	int8_t x336 = -1;
	static volatile int64_t t36 = -3478071812801320525LL;

	t36 = ((x333%(x334/x335))^x336);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x337 = INT64_MIN;
	volatile int64_t x338 = -1LL;
	volatile int64_t x339 = -1LL;
	int16_t x340 = INT16_MAX;
	int64_t t37 = -9LL;

	t37 = ((x337%(x338/x339))^x340);

	if (t37 != 32767LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x341 = 6U;
	volatile int64_t x342 = 493618859525542422LL;
	int32_t x343 = INT32_MAX;
	int64_t t38 = -9877108LL;

	t38 = ((x341%(x342/x343))^x344);

	if (t38 != 4294967289LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x345 = 1U;
	volatile uint16_t x346 = UINT16_MAX;
	int8_t x347 = 17;
	int32_t x348 = -1;
	static int32_t t39 = -783;

	t39 = ((x345%(x346/x347))^x348);

	if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x365 = -74943LL;
	uint64_t x367 = 5368002587LLU;
	volatile int64_t x368 = -1LL;
	volatile uint64_t t40 = 831490LLU;

	t40 = ((x365%(x366/x367))^x368);

	if (t40 != 18446744071370336141LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x369 = -17976;
	static int16_t x371 = INT16_MAX;
	int16_t x372 = INT16_MAX;
	volatile int64_t t41 = -4LL;

	t41 = ((x369%(x370/x371))^x372);

	if (t41 != -14793LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x381 = -40;
	uint64_t x382 = UINT64_MAX;
	int32_t x383 = -530093583;
	uint64_t t42 = 2025384457079606LLU;

	t42 = ((x381%(x382/x383))^x384);

	if (t42 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x389 = -1LL;
	uint32_t x390 = UINT32_MAX;
	volatile int32_t x391 = INT32_MIN;
	int16_t x392 = -1;
	volatile int64_t t43 = 14811LL;

	t43 = ((x389%(x390/x391))^x392);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x394 = INT64_MIN;
	int32_t x395 = INT32_MIN;
	int64_t t44 = 112LL;

	t44 = ((x393%(x394/x395))^x396);

	if (t44 != -9223372036760728244LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x399 = -1;
	volatile int16_t x400 = -1;
	volatile int64_t t45 = 30561717867LL;

	t45 = ((x397%(x398/x399))^x400);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x401 = -183834709871LL;
	static int64_t x402 = INT64_MAX;
	uint32_t x403 = 28U;
	uint8_t x404 = 101U;

	t46 = ((x401%(x402/x403))^x404);

	if (t46 != -183834709772LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x409 = 504U;
	volatile uint64_t x410 = 3079231051222286LLU;
	uint8_t x411 = 49U;
	int16_t x412 = -1;
	static volatile uint64_t t47 = 5747LLU;

	t47 = ((x409%(x410/x411))^x412);

	if (t47 != 18446744073709551111LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x413 = 13U;
	static uint8_t x415 = 117U;
	static uint16_t x416 = 1618U;
	uint32_t t48 = 0U;

	t48 = ((x413%(x414/x415))^x416);

	if (t48 != 1631U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x417 = 47;
	static int8_t x418 = INT8_MIN;
	int8_t x419 = 16;
	static int32_t t49 = -505;

	t49 = ((x417%(x418/x419))^x420);

	if (t49 != 1976758) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x421 = INT16_MAX;
	static int32_t x422 = -245;
	static volatile uint64_t x423 = 104534LLU;
	static int64_t x424 = -1LL;
	uint64_t t50 = 1534596LLU;

	t50 = ((x421%(x422/x423))^x424);

	if (t50 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x425 = -1;
	int64_t x426 = -1040107134737004082LL;
	uint32_t x427 = 1068U;
	uint16_t x428 = UINT16_MAX;
	int64_t t51 = 437775864232293LL;

	t51 = ((x425%(x426/x427))^x428);

	if (t51 != -65536LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x429 = INT8_MAX;
	int16_t x430 = INT16_MAX;
	int8_t x431 = INT8_MIN;
	int32_t x432 = 232;
	volatile int32_t t52 = 35103;

	t52 = ((x429%(x430/x431))^x432);

	if (t52 != 151) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x433 = -1;
	volatile int64_t x434 = INT64_MAX;
	volatile int16_t x435 = -1;
	static int64_t x436 = INT64_MIN;
	int64_t t53 = INT64_MAX;

	t53 = ((x433%(x434/x435))^x436);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x441 = -1;
	volatile int8_t x443 = INT8_MIN;

	t54 = ((x441%(x442/x443))^x444);

	if (t54 != 2761498383U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x445 = INT16_MIN;
	static int32_t x446 = INT32_MAX;
	int16_t x447 = INT16_MAX;
	volatile uint16_t x448 = 2552U;
	volatile int32_t t55 = 15435903;

	t55 = ((x445%(x446/x447))^x448);

	if (t55 != -30216) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x469 = -1LL;
	int16_t x470 = -113;
	int64_t x471 = -1LL;
	volatile int8_t x472 = 1;
	volatile int64_t t56 = -43546LL;

	t56 = ((x469%(x470/x471))^x472);

	if (t56 != -2LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x473 = 4;
	uint64_t x474 = UINT64_MAX;
	int64_t x475 = -1064823591368LL;

	t57 = ((x473%(x474/x475))^x476);

	if (t57 != 32767LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x481 = INT32_MIN;
	static uint16_t x482 = UINT16_MAX;
	uint8_t x484 = 36U;
	volatile uint64_t t58 = 2813269629LLU;

	t58 = ((x481%(x482/x483))^x484);

	if (t58 != 1490LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x501 = -1;
	int64_t x502 = -993529477299LL;
	volatile int8_t x503 = -1;
	int64_t x504 = INT64_MAX;
	volatile int64_t t59 = INT64_MIN;

	t59 = ((x501%(x502/x503))^x504);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x506 = UINT64_MAX;
	static int8_t x507 = -37;
	static uint8_t x508 = UINT8_MAX;
	volatile uint64_t t60 = 205622467428407LLU;

	t60 = ((x505%(x506/x507))^x508);

	if (t60 != 255LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x510 = 48U;
	int64_t x511 = -1LL;
	volatile int16_t x512 = 4067;
	static int64_t t61 = 1LL;

	t61 = ((x509%(x510/x511))^x512);

	if (t61 != -4068LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x513 = INT64_MAX;
	volatile int16_t x514 = INT16_MAX;
	volatile int32_t x516 = INT32_MAX;

	t62 = ((x513%(x514/x515))^x516);

	if (t62 != 2147483520LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x521 = INT8_MIN;
	static uint16_t x523 = 50U;
	int64_t x524 = -1LL;

	t63 = ((x521%(x522/x523))^x524);

	if (t63 != 10LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x530 = UINT32_MAX;
	volatile int32_t x531 = 29;
	volatile int8_t x532 = 4;
	volatile int64_t t64 = 0LL;

	t64 = ((x529%(x530/x531))^x532);

	if (t64 != -2871875LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x537 = INT64_MIN;
	uint16_t x538 = UINT16_MAX;
	static uint16_t x539 = 7171U;
	int32_t x540 = INT32_MAX;
	static int64_t t65 = 1375930605097LL;

	t65 = ((x537%(x538/x539))^x540);

	if (t65 != -2147483641LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x541 = UINT64_MAX;
	int32_t x542 = INT32_MAX;
	int16_t x543 = -1;
	int32_t x544 = -1;

	t66 = ((x541%(x542/x543))^x544);

	if (t66 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x549 = 14;
	volatile uint16_t x550 = 12U;
	volatile int32_t t67 = -113607;

	t67 = ((x549%(x550/x551))^x552);

	if (t67 != 1878) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x559 = 3916527127972LLU;
	int16_t x560 = -1;
	uint64_t t68 = 29222LLU;

	t68 = ((x557%(x558/x559))^x560);

	if (t68 != 18446744073709523969LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x569 = -1LL;
	static int32_t x570 = -1;
	int64_t x571 = -1LL;
	volatile int64_t t69 = -1649LL;

	t69 = ((x569%(x570/x571))^x572);

	if (t69 != -17LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x577 = UINT32_MAX;
	volatile int32_t x578 = -202;

	t70 = ((x577%(x578/x579))^x580);

	if (t70 != 4294967271U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x602 = INT16_MAX;
	int16_t x603 = -1;
	int64_t x604 = INT64_MAX;
	static int64_t t71 = -8283679951155LL;

	t71 = ((x601%(x602/x603))^x604);

	if (t71 != 9223372036854775786LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x613 = INT8_MIN;
	int8_t x614 = -2;
	static uint32_t x615 = 134215U;
	int8_t x616 = -1;
	static uint32_t t72 = 25734081U;

	t72 = ((x613%(x614/x615))^x616);

	if (t72 != 4294944127U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x617 = -1061;
	int32_t x618 = -135886483;
	volatile int32_t x619 = -1;
	int32_t x620 = -7008;
	volatile int32_t t73 = 1843377;

	t73 = ((x617%(x618/x619))^x620);

	if (t73 != 8059) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x630 = INT32_MAX;
	int16_t x631 = -1;
	volatile int32_t t74 = 5;

	t74 = ((x629%(x630/x631))^x632);

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x633 = -11519;
	volatile int64_t x634 = -66855707392778651LL;
	int32_t x636 = 45;
	int64_t t75 = -912LL;

	t75 = ((x633%(x634/x635))^x636);

	if (t75 != -11476LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x653 = -152LL;
	int8_t x654 = INT8_MIN;
	int16_t x655 = -1;
	static int64_t x656 = INT64_MIN;

	t76 = ((x653%(x654/x655))^x656);

	if (t76 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x658 = INT8_MAX;
	static int8_t x659 = 1;
	int16_t x660 = INT16_MAX;
	volatile uint64_t t77 = 226LLU;

	t77 = ((x657%(x658/x659))^x660);

	if (t77 != 32686LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x666 = 9045LL;
	static int32_t x668 = 42;
	int64_t t78 = 6141313LL;

	t78 = ((x665%(x666/x667))^x668);

	if (t78 != 4258LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x675 = 12949959U;
	int64_t x676 = -1730428362LL;
	volatile int64_t t79 = 9679048504888LL;

	t79 = ((x673%(x674/x675))^x676);

	if (t79 != 1730428291LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x689 = -1;
	int16_t x690 = 3208;
	int8_t x691 = -7;
	static uint32_t t80 = 31592677U;

	t80 = ((x689%(x690/x691))^x692);

	if (t80 != 4294878835U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x693 = UINT32_MAX;
	volatile uint32_t x694 = 1544U;
	uint8_t x695 = 59U;
	volatile uint32_t t81 = 6673U;

	t81 = ((x693%(x694/x695))^x696);

	if (t81 != 4294967274U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x697 = 173568963U;
	int16_t x698 = INT16_MAX;
	volatile int64_t x699 = 78LL;
	volatile int32_t x700 = INT32_MIN;
	volatile int64_t t82 = 221649162637123LL;

	t82 = ((x697%(x698/x699))^x700);

	if (t82 != -2147483465LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x725 = 8U;
	int32_t x726 = INT32_MAX;
	int8_t x727 = INT8_MIN;
	static int32_t x728 = INT32_MAX;
	int32_t t83 = -7;

	t83 = ((x725%(x726/x727))^x728);

	if (t83 != 2147483639) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x750 = -1LL;
	int32_t x751 = -1;
	int8_t x752 = -26;

	t84 = ((x749%(x750/x751))^x752);

	if (t84 != -26LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x753 = 68958455U;
	static volatile uint16_t x755 = UINT16_MAX;
	volatile int16_t x756 = -132;
	uint32_t t85 = 202442160U;

	t85 = ((x753%(x754/x755))^x756);

	if (t85 != 4294949031U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x759 = 86LL;
	static int64_t t86 = 2849776293343215651LL;

	t86 = ((x757%(x758/x759))^x760);

	if (t86 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x761 = 122U;
	volatile int8_t x763 = -6;
	int64_t x764 = 80331391273647275LL;
	int64_t t87 = 1121232736810839210LL;

	t87 = ((x761%(x762/x763))^x764);

	if (t87 != 80331391273647273LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x777 = -1LL;
	int64_t x779 = -1LL;
	int16_t x780 = INT16_MIN;
	volatile int64_t t88 = -168038280351116LL;

	t88 = ((x777%(x778/x779))^x780);

	if (t88 != 32767LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x789 = 83U;
	int32_t x790 = INT32_MIN;
	volatile int8_t x792 = INT8_MAX;
	static volatile int32_t t89 = -1369083;

	t89 = ((x789%(x790/x791))^x792);

	if (t89 != 44) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x805 = UINT8_MAX;
	int16_t x806 = -1;
	volatile int32_t t90 = -3;

	t90 = ((x805%(x806/x807))^x808);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x810 = INT32_MIN;
	int32_t x812 = 118;

	t91 = ((x809%(x810/x811))^x812);

	if (t91 != 116) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x818 = -1107723;
	uint32_t t92 = 1U;

	t92 = ((x817%(x818/x819))^x820);

	if (t92 != 4293211407U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x821 = 6992;
	int64_t x822 = INT64_MIN;
	int64_t x823 = INT64_MIN;
	volatile int64_t t93 = 13741LL;

	t93 = ((x821%(x822/x823))^x824);

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x827 = -1LL;
	static int32_t x828 = 1297088;
	volatile int64_t t94 = 854858021536LL;

	t94 = ((x825%(x826/x827))^x828);

	if (t94 != 1297089LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x833 = -1;
	volatile uint32_t x834 = UINT32_MAX;
	static volatile int8_t x835 = -1;
	int64_t x836 = INT64_MIN;
	volatile int64_t t95 = INT64_MIN;

	t95 = ((x833%(x834/x835))^x836);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x842 = -1LL;
	static int16_t x843 = -1;
	int8_t x844 = -1;
	int64_t t96 = 86570155780749LL;

	t96 = ((x841%(x842/x843))^x844);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x851 = -1LL;
	int32_t x852 = INT32_MAX;
	volatile int64_t t97 = -648LL;

	t97 = ((x849%(x850/x851))^x852);

	if (t97 != 2147483647LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x861 = INT8_MIN;
	static int32_t x862 = -1;
	int16_t x863 = -1;
	int8_t x864 = INT8_MAX;
	static int32_t t98 = -127;

	t98 = ((x861%(x862/x863))^x864);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x869 = 2U;
	static volatile int16_t x870 = INT16_MIN;
	int32_t x871 = -1;
	uint16_t x872 = UINT16_MAX;
	volatile uint32_t t99 = 1U;

	t99 = ((x869%(x870/x871))^x872);

	if (t99 != 65533U) { NG(); } else { ; }
	
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

