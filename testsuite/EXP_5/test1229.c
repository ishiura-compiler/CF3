#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MAX;
uint16_t x17 = 43U;
int8_t x18 = -1;
int16_t x31 = -428;
static int16_t x32 = INT16_MAX;
uint32_t x33 = 75U;
static int8_t x35 = INT8_MIN;
uint32_t x40 = 5124U;
int8_t x50 = INT8_MAX;
int8_t x57 = 2;
volatile uint32_t x61 = 13522U;
uint32_t x63 = 92U;
static int64_t x75 = INT64_MIN;
int64_t x84 = -156253070299707LL;
int32_t x128 = INT32_MIN;
uint64_t x143 = 38937407069LLU;
static int32_t x146 = -194;
static volatile int32_t t18 = -571;
volatile uint16_t x167 = 234U;
int64_t t20 = -1451386928LL;
int8_t x181 = 1;
int32_t x190 = INT32_MAX;
volatile int8_t x195 = INT8_MIN;
int32_t x196 = INT32_MIN;
int8_t x212 = -16;
uint8_t x250 = UINT8_MAX;
uint8_t x251 = 123U;
static int8_t x253 = INT8_MAX;
uint64_t x256 = UINT64_MAX;
int8_t x278 = -1;
int32_t t32 = 3841533;
uint8_t x288 = 109U;
uint32_t x295 = 1U;
uint64_t t35 = UINT64_MAX;
volatile int64_t t38 = 73575800252457162LL;
static int16_t x348 = 6352;
int8_t x351 = INT8_MAX;
int32_t t43 = 36707306;
static int32_t t44 = -455;
uint64_t x363 = UINT64_MAX;
volatile int16_t x373 = INT16_MAX;
int32_t t47 = 19465506;
int16_t x382 = INT16_MAX;
volatile int8_t x392 = INT8_MIN;
volatile uint8_t x398 = UINT8_MAX;
volatile uint64_t t51 = 545136125019144LLU;
uint64_t x406 = 931920151659159LLU;
volatile uint16_t x420 = 28715U;
int32_t t54 = -38;
uint16_t x425 = UINT16_MAX;
volatile int8_t x426 = -1;
int8_t x433 = INT8_MAX;
int8_t x451 = -1;
uint8_t x466 = 1U;
uint32_t x490 = UINT32_MAX;
int8_t x494 = 1;
volatile int32_t x495 = INT32_MIN;
uint32_t t66 = 3944059U;
uint16_t x497 = 3353U;
int64_t x500 = INT64_MAX;
volatile int32_t t67 = -6;
int64_t t68 = 6843276444349178LL;
int64_t x534 = INT64_MIN;
int32_t x542 = -19028768;
int32_t t70 = -2399;
uint8_t x545 = 2U;
static uint64_t x547 = UINT64_MAX;
uint64_t x548 = 5328186614210LLU;
volatile uint32_t t72 = 404738U;
int64_t t73 = INT64_MAX;
static int64_t t74 = INT64_MAX;
volatile uint32_t x588 = 4140226U;
uint8_t x589 = 31U;
int32_t x599 = -1;
uint64_t x605 = 700763948LLU;
volatile int64_t x631 = -3395009402LL;
int32_t x638 = -26612528;
static volatile int32_t t85 = 11968;
uint32_t x650 = UINT32_MAX;
uint16_t x653 = UINT16_MAX;
uint32_t x654 = 104915420U;
volatile int32_t t87 = 5;
uint64_t x667 = 3698913LLU;
volatile uint32_t t89 = 1835486255U;
uint64_t t90 = UINT64_MAX;
static int32_t x694 = INT32_MAX;
int8_t x698 = INT8_MIN;
static uint64_t x700 = 70LLU;
uint16_t x713 = 15404U;
int16_t x714 = INT16_MIN;
volatile int32_t x716 = 38;
int16_t x723 = -23;
int32_t x729 = INT32_MAX;
int16_t x731 = INT16_MIN;
volatile uint64_t x732 = 1379133076807LLU;
static int32_t x735 = INT32_MIN;
int8_t x736 = INT8_MAX;
static volatile int64_t t98 = 128170548251LL;


