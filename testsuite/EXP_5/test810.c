#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -202146697456LL;
int16_t x8 = -1;
volatile uint64_t t3 = 58LLU;
volatile int8_t x26 = INT8_MIN;
static uint32_t x27 = UINT32_MAX;
int16_t x28 = INT16_MAX;
volatile int64_t x38 = 36029267LL;
volatile int32_t x44 = 364566375;
uint64_t t6 = 682026419438602LLU;
int16_t x48 = INT16_MIN;
int16_t x57 = INT16_MIN;
int32_t x70 = 215;
static uint8_t x74 = 10U;
static volatile int64_t x75 = INT64_MAX;
int64_t t12 = 7LL;
int16_t x78 = INT16_MIN;
volatile int32_t x80 = 6388781;
uint32_t t14 = 14895U;
uint64_t x87 = 1116781LLU;
volatile uint8_t x96 = UINT8_MAX;
volatile int64_t t16 = 2551014169657669LL;
volatile uint64_t t17 = 864639LLU;
int32_t x106 = -1;
int32_t x119 = INT32_MIN;
int16_t x120 = 7;
int64_t t21 = 206413LL;
int32_t x143 = INT32_MIN;
volatile int64_t x144 = -22823955878296207LL;
volatile int32_t x154 = -10146027;
volatile int8_t x155 = 17;
int16_t x177 = -1;
volatile int32_t t26 = -62811693;
int16_t x193 = INT16_MIN;
int64_t t28 = -2588717LL;
uint8_t x201 = UINT8_MAX;
static int16_t x209 = INT16_MIN;
uint16_t x217 = 2U;
volatile int32_t x219 = -19723;
int16_t x223 = INT16_MAX;
int64_t x228 = INT64_MIN;
int32_t x239 = -1151395;
uint16_t x242 = 176U;
volatile int64_t t38 = 30278483LL;
int64_t t39 = 128501179250693LL;
int8_t x262 = -27;
int32_t x264 = -97;
int8_t x289 = INT8_MIN;
volatile int8_t x292 = -47;
static volatile int64_t x293 = INT64_MIN;
static uint32_t x297 = 619984102U;
int8_t x306 = INT8_MIN;
volatile uint16_t x307 = UINT16_MAX;
static uint64_t x314 = 6238502482LLU;
volatile uint32_t x321 = UINT32_MAX;
int8_t x327 = -43;
volatile int64_t x330 = -1LL;
int8_t x331 = 40;
volatile uint16_t x337 = UINT16_MAX;
int64_t x346 = INT64_MIN;
uint8_t x348 = 55U;
int64_t x375 = INT64_MAX;
uint64_t x380 = UINT64_MAX;
int16_t x389 = INT16_MAX;
int8_t x390 = 6;
int16_t x401 = 3371;
int8_t x403 = INT8_MAX;
int16_t x426 = 688;
uint16_t x438 = 777U;
int32_t x444 = -193688;
int64_t t66 = 0LL;
uint64_t x446 = 367612392208LLU;
volatile uint64_t t68 = 4LLU;
uint64_t x461 = 5LLU;
volatile int16_t x464 = INT16_MIN;
int8_t x493 = INT8_MIN;
uint64_t x494 = 1641706205LLU;
uint32_t x495 = 3026880U;
uint64_t t72 = 63LLU;
int64_t t73 = 250232335418340LL;
uint32_t x510 = UINT32_MAX;
uint32_t x533 = 220548401U;
uint32_t x553 = 3U;
int16_t x554 = INT16_MAX;
uint16_t x561 = 17U;
volatile int32_t x563 = INT32_MIN;
static volatile uint32_t x564 = UINT32_MAX;
uint32_t t81 = 117498850U;
volatile int16_t x565 = INT16_MIN;
int8_t x573 = INT8_MAX;
int16_t x575 = -196;
static int64_t x592 = INT64_MIN;
volatile uint64_t t86 = 369558955074206665LLU;
uint64_t t87 = 6823684428438460LLU;
volatile int32_t x607 = -11416;
uint64_t t91 = 46347177657LLU;
int64_t x617 = -1LL;
volatile int16_t x618 = -1;
int16_t x622 = INT16_MAX;
int8_t x623 = INT8_MIN;
uint16_t x624 = UINT16_MAX;
int16_t x630 = -1;
uint16_t x632 = UINT16_MAX;
volatile int16_t x645 = 2054;
int8_t x659 = INT8_MAX;
volatile int64_t t97 = 5174005520LL;
int16_t x685 = INT16_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile uint16_t x2 = 3U;
	int64_t x3 = -2286308092756273242LL;
	uint32_t x4 = UINT32_MAX;

	t0 = (x1/((x2%x3)&x4));

	if (t0 != 42LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint64_t x6 = 4688111LLU;
	volatile int32_t x7 = INT32_MIN;
	volatile uint64_t t1 = 11835315453368123LLU;

	t1 = (x5/((x6%x7)&x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	int8_t x10 = INT8_MIN;
	int16_t x11 = -103;
	volatile int64_t x12 = 70286263925747010LL;
	volatile int64_t t2 = -793LL;

	t2 = (x9/((x10%x11)&x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -1LL;
	int32_t x22 = INT32_MAX;
	volatile int8_t x23 = INT8_MIN;
	uint64_t x24 = 33325LLU;

	t3 = (x21/((x22%x23)&x24));

	if (t3 != 409927646082434480LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	volatile int64_t t4 = -5571916128503057LL;

	t4 = (x25/((x26%x27)&x28));

	if (t4 != -282578800148737LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x37 = 715126230U;
	int64_t x39 = 10292802LL;
	int8_t x40 = INT8_MIN;
	volatile int64_t t5 = -234LL;

	t5 = (x37/((x38%x39)&x40));

	if (t5 != 138LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x41 = 873403930179495LLU;
	int64_t x42 = -1LL;
	int16_t x43 = INT16_MAX;

	t6 = (x41/((x42%x43)&x44));

	if (t6 != 2395733LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = INT32_MIN;
	int8_t x46 = INT8_MIN;
	uint32_t x47 = 397361041U;
	uint32_t t7 = 907026852U;

	t7 = (x45/((x46%x47)&x48));

	if (t7 != 6U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x49 = 1929006;
	uint32_t x50 = 6U;
	static int64_t x51 = -43391322292249LL;
	int32_t x52 = -1;
	volatile int64_t t8 = 99877793LL;

	t8 = (x49/((x50%x51)&x52));

	if (t8 != 321501LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x58 = INT64_MIN;
	volatile int64_t x59 = 119942166233088534LL;
	static int8_t x60 = 8;
	int64_t t9 = -87616859700345770LL;

	t9 = (x57/((x58%x59)&x60));

	if (t9 != -4096LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = 10;
	static int8_t x62 = INT8_MIN;
	int16_t x63 = INT16_MIN;
	static uint16_t x64 = UINT16_MAX;
	int32_t t10 = 3;

	t10 = (x61/((x62%x63)&x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x69 = -1;
	static int16_t x71 = 3889;
	uint64_t x72 = 1856261416160LLU;
	static uint64_t t11 = 36285030719990324LLU;

	t11 = (x69/((x70%x71)&x72));

	if (t11 != 96076792050570581LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = INT8_MIN;
	uint8_t x76 = UINT8_MAX;

	t12 = (x73/((x74%x75)&x76));

	if (t12 != -12LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x77 = INT16_MIN;
	static volatile uint32_t x79 = UINT32_MAX;
	uint32_t t13 = 122577U;

	t13 = (x77/((x78%x79)&x80));

	if (t13 != 675U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x81 = 1837138U;
	uint16_t x82 = 1113U;
	uint16_t x83 = UINT16_MAX;
	int8_t x84 = INT8_MAX;

	t14 = (x81/((x82%x83)&x84));

	if (t14 != 20642U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x85 = INT64_MAX;
	uint16_t x86 = 667U;
	volatile uint64_t x88 = 50LLU;
	uint64_t t15 = 50LLU;

	t15 = (x85/((x86%x87)&x88));

	if (t15 != 512409557603043100LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MAX;
	int32_t x95 = 3840746;

	t16 = (x93/((x94%x95)&x96));

	if (t16 != -697LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x101 = -1;
	static int8_t x102 = 59;
	uint64_t x103 = 211092LLU;
	uint8_t x104 = 15U;

	t17 = (x101/((x102%x103)&x104));

	if (t17 != 1676976733973595601LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x105 = 6U;
	volatile int16_t x107 = INT16_MAX;
	static uint64_t x108 = 2927969962LLU;
	uint64_t t18 = 3213208094LLU;

	t18 = (x105/((x106%x107)&x108));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x117 = -1;
	uint8_t x118 = UINT8_MAX;
	int32_t t19 = 2834131;

	t19 = (x117/((x118%x119)&x120));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x121 = UINT16_MAX;
	volatile uint16_t x122 = UINT16_MAX;
	uint32_t x123 = UINT32_MAX;
	int32_t x124 = -1;
	volatile uint32_t t20 = 56004082U;

	t20 = (x121/((x122%x123)&x124));

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x129 = -1LL;
	uint8_t x130 = 3U;
	int32_t x131 = INT32_MIN;
	uint8_t x132 = 11U;

	t21 = (x129/((x130%x131)&x132));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x141 = INT64_MIN;
	int32_t x142 = INT32_MAX;
	int64_t t22 = -357258865167733542LL;

	t22 = (x141/((x142%x143)&x144));

	if (t22 != -13245543099LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x153 = UINT32_MAX;
	int16_t x156 = INT16_MIN;
	static uint32_t t23 = 3869U;

	t23 = (x153/((x154%x155)&x156));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x157 = 0U;
	int8_t x158 = INT8_MIN;
	uint16_t x159 = UINT16_MAX;
	uint64_t x160 = 547299214333986545LLU;
	static volatile uint64_t t24 = 26707875LLU;

	t24 = (x157/((x158%x159)&x160));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x161 = INT64_MAX;
	int16_t x162 = -7120;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = INT8_MIN;
	volatile int64_t t25 = -104402LL;

	t25 = (x161/((x162%x163)&x164));

	if (t25 != -1286742750677284LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x178 = -333;
	uint16_t x179 = 1456U;
	int16_t x180 = -4069;

	t26 = (x177/((x178%x179)&x180));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x185 = 4154916U;
	int32_t x186 = INT32_MIN;
	int64_t x187 = 1120491LL;
	uint8_t x188 = 7U;
	volatile int64_t t27 = 45559067931233257LL;

	t27 = (x185/((x186%x187)&x188));

	if (t27 != 1038729LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x194 = -1LL;
	int32_t x195 = -11909539;
	uint16_t x196 = 29165U;

	t28 = (x193/((x194%x195)&x196));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x197 = INT8_MAX;
	volatile int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	static uint16_t x200 = UINT16_MAX;
	static volatile int32_t t29 = 0;

	t29 = (x197/((x198%x199)&x200));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x202 = INT64_MIN;
	uint32_t x203 = 2034316U;
	uint8_t x204 = 50U;
	static volatile int64_t t30 = 884153264580LL;

	t30 = (x201/((x202%x203)&x204));

	if (t30 != 5LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x205 = -58;
	int32_t x206 = INT32_MIN;
	uint64_t x207 = 4772LLU;
	volatile int8_t x208 = INT8_MAX;
	volatile uint64_t t31 = 492180LLU;

	t31 = (x205/((x206%x207)&x208));

	if (t31 != 768614336404564648LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x210 = INT8_MIN;
	int32_t x211 = 29186;
	int32_t x212 = INT32_MIN;
	volatile int32_t t32 = 24195872;

	t32 = (x209/((x210%x211)&x212));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x218 = INT32_MAX;
	int8_t x220 = 31;
	int32_t t33 = -1544;

	t33 = (x217/((x218%x219)&x220));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x221 = 2030987U;
	int32_t x222 = INT32_MIN;
	uint8_t x224 = 6U;
	uint32_t t34 = 451U;

	t34 = (x221/((x222%x223)&x224));

	if (t34 != 338497U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x225 = 0U;
	static int16_t x226 = -1;
	uint16_t x227 = UINT16_MAX;
	int64_t t35 = 71021275372191LL;

	t35 = (x225/((x226%x227)&x228));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x229 = -1;
	int16_t x230 = 1;
	int16_t x231 = INT16_MIN;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x229/((x230%x231)&x232));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x237 = 157861LLU;
	volatile int8_t x238 = -23;
	uint64_t x240 = UINT64_MAX;
	uint64_t t37 = 45806777LLU;

	t37 = (x237/((x238%x239)&x240));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x241 = 10U;
	int32_t x243 = INT32_MAX;
	int64_t x244 = INT64_MAX;

	t38 = (x241/((x242%x243)&x244));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x245 = INT32_MAX;
	int32_t x246 = -778;
	int64_t x247 = INT64_MAX;
	volatile int8_t x248 = INT8_MAX;

	t39 = (x245/((x246%x247)&x248));

	if (t39 != 18199013LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x249 = UINT64_MAX;
	static int32_t x250 = -1;
	static int64_t x251 = 31420207792LL;
	int32_t x252 = INT32_MAX;
	static volatile uint64_t t40 = 619223LLU;

	t40 = (x249/((x250%x251)&x252));

	if (t40 != 8589934596LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x261 = -1;
	int16_t x263 = INT16_MIN;
	int32_t t41 = 2386;

	t41 = (x261/((x262%x263)&x264));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x269 = 3451127LL;
	int32_t x270 = INT32_MIN;
	uint8_t x271 = 72U;
	int64_t x272 = INT64_MAX;
	volatile int64_t t42 = -6722LL;

	t42 = (x269/((x270%x271)&x272));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x290 = INT8_MAX;
	int16_t x291 = -6;
	volatile int32_t t43 = -1433;

	t43 = (x289/((x290%x291)&x292));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x294 = 10055U;
	int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MAX;
	int64_t t44 = -322610448166201110LL;

	t44 = (x293/((x294%x295)&x296));

	if (t44 != -129906648406405293LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x298 = INT16_MIN;
	volatile uint16_t x299 = UINT16_MAX;
	int16_t x300 = -188;
	volatile uint32_t t45 = 6719972U;

	t45 = (x297/((x298%x299)&x300));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x305 = -1;
	int16_t x308 = INT16_MIN;
	int32_t t46 = 1;

	t46 = (x305/((x306%x307)&x308));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x313 = UINT32_MAX;
	int64_t x315 = -1672LL;
	volatile int16_t x316 = -1;
	volatile uint64_t t47 = 1710118738122250820LLU;

	t47 = (x313/((x314%x315)&x316));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x317 = 3639LL;
	volatile int64_t x318 = 27975681189371029LL;
	static volatile uint32_t x319 = UINT32_MAX;
	int64_t x320 = -1LL;
	volatile int64_t t48 = 907LL;

	t48 = (x317/((x318%x319)&x320));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x322 = 10U;
	int16_t x323 = -30;
	volatile uint8_t x324 = UINT8_MAX;
	static volatile uint32_t t49 = 1471486466U;

	t49 = (x321/((x322%x323)&x324));

	if (t49 != 429496729U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x325 = 1790U;
	int32_t x326 = INT32_MAX;
	int64_t x328 = -1LL;
	volatile int64_t t50 = 3LL;

	t50 = (x325/((x326%x327)&x328));

	if (t50 != 255LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x329 = 239413529LL;
	int64_t x332 = 22271219100506LL;
	int64_t t51 = -215LL;

	t51 = (x329/((x330%x331)&x332));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x338 = -1;
	static volatile uint8_t x339 = 5U;
	uint16_t x340 = 161U;
	int32_t t52 = 97;

	t52 = (x337/((x338%x339)&x340));

	if (t52 != 407) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x341 = INT64_MIN;
	uint64_t x342 = 133094548601LLU;
	int32_t x343 = -1;
	volatile uint64_t x344 = UINT64_MAX;
	uint64_t t53 = 2705539145LLU;

	t53 = (x341/((x342%x343)&x344));

	if (t53 != 69299397LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x345 = 466;
	static uint32_t x347 = 10886U;
	int64_t t54 = -156689176636110LL;

	t54 = (x345/((x346%x347)&x348));

	if (t54 != 233LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MIN;
	uint8_t x351 = UINT8_MAX;
	int8_t x352 = -1;
	volatile int32_t t55 = -1050258215;

	t55 = (x349/((x350%x351)&x352));

	if (t55 != 256) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x369 = 6;
	int64_t x370 = INT64_MIN;
	static volatile uint32_t x371 = UINT32_MAX;
	static int32_t x372 = -1;
	volatile int64_t t56 = 12708470297060472LL;

	t56 = (x369/((x370%x371)&x372));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x373 = UINT16_MAX;
	int32_t x374 = -1;
	uint8_t x376 = UINT8_MAX;
	volatile int64_t t57 = 75140135LL;

	t57 = (x373/((x374%x375)&x376));

	if (t57 != 257LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x377 = 6;
	int32_t x378 = 708087;
	uint16_t x379 = 2U;
	uint64_t t58 = 44LLU;

	t58 = (x377/((x378%x379)&x380));

	if (t58 != 6LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x391 = -23;
	int64_t x392 = -1LL;
	static int64_t t59 = 373289LL;

	t59 = (x389/((x390%x391)&x392));

	if (t59 != 5461LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x393 = 767792103;
	uint32_t x394 = UINT32_MAX;
	int16_t x395 = INT16_MIN;
	int32_t x396 = -934449672;
	static uint32_t t60 = 712U;

	t60 = (x393/((x394%x395)&x396));

	if (t60 != 27273U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x402 = 57U;
	int8_t x404 = -1;
	volatile int32_t t61 = 27;

	t61 = (x401/((x402%x403)&x404));

	if (t61 != 59) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x417 = 6U;
	int8_t x418 = INT8_MAX;
	int32_t x419 = INT32_MIN;
	volatile uint64_t x420 = 1LLU;
	static volatile uint64_t t62 = 4973LLU;

	t62 = (x417/((x418%x419)&x420));

	if (t62 != 6LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x425 = 18;
	static int32_t x427 = 688141077;
	int32_t x428 = 21713;
	volatile int32_t t63 = -121;

	t63 = (x425/((x426%x427)&x428));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x429 = -13LL;
	uint8_t x430 = 23U;
	static int64_t x431 = -402812279250777224LL;
	uint8_t x432 = 5U;
	volatile int64_t t64 = 7500921267258778LL;

	t64 = (x429/((x430%x431)&x432));

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x437 = -8195498219116LL;
	int64_t x439 = INT64_MIN;
	uint64_t x440 = 38998753940LLU;
	uint64_t t65 = 796021750LLU;

	t65 = (x437/((x438%x439)&x440));

	if (t65 != 36028781012131508LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x441 = UINT32_MAX;
	int64_t x442 = 18037637497714841LL;
	volatile int32_t x443 = INT32_MIN;

	t66 = (x441/((x442%x443)&x444));

	if (t66 != 4LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x445 = INT32_MIN;
	uint64_t x447 = 1095615610132760285LLU;
	static volatile uint16_t x448 = UINT16_MAX;
	uint64_t t67 = 1135180673029964LLU;

	t67 = (x445/((x446%x447)&x448));

	if (t67 != 296457059519832LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x457 = -1LL;
	volatile int64_t x458 = -6636597905462LL;
	volatile int64_t x459 = 2844LL;
	volatile uint64_t x460 = UINT64_MAX;

	t68 = (x457/((x458%x459)&x460));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x462 = -371919250263857LL;
	volatile uint8_t x463 = UINT8_MAX;
	volatile uint64_t t69 = 42803595454516422LLU;

	t69 = (x461/((x462%x463)&x464));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x481 = INT8_MIN;
	volatile int8_t x482 = INT8_MIN;
	int32_t x483 = 137200549;
	int64_t x484 = -72974605206LL;
	volatile int64_t t70 = 521LL;

	t70 = (x481/((x482%x483)&x484));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x496 = INT64_MAX;
	volatile uint64_t t71 = 268123LLU;

	t71 = (x493/((x494%x495)&x496));

	if (t71 != 16220554123086LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x497 = INT16_MIN;
	volatile int64_t x498 = INT64_MIN;
	int8_t x499 = INT8_MAX;
	static volatile uint64_t x500 = 278736894082232LLU;

	t72 = (x497/((x498%x499)&x500));

	if (t72 != 66179LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x505 = -1;
	volatile int64_t x506 = INT64_MIN;
	volatile uint8_t x507 = 5U;
	volatile int16_t x508 = 27;

	t73 = (x505/((x506%x507)&x508));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x509 = -1;
	int64_t x511 = INT64_MAX;
	int16_t x512 = INT16_MAX;
	int64_t t74 = -3505813473922235LL;

	t74 = (x509/((x510%x511)&x512));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x517 = INT64_MAX;
	static int64_t x518 = 1LL;
	volatile int8_t x519 = INT8_MAX;
	uint16_t x520 = 16339U;
	static int64_t t75 = INT64_MAX;

	t75 = (x517/((x518%x519)&x520));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x521 = 239U;
	volatile int64_t x522 = -1LL;
	uint32_t x523 = UINT32_MAX;
	volatile int16_t x524 = INT16_MIN;
	int64_t t76 = 143642218239LL;

	t76 = (x521/((x522%x523)&x524));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x529 = INT32_MIN;
	static volatile uint64_t x530 = 927575852945945LLU;
	int8_t x531 = -1;
	int8_t x532 = INT8_MIN;
	uint64_t t77 = 14122747874273LLU;

	t77 = (x529/((x530%x531)&x532));

	if (t77 != 19887LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x534 = -1;
	uint8_t x535 = UINT8_MAX;
	int32_t x536 = -14304;
	static uint32_t t78 = 1278911685U;

	t78 = (x533/((x534%x535)&x536));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x555 = INT32_MIN;
	volatile int64_t x556 = -4275642579LL;
	volatile int64_t t79 = -16582363749LL;

	t79 = (x553/((x554%x555)&x556));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x557 = -1;
	volatile uint32_t x558 = 99439U;
	uint32_t x559 = UINT32_MAX;
	uint64_t x560 = UINT64_MAX;
	volatile uint64_t t80 = 325318762362LLU;

	t80 = (x557/((x558%x559)&x560));

	if (t80 != 185508141410407LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x562 = -1;

	t81 = (x561/((x562%x563)&x564));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x566 = 587U;
	int8_t x567 = 2;
	static uint8_t x568 = 3U;
	int32_t t82 = 3453;

	t82 = (x565/((x566%x567)&x568));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x569 = 12119U;
	volatile uint64_t x570 = UINT64_MAX;
	int16_t x571 = -119;
	uint64_t x572 = UINT64_MAX;
	volatile uint64_t t83 = 7259439358532LLU;

	t83 = (x569/((x570%x571)&x572));

	if (t83 != 102LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x574 = -2144599494053588177LL;
	volatile uint32_t x576 = 1359082U;
	static int64_t t84 = 70306LL;

	t84 = (x573/((x574%x575)&x576));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x585 = INT32_MIN;
	uint8_t x586 = UINT8_MAX;
	uint64_t x587 = 316447920226668027LLU;
	int8_t x588 = -29;
	uint64_t t85 = 6972903LLU;

	t85 = (x585/((x586%x587)&x588));

	if (t85 != 81263189742564176LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x589 = 3LLU;
	int32_t x590 = INT32_MIN;
	int8_t x591 = 40;

	t86 = (x589/((x590%x591)&x592));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x593 = 8U;
	int8_t x594 = INT8_MAX;
	uint64_t x595 = UINT64_MAX;
	uint32_t x596 = 1081734405U;

	t87 = (x593/((x594%x595)&x596));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x597 = INT16_MAX;
	int8_t x598 = INT8_MIN;
	uint16_t x599 = 58U;
	uint16_t x600 = 1486U;
	int32_t t88 = -272564510;

	t88 = (x597/((x598%x599)&x600));

	if (t88 != 22) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x601 = -1;
	int16_t x602 = -3;
	int64_t x603 = INT64_MAX;
	volatile int8_t x604 = INT8_MIN;
	static int64_t t89 = 75412081LL;

	t89 = (x601/((x602%x603)&x604));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x605 = INT16_MIN;
	int32_t x606 = INT32_MIN;
	static uint64_t x608 = 591259613LLU;
	uint64_t t90 = 177LLU;

	t90 = (x605/((x606%x607)&x608));

	if (t90 != 31199506776LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x613 = 4882;
	uint8_t x614 = UINT8_MAX;
	uint8_t x615 = 8U;
	uint64_t x616 = 3076195LLU;

	t91 = (x613/((x614%x615)&x616));

	if (t91 != 1627LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x619 = 2856;
	static int32_t x620 = INT32_MIN;
	volatile int64_t t92 = -920810913440425747LL;

	t92 = (x617/((x618%x619)&x620));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x621 = UINT64_MAX;
	uint64_t t93 = 658044399387LLU;

	t93 = (x621/((x622%x623)&x624));

	if (t93 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x629 = INT16_MIN;
	int16_t x631 = INT16_MAX;
	volatile int32_t t94 = 1561364;

	t94 = (x629/((x630%x631)&x632));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x641 = 527U;
	int16_t x642 = INT16_MIN;
	int16_t x643 = INT16_MAX;
	volatile int8_t x644 = INT8_MIN;
	int32_t t95 = 4741;

	t95 = (x641/((x642%x643)&x644));

	if (t95 != -4) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x646 = UINT8_MAX;
	static int64_t x647 = 22LL;
	int64_t x648 = 27085LL;
	static int64_t t96 = -170398LL;

	t96 = (x645/((x646%x647)&x648));

	if (t96 != 158LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x657 = -1;
	volatile uint8_t x658 = UINT8_MAX;
	int64_t x660 = -1LL;

	t97 = (x657/((x658%x659)&x660));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x681 = 1193738U;
	int16_t x682 = -173;
	static int32_t x683 = INT32_MIN;
	static uint8_t x684 = 1U;
	static uint32_t t98 = 10560733U;

	t98 = (x681/((x682%x683)&x684));

	if (t98 != 1193738U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x686 = -1LL;
	volatile int32_t x687 = -78;
	int8_t x688 = -3;
	int64_t t99 = 3162876116187242337LL;

	t99 = (x685/((x686%x687)&x688));

	if (t99 != 10922LL) { NG(); } else { ; }
	
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