void f0(void) {
	uint8_t x6 = 3U;
	int64_t x7 = -29909953469021LL;
	static int32_t x8 = -406;
	volatile int64_t t0 = INT64_MAX;

	t0 = (x5>>((x6==x7)/x8));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x19 = INT64_MIN;
	int8_t x20 = INT8_MAX;
	volatile int32_t t1 = 2456181;

	t1 = (x17>>((x18==x19)/x20));

	if (t1 != 43) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x25 = 2U;
	uint16_t x26 = 3147U;
	int16_t x27 = 7686;
	static uint32_t x28 = 383U;
	volatile uint32_t t2 = 3074612U;

	t2 = (x25>>((x26==x27)/x28));

	if (t2 != 2U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x29 = 45;
	static int32_t x30 = INT32_MIN;
	volatile int32_t t3 = 16;

	t3 = (x29>>((x30==x31)/x32));

	if (t3 != 45) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x34 = 1059977585559017LL;
	int32_t x36 = -1;
	uint32_t t4 = 134U;

	t4 = (x33>>((x34==x35)/x36));

	if (t4 != 75U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x37 = 560;
	uint16_t x38 = UINT16_MAX;
	uint64_t x39 = UINT64_MAX;
	volatile int32_t t5 = -2;

	t5 = (x37>>((x38==x39)/x40));

	if (t5 != 560) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x41 = 14U;
	volatile int16_t x42 = -1765;
	int32_t x43 = 1;
	int8_t x44 = -14;
	int32_t t6 = 303524;

	t6 = (x41>>((x42==x43)/x44));

	if (t6 != 14) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x49 = 4U;
	static uint8_t x51 = 3U;
	int32_t x52 = INT32_MIN;
	int32_t t7 = 38;

	t7 = (x49>>((x50==x51)/x52));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x58 = 277U;
	int8_t x59 = 25;
	uint32_t x60 = 30U;
	int32_t t8 = 29368;

	t8 = (x57>>((x58==x59)/x60));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x62 = 1;
	static volatile int16_t x64 = 1;
	static volatile uint32_t t9 = 547604479U;

	t9 = (x61>>((x62==x63)/x64));

	if (t9 != 13522U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x69 = UINT8_MAX;
	int8_t x70 = INT8_MIN;
	uint8_t x71 = 2U;
	uint32_t x72 = 228612564U;
	int32_t t10 = 3553;

	t10 = (x69>>((x70==x71)/x72));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = INT16_MAX;
	int16_t x74 = INT16_MAX;
	int8_t x76 = -2;
	volatile int32_t t11 = -13068;

	t11 = (x73>>((x74==x75)/x76));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x81 = UINT8_MAX;
	volatile int32_t x82 = -90;
	uint32_t x83 = 23970U;
	volatile int32_t t12 = 11992535;

	t12 = (x81>>((x82==x83)/x84));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x89 = 10530467617556900LL;
	int8_t x90 = 23;
	static uint8_t x91 = 127U;
	int16_t x92 = INT16_MIN;
	volatile int64_t t13 = -53286103062823LL;

	t13 = (x89>>((x90==x91)/x92));

	if (t13 != 10530467617556900LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x117 = INT32_MAX;
	int32_t x118 = 16169825;
	uint16_t x119 = 4U;
	int32_t x120 = INT32_MAX;
	static volatile int32_t t14 = INT32_MAX;

	t14 = (x117>>((x118==x119)/x120));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x125 = 11U;
	int8_t x126 = INT8_MIN;
	static int64_t x127 = INT64_MIN;
	volatile uint32_t t15 = 9082436U;

	t15 = (x125>>((x126==x127)/x128));

	if (t15 != 11U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x141 = UINT32_MAX;
	int32_t x142 = INT32_MAX;
	uint64_t x144 = 377278025LLU;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (x141>>((x142==x143)/x144));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x145 = INT16_MAX;
	volatile uint32_t x147 = 7U;
	int64_t x148 = INT64_MIN;
	volatile int32_t t17 = -372835725;

	t17 = (x145>>((x146==x147)/x148));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x161 = 1260;
	uint64_t x162 = 74877088LLU;
	int16_t x163 = INT16_MIN;
	volatile int8_t x164 = INT8_MAX;

	t18 = (x161>>((x162==x163)/x164));

	if (t18 != 1260) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x165 = 10U;
	int8_t x166 = -1;
	int64_t x168 = INT64_MIN;
	int32_t t19 = 16596;

	t19 = (x165>>((x166==x167)/x168));

	if (t19 != 10) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x169 = 3999656628231LL;
	int8_t x170 = INT8_MIN;
	volatile uint64_t x171 = UINT64_MAX;
	int64_t x172 = 165LL;

	t20 = (x169>>((x170==x171)/x172));

	if (t20 != 3999656628231LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x182 = INT8_MIN;
	int32_t x183 = 201916;
	volatile int8_t x184 = INT8_MAX;
	volatile int32_t t21 = 92445;

	t21 = (x181>>((x182==x183)/x184));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x185 = UINT64_MAX;
	uint8_t x186 = UINT8_MAX;
	uint16_t x187 = UINT16_MAX;
	volatile int8_t x188 = INT8_MAX;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = (x185>>((x186==x187)/x188));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x189 = 764U;
	int8_t x191 = INT8_MAX;
	int16_t x192 = INT16_MIN;
	int32_t t23 = -74085;

	t23 = (x189>>((x190==x191)/x192));

	if (t23 != 764) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x193 = 918022U;
	static int64_t x194 = INT64_MIN;
	uint32_t t24 = 124318U;

	t24 = (x193>>((x194==x195)/x196));

	if (t24 != 918022U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x209 = 3516147LLU;
	int16_t x210 = INT16_MAX;
	volatile int64_t x211 = INT64_MIN;
	volatile uint64_t t25 = 56LLU;

	t25 = (x209>>((x210==x211)/x212));

	if (t25 != 3516147LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x217 = 87U;
	volatile int32_t x218 = INT32_MIN;
	static int16_t x219 = INT16_MIN;
	volatile uint32_t x220 = 13U;
	uint32_t t26 = 2408163U;

	t26 = (x217>>((x218==x219)/x220));

	if (t26 != 87U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x221 = INT64_MAX;
	uint64_t x222 = 405561789LLU;
	uint64_t x223 = UINT64_MAX;
	int8_t x224 = INT8_MAX;
	volatile int64_t t27 = INT64_MAX;

	t27 = (x221>>((x222==x223)/x224));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x225 = 13842U;
	int64_t x226 = -87866093LL;
	uint8_t x227 = UINT8_MAX;
	static int32_t x228 = -1;
	volatile uint32_t t28 = 1697684166U;

	t28 = (x225>>((x226==x227)/x228));

	if (t28 != 13842U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x237 = INT8_MAX;
	int64_t x238 = -1LL;
	uint32_t x239 = 1U;
	int32_t x240 = INT32_MIN;
	int32_t t29 = -192;

	t29 = (x237>>((x238==x239)/x240));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x249 = INT16_MAX;
	static uint8_t x252 = 1U;
	int32_t t30 = 1;

	t30 = (x249>>((x250==x251)/x252));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x254 = 3U;
	int16_t x255 = INT16_MAX;
	volatile int32_t t31 = 426874559;

	t31 = (x253>>((x254==x255)/x256));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x277 = 2402;
	int8_t x279 = -1;
	volatile int32_t x280 = 80578773;

	t32 = (x277>>((x278==x279)/x280));

	if (t32 != 2402) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x285 = INT16_MAX;
	int16_t x286 = -18;
	int8_t x287 = 29;
	volatile int32_t t33 = 44;

	t33 = (x285>>((x286==x287)/x288));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x289 = 405607423LLU;
	int64_t x290 = -1LL;
	int16_t x291 = INT16_MIN;
	int32_t x292 = INT32_MIN;
	uint64_t t34 = 10995LLU;

	t34 = (x289>>((x290==x291)/x292));

	if (t34 != 405607423LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x293 = UINT64_MAX;
	volatile int8_t x294 = -1;
	volatile int16_t x296 = 1;

	t35 = (x293>>((x294==x295)/x296));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x297 = UINT8_MAX;
	volatile uint64_t x298 = UINT64_MAX;
	int16_t x299 = INT16_MIN;
	int64_t x300 = 154262380760LL;
	volatile int32_t t36 = 1;

	t36 = (x297>>((x298==x299)/x300));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x301 = 10;
	int64_t x302 = INT64_MAX;
	static int32_t x303 = INT32_MIN;
	static uint64_t x304 = 59029782LLU;
	int32_t t37 = -22847018;

	t37 = (x301>>((x302==x303)/x304));

	if (t37 != 10) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x325 = 1044962834068262632LL;
	int64_t x326 = INT64_MIN;
	uint64_t x327 = UINT64_MAX;
	static int32_t x328 = -1;

	t38 = (x325>>((x326==x327)/x328));

	if (t38 != 1044962834068262632LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x329 = 31U;
	int16_t x330 = INT16_MAX;
	uint32_t x331 = 467727U;
	int16_t x332 = INT16_MAX;
	uint32_t t39 = 20U;

	t39 = (x329>>((x330==x331)/x332));

	if (t39 != 31U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x333 = 2U;
	static int8_t x334 = INT8_MAX;
	uint64_t x335 = 764959526302381LLU;
	static uint32_t x336 = UINT32_MAX;
	int32_t t40 = 113445;

	t40 = (x333>>((x334==x335)/x336));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x337 = 132090598934364LL;
	int16_t x338 = INT16_MIN;
	volatile uint16_t x339 = 14U;
	uint16_t x340 = 970U;
	int64_t t41 = 54738033192133LL;

	t41 = (x337>>((x338==x339)/x340));

	if (t41 != 132090598934364LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x345 = 0U;
	volatile int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MIN;
	volatile int32_t t42 = 506982;

	t42 = (x345>>((x346==x347)/x348));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x349 = 3;
	volatile uint8_t x350 = 13U;
	volatile uint64_t x352 = 171309462870125LLU;

	t43 = (x349>>((x350==x351)/x352));

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x353 = 87U;
	volatile int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	uint64_t x356 = 87305LLU;

	t44 = (x353>>((x354==x355)/x356));

	if (t44 != 87) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x361 = 32U;
	int32_t x362 = -214204;
	uint64_t x364 = 2019497LLU;
	int32_t t45 = 5291049;

	t45 = (x361>>((x362==x363)/x364));

	if (t45 != 32) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x374 = INT16_MAX;
	int64_t x375 = -1LL;
	static volatile int8_t x376 = 1;
	static int32_t t46 = 34179006;

	t46 = (x373>>((x374==x375)/x376));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x377 = 6U;
	int16_t x378 = -1;
	int8_t x379 = INT8_MIN;
	static int32_t x380 = 209955;

	t47 = (x377>>((x378==x379)/x380));

	if (t47 != 6) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x381 = 114U;
	static int8_t x383 = -1;
	int16_t x384 = -369;
	volatile int32_t t48 = 195483;

	t48 = (x381>>((x382==x383)/x384));

	if (t48 != 114) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x389 = UINT8_MAX;
	volatile int16_t x390 = -1;
	static volatile int64_t x391 = -235LL;
	volatile int32_t t49 = -143481175;

	t49 = (x389>>((x390==x391)/x392));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x397 = 504U;
	static uint16_t x399 = UINT16_MAX;
	static uint32_t x400 = 185U;
	uint32_t t50 = 74U;

	t50 = (x397>>((x398==x399)/x400));

	if (t50 != 504U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x401 = 398344LLU;
	volatile int16_t x402 = INT16_MIN;
	static volatile int8_t x403 = INT8_MIN;
	static int16_t x404 = 243;

	t51 = (x401>>((x402==x403)/x404));

	if (t51 != 398344LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x405 = 0;
	uint64_t x407 = 745191624592LLU;
	int64_t x408 = INT64_MAX;
	volatile int32_t t52 = 106088;

	t52 = (x405>>((x406==x407)/x408));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x409 = 4;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = UINT32_MAX;
	int8_t x412 = INT8_MAX;
	static volatile int32_t t53 = 7278541;

	t53 = (x409>>((x410==x411)/x412));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x417 = 21543U;
	uint8_t x418 = UINT8_MAX;
	uint64_t x419 = 5174930000804456LLU;

	t54 = (x417>>((x418==x419)/x420));

	if (t54 != 21543) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x427 = INT32_MIN;
	static uint32_t x428 = 151U;
	static int32_t t55 = 13067;

	t55 = (x425>>((x426==x427)/x428));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x429 = 1141;
	static int16_t x430 = INT16_MIN;
	int32_t x431 = INT32_MIN;
	volatile int16_t x432 = -1;
	static int32_t t56 = 0;

	t56 = (x429>>((x430==x431)/x432));

	if (t56 != 1141) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x434 = -199751463656620LL;
	int16_t x435 = INT16_MAX;
	uint64_t x436 = UINT64_MAX;
	int32_t t57 = -1;

	t57 = (x433>>((x434==x435)/x436));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x437 = 1623108618LLU;
	uint16_t x438 = UINT16_MAX;
	int16_t x439 = INT16_MIN;
	int8_t x440 = -59;
	volatile uint64_t t58 = 229571LLU;

	t58 = (x437>>((x438==x439)/x440));

	if (t58 != 1623108618LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x441 = 131U;
	int32_t x442 = -1;
	uint8_t x443 = 68U;
	volatile int8_t x444 = -6;
	int32_t t59 = -587;

	t59 = (x441>>((x442==x443)/x444));

	if (t59 != 131) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x449 = 9U;
	int64_t x450 = INT64_MIN;
	uint32_t x452 = 10850820U;
	volatile uint32_t t60 = 2U;

	t60 = (x449>>((x450==x451)/x452));

	if (t60 != 9U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x461 = 1;
	static uint32_t x462 = UINT32_MAX;
	int32_t x463 = -1;
	volatile int16_t x464 = INT16_MAX;
	int32_t t61 = 66123535;

	t61 = (x461>>((x462==x463)/x464));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x465 = INT16_MAX;
	uint16_t x467 = 32U;
	uint16_t x468 = 2014U;
	int32_t t62 = -31;

	t62 = (x465>>((x466==x467)/x468));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x481 = INT64_MAX;
	uint32_t x482 = 5U;
	int64_t x483 = -2490LL;
	uint32_t x484 = UINT32_MAX;
	int64_t t63 = INT64_MAX;

	t63 = (x481>>((x482==x483)/x484));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x485 = 0;
	static int64_t x486 = INT64_MIN;
	volatile int32_t x487 = INT32_MAX;
	uint8_t x488 = 1U;
	volatile int32_t t64 = -644;

	t64 = (x485>>((x486==x487)/x488));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x489 = INT8_MAX;
	int64_t x491 = -1LL;
	static int8_t x492 = -1;
	volatile int32_t t65 = 133024331;

	t65 = (x489>>((x490==x491)/x492));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x493 = 1645269U;
	uint8_t x496 = UINT8_MAX;

	t66 = (x493>>((x494==x495)/x496));

	if (t66 != 1645269U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x498 = -1LL;
	int32_t x499 = INT32_MAX;

	t67 = (x497>>((x498==x499)/x500));

	if (t67 != 3353) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x521 = 3LL;
	int8_t x522 = -1;
	volatile int32_t x523 = 18746;
	static int8_t x524 = INT8_MIN;

	t68 = (x521>>((x522==x523)/x524));

	if (t68 != 3LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x533 = UINT32_MAX;
	int8_t x535 = INT8_MIN;
	int32_t x536 = INT32_MAX;
	uint32_t t69 = UINT32_MAX;

	t69 = (x533>>((x534==x535)/x536));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x541 = 24U;
	uint32_t x543 = 235466106U;
	volatile uint16_t x544 = 7U;

	t70 = (x541>>((x542==x543)/x544));

	if (t70 != 24) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x546 = INT64_MIN;
	static int32_t t71 = -1850395;

	t71 = (x545>>((x546==x547)/x548));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x549 = 1016U;
	uint64_t x550 = 611299523764148699LLU;
	int8_t x551 = -1;
	uint8_t x552 = 4U;

	t72 = (x549>>((x550==x551)/x552));

	if (t72 != 1016U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x561 = INT64_MAX;
	static uint64_t x562 = 87402505478746LLU;
	int16_t x563 = -29;
	static volatile uint16_t x564 = 95U;

	t73 = (x561>>((x562==x563)/x564));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x569 = INT64_MAX;
	int8_t x570 = INT8_MAX;
	int64_t x571 = -561461949464955044LL;
	volatile uint16_t x572 = UINT16_MAX;

	t74 = (x569>>((x570==x571)/x572));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x577 = 28;
	int8_t x578 = -1;
	static int8_t x579 = -1;
	int64_t x580 = -238316LL;
	int32_t t75 = -212;

	t75 = (x577>>((x578==x579)/x580));

	if (t75 != 28) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x585 = 31;
	int16_t x586 = INT16_MAX;
	static uint8_t x587 = 7U;
	volatile int32_t t76 = 1958;

	t76 = (x585>>((x586==x587)/x588));

	if (t76 != 31) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x590 = 123470628754903891LL;
	static uint64_t x591 = 1899LLU;
	int8_t x592 = 1;
	static volatile int32_t t77 = -38535;

	t77 = (x589>>((x590==x591)/x592));

	if (t77 != 31) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x597 = 0U;
	uint8_t x598 = 2U;
	int16_t x600 = 9;
	int32_t t78 = 511800;

	t78 = (x597>>((x598==x599)/x600));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x606 = 78U;
	volatile uint8_t x607 = 9U;
	int64_t x608 = -1LL;
	uint64_t t79 = 1024269835LLU;

	t79 = (x605>>((x606==x607)/x608));

	if (t79 != 700763948LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x621 = 1U;
	uint16_t x622 = 56U;
	static uint64_t x623 = 77352LLU;
	static uint64_t x624 = 2249634860307227100LLU;
	volatile int32_t t80 = -15;

	t80 = (x621>>((x622==x623)/x624));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x625 = UINT64_MAX;
	int64_t x626 = -1LL;
	int32_t x627 = INT32_MAX;
	static int32_t x628 = -1;
	uint64_t t81 = UINT64_MAX;

	t81 = (x625>>((x626==x627)/x628));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x629 = 5565U;
	int64_t x630 = INT64_MIN;
	int8_t x632 = INT8_MIN;
	uint32_t t82 = 42U;

	t82 = (x629>>((x630==x631)/x632));

	if (t82 != 5565U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x637 = INT16_MAX;
	uint32_t x639 = 41252U;
	static volatile int32_t x640 = -1;
	int32_t t83 = 1;

	t83 = (x637>>((x638==x639)/x640));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x641 = INT64_MAX;
	int16_t x642 = 0;
	int16_t x643 = -470;
	static int8_t x644 = INT8_MIN;
	int64_t t84 = INT64_MAX;

	t84 = (x641>>((x642==x643)/x644));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x645 = 0U;
	int8_t x646 = -1;
	int8_t x647 = INT8_MIN;
	int64_t x648 = INT64_MAX;

	t85 = (x645>>((x646==x647)/x648));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x649 = 7463883U;
	static int32_t x651 = INT32_MAX;
	volatile uint8_t x652 = UINT8_MAX;
	uint32_t t86 = 407329238U;

	t86 = (x649>>((x650==x651)/x652));

	if (t86 != 7463883U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x655 = -83;
	static uint64_t x656 = UINT64_MAX;

	t87 = (x653>>((x654==x655)/x656));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x665 = INT16_MAX;
	int16_t x666 = -1;
	int32_t x668 = INT32_MIN;
	static int32_t t88 = -52133032;

	t88 = (x665>>((x666==x667)/x668));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x681 = 98964766U;
	int8_t x682 = 4;
	uint64_t x683 = 1279607679020190743LLU;
	volatile int32_t x684 = -243;

	t89 = (x681>>((x682==x683)/x684));

	if (t89 != 98964766U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x689 = UINT64_MAX;
	volatile uint64_t x690 = 215802832335LLU;
	int32_t x691 = INT32_MAX;
	uint16_t x692 = UINT16_MAX;

	t90 = (x689>>((x690==x691)/x692));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x693 = 23591378;
	static int16_t x695 = -1;
	int64_t x696 = 90340089143524674LL;
	int32_t t91 = 597771;

	t91 = (x693>>((x694==x695)/x696));

	if (t91 != 23591378) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x697 = INT16_MAX;
	int32_t x699 = -133374965;
	volatile int32_t t92 = -586;

	t92 = (x697>>((x698==x699)/x700));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x705 = UINT64_MAX;
	int64_t x706 = -1LL;
	uint32_t x707 = UINT32_MAX;
	uint32_t x708 = 459253U;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x705>>((x706==x707)/x708));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x709 = 3726U;
	int16_t x710 = INT16_MIN;
	int64_t x711 = INT64_MAX;
	uint16_t x712 = UINT16_MAX;
	volatile int32_t t94 = -16;

	t94 = (x709>>((x710==x711)/x712));

	if (t94 != 3726) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x715 = -21077208444LL;
	int32_t t95 = -565571635;

	t95 = (x713>>((x714==x715)/x716));

	if (t95 != 15404) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x721 = 27910674054117LL;
	uint64_t x722 = 4025866485004LLU;
	volatile uint16_t x724 = 9U;
	int64_t t96 = -492156LL;

	t96 = (x721>>((x722==x723)/x724));

	if (t96 != 27910674054117LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x730 = 666664513247566795LLU;
	int32_t t97 = INT32_MAX;

	t97 = (x729>>((x730==x731)/x732));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x733 = 1LL;
	uint16_t x734 = UINT16_MAX;

	t98 = (x733>>((x734==x735)/x736));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x745 = INT8_MAX;
	uint16_t x746 = UINT16_MAX;
	int8_t x747 = INT8_MAX;
	int32_t x748 = -1;
	static int32_t t99 = 2262;

	t99 = (x745>>((x746==x747)/x748));

	if (t99 != 127) { NG(); } else { ; }
	
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

