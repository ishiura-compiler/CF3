#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x33 = 336;
volatile int32_t t6 = 554846;
uint32_t x46 = 0U;
volatile int32_t t7 = 46074;
uint64_t x54 = UINT64_MAX;
int8_t x61 = INT8_MAX;
uint32_t x88 = 1009891U;
uint8_t x89 = 4U;
static volatile int16_t x91 = INT16_MIN;
int32_t t17 = 145;
static int16_t x139 = INT16_MIN;
uint64_t x141 = 129629278271768751LLU;
volatile int32_t x146 = INT32_MIN;
int64_t x148 = INT64_MIN;
int16_t x149 = 883;
int64_t x159 = -1LL;
int16_t x163 = 15;
volatile int32_t t29 = -1361;
uint64_t x170 = UINT64_MAX;
uint8_t x183 = UINT8_MAX;
volatile int32_t t34 = -4882;
uint64_t x194 = 1052604207944821LLU;
uint64_t x207 = 2127422295024LLU;
int32_t t36 = 2727;
volatile uint32_t x209 = UINT32_MAX;
int8_t x258 = INT8_MIN;
int16_t x263 = INT16_MAX;
int64_t x270 = INT64_MIN;
int16_t x273 = INT16_MIN;
int64_t x289 = -1LL;
volatile uint8_t x298 = 32U;
static int64_t x301 = 232376888613LL;
volatile int8_t x312 = INT8_MIN;
volatile int8_t x320 = -1;
static volatile int64_t x328 = -1LL;
int64_t x341 = -81666184079601LL;
int64_t x342 = -1LL;
uint32_t x345 = 352868083U;
int32_t x367 = INT32_MAX;
static uint8_t x371 = UINT8_MAX;
volatile uint32_t x372 = UINT32_MAX;
volatile int32_t t63 = 1057869786;
static uint8_t x380 = 6U;
int8_t x382 = INT8_MAX;
static int8_t x384 = 1;
volatile int32_t t68 = -187689441;
uint64_t x414 = 279162192408483LLU;
int64_t x415 = INT64_MIN;
int32_t t71 = -926325236;
int32_t x424 = INT32_MIN;
volatile int32_t t72 = -35961561;
static volatile int32_t t73 = -88904167;
static uint64_t x429 = 2777293262186706LLU;
int32_t x430 = 756;
volatile uint16_t x433 = 1107U;
int64_t x449 = 32930814LL;
int8_t x460 = -1;
static uint8_t x462 = 0U;
volatile int16_t x465 = 1540;
static int32_t t81 = 0;
volatile int32_t t83 = -234751;
uint32_t x493 = 9U;
int64_t x496 = -4092LL;
int64_t x503 = 158499422578LL;
static volatile int64_t x537 = -110LL;
uint32_t x543 = 27U;
volatile int32_t t90 = -1004;
volatile int8_t x546 = -1;
volatile int32_t t92 = 15508;
int32_t t94 = 2;
volatile uint64_t x569 = 598299843738347LLU;
volatile uint8_t x570 = 12U;
volatile int32_t t99 = -1;


void f0(void) {
	volatile uint16_t x9 = UINT16_MAX;
	int16_t x10 = -1;
	uint16_t x11 = 7459U;
	int64_t x12 = INT64_MIN;
	int32_t t0 = -1;

	t0 = (((x9-x10)*x11)<x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = 184889078736033LL;
	int16_t x14 = INT16_MAX;
	volatile int8_t x15 = INT8_MIN;
	uint32_t x16 = 3564388U;
	volatile int32_t t1 = -158988178;

	t1 = (((x13-x14)*x15)<x16);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x17 = 1418328508517016816LLU;
	int8_t x18 = INT8_MAX;
	static volatile int8_t x19 = INT8_MAX;
	int16_t x20 = -1;
	int32_t t2 = -27019;

	t2 = (((x17-x18)*x19)<x20);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MIN;
	int16_t x22 = INT16_MIN;
	int16_t x23 = -1;
	int16_t x24 = INT16_MIN;
	int32_t t3 = 0;

	t3 = (((x21-x22)*x23)<x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x29 = UINT32_MAX;
	static volatile uint32_t x30 = 17570007U;
	uint32_t x31 = 126301U;
	static uint64_t x32 = 24791556LLU;
	static int32_t t4 = 5438762;

	t4 = (((x29-x30)*x31)<x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x34 = UINT32_MAX;
	uint32_t x35 = 24402U;
	int8_t x36 = INT8_MAX;
	static int32_t t5 = -287620;

	t5 = (((x33-x34)*x35)<x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = 59494879U;
	uint32_t x38 = 252534712U;
	int32_t x39 = INT32_MAX;
	int8_t x40 = INT8_MAX;

	t6 = (((x37-x38)*x39)<x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = 482975948LL;
	static int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MAX;

	t7 = (((x45-x46)*x47)<x48);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x53 = INT8_MAX;
	int16_t x55 = 134;
	volatile int32_t x56 = INT32_MIN;
	volatile int32_t t8 = -40765;

	t8 = (((x53-x54)*x55)<x56);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = -6132LL;
	int32_t x58 = INT32_MIN;
	int16_t x59 = -1;
	volatile uint64_t x60 = UINT64_MAX;
	volatile int32_t t9 = 116;

	t9 = (((x57-x58)*x59)<x60);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x62 = UINT16_MAX;
	int32_t x63 = -1;
	volatile int32_t x64 = -22;
	volatile int32_t t10 = -1043;

	t10 = (((x61-x62)*x63)<x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x69 = -128242247177452LL;
	int64_t x70 = -5614621254895LL;
	uint32_t x71 = 3U;
	uint64_t x72 = 31622LLU;
	int32_t t11 = 1;

	t11 = (((x69-x70)*x71)<x72);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x73 = -28924;
	int16_t x74 = 0;
	uint16_t x75 = UINT16_MAX;
	int64_t x76 = -1LL;
	int32_t t12 = 1;

	t12 = (((x73-x74)*x75)<x76);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = -1;
	uint32_t x78 = 1300413299U;
	static uint32_t x79 = UINT32_MAX;
	int64_t x80 = -412LL;
	int32_t t13 = 19;

	t13 = (((x77-x78)*x79)<x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x81 = INT16_MAX;
	volatile int16_t x82 = 3317;
	uint32_t x83 = 1584692U;
	static uint8_t x84 = 6U;
	int32_t t14 = -156466;

	t14 = (((x81-x82)*x83)<x84);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = 956057412;
	int8_t x86 = INT8_MAX;
	static volatile uint32_t x87 = UINT32_MAX;
	int32_t t15 = -139768;

	t15 = (((x85-x86)*x87)<x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x90 = 88;
	uint16_t x92 = 0U;
	volatile int32_t t16 = 582370623;

	t16 = (((x89-x90)*x91)<x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = -1;
	int16_t x94 = -1561;
	volatile int16_t x95 = 20;
	volatile int8_t x96 = INT8_MIN;

	t17 = (((x93-x94)*x95)<x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x97 = 5LL;
	volatile int8_t x98 = -13;
	static uint16_t x99 = 4695U;
	static volatile int8_t x100 = -1;
	int32_t t18 = -68;

	t18 = (((x97-x98)*x99)<x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x105 = -1;
	volatile int8_t x106 = -49;
	static int8_t x107 = 7;
	uint64_t x108 = UINT64_MAX;
	volatile int32_t t19 = -510172;

	t19 = (((x105-x106)*x107)<x108);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = -1;
	volatile uint32_t x114 = UINT32_MAX;
	int16_t x115 = -1;
	static uint64_t x116 = UINT64_MAX;
	volatile int32_t t20 = -30;

	t20 = (((x113-x114)*x115)<x116);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x125 = -842LL;
	static uint32_t x126 = 143210U;
	uint16_t x127 = 9U;
	int16_t x128 = -1268;
	static int32_t t21 = 114219;

	t21 = (((x125-x126)*x127)<x128);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x129 = 11U;
	static uint64_t x130 = UINT64_MAX;
	int32_t x131 = -361879;
	static uint64_t x132 = 154LLU;
	volatile int32_t t22 = -1694;

	t22 = (((x129-x130)*x131)<x132);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x137 = 88757025422903LL;
	static int16_t x138 = INT16_MIN;
	int16_t x140 = -974;
	int32_t t23 = 29913;

	t23 = (((x137-x138)*x139)<x140);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x142 = -1;
	uint16_t x143 = 179U;
	volatile uint32_t x144 = UINT32_MAX;
	volatile int32_t t24 = 6489;

	t24 = (((x141-x142)*x143)<x144);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x145 = -1LL;
	uint64_t x147 = 20653089LLU;
	static int32_t t25 = -25629;

	t25 = (((x145-x146)*x147)<x148);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x150 = -2;
	int8_t x151 = -1;
	static uint64_t x152 = UINT64_MAX;
	volatile int32_t t26 = 156884957;

	t26 = (((x149-x150)*x151)<x152);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x153 = UINT8_MAX;
	static uint8_t x154 = UINT8_MAX;
	volatile int64_t x155 = 875833971322LL;
	static int8_t x156 = -1;
	volatile int32_t t27 = 75290128;

	t27 = (((x153-x154)*x155)<x156);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x157 = INT8_MAX;
	volatile int64_t x158 = -20855407030771897LL;
	uint16_t x160 = 1233U;
	static int32_t t28 = -146;

	t28 = (((x157-x158)*x159)<x160);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x161 = UINT64_MAX;
	int8_t x162 = INT8_MIN;
	uint32_t x164 = 9017U;

	t29 = (((x161-x162)*x163)<x164);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = -1;
	volatile uint16_t x166 = 903U;
	int64_t x167 = -34183904288494LL;
	int8_t x168 = INT8_MIN;
	int32_t t30 = -160;

	t30 = (((x165-x166)*x167)<x168);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x169 = 240673568U;
	uint8_t x171 = 1U;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t31 = -70011;

	t31 = (((x169-x170)*x171)<x172);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x181 = 163;
	static int64_t x182 = -48374952945LL;
	static int16_t x184 = -385;
	static int32_t t32 = 393280722;

	t32 = (((x181-x182)*x183)<x184);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x185 = 1;
	int16_t x186 = -1;
	static int8_t x187 = INT8_MIN;
	static uint8_t x188 = 0U;
	int32_t t33 = 1930;

	t33 = (((x185-x186)*x187)<x188);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x189 = 2;
	int8_t x190 = INT8_MIN;
	static uint32_t x191 = 169U;
	volatile uint64_t x192 = 811629506LLU;

	t34 = (((x189-x190)*x191)<x192);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x193 = INT8_MIN;
	static volatile int64_t x195 = 4171048261854LL;
	uint16_t x196 = 3622U;
	int32_t t35 = -182431;

	t35 = (((x193-x194)*x195)<x196);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x205 = -1;
	int64_t x206 = -1LL;
	int16_t x208 = 1742;

	t36 = (((x205-x206)*x207)<x208);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x210 = INT8_MAX;
	int32_t x211 = INT32_MIN;
	uint32_t x212 = 157089145U;
	int32_t t37 = -27786952;

	t37 = (((x209-x210)*x211)<x212);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = 20251673LL;
	static int32_t x215 = INT32_MIN;
	int32_t x216 = 262682522;
	volatile int32_t t38 = 0;

	t38 = (((x213-x214)*x215)<x216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x229 = UINT64_MAX;
	uint64_t x230 = UINT64_MAX;
	static uint32_t x231 = 407U;
	static int8_t x232 = -1;
	static volatile int32_t t39 = 1233168;

	t39 = (((x229-x230)*x231)<x232);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x233 = -224;
	int16_t x234 = INT16_MIN;
	int16_t x235 = 767;
	volatile uint32_t x236 = 1U;
	static int32_t t40 = -7690817;

	t40 = (((x233-x234)*x235)<x236);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x249 = -1;
	uint64_t x250 = UINT64_MAX;
	int64_t x251 = -1LL;
	static uint16_t x252 = UINT16_MAX;
	int32_t t41 = -23897;

	t41 = (((x249-x250)*x251)<x252);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x257 = -1;
	volatile int8_t x259 = 2;
	int32_t x260 = -1;
	int32_t t42 = -1;

	t42 = (((x257-x258)*x259)<x260);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x261 = 243;
	int8_t x262 = -1;
	volatile int64_t x264 = INT64_MIN;
	volatile int32_t t43 = -4;

	t43 = (((x261-x262)*x263)<x264);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x265 = INT8_MIN;
	uint32_t x266 = 12U;
	uint32_t x267 = 72259431U;
	uint32_t x268 = 282092U;
	int32_t t44 = 61;

	t44 = (((x265-x266)*x267)<x268);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x269 = INT64_MIN;
	uint64_t x271 = 89824589391354LLU;
	int64_t x272 = -4373056691372430413LL;
	int32_t t45 = -8174;

	t45 = (((x269-x270)*x271)<x272);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x274 = INT16_MIN;
	uint32_t x275 = UINT32_MAX;
	static uint64_t x276 = 610461659860217654LLU;
	int32_t t46 = 3426;

	t46 = (((x273-x274)*x275)<x276);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x285 = -7;
	volatile uint64_t x286 = UINT64_MAX;
	int8_t x287 = INT8_MIN;
	volatile int16_t x288 = INT16_MAX;
	volatile int32_t t47 = 15;

	t47 = (((x285-x286)*x287)<x288);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x290 = 239423666LLU;
	int16_t x291 = -973;
	int32_t x292 = 75982027;
	static int32_t t48 = -75132648;

	t48 = (((x289-x290)*x291)<x292);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x297 = INT8_MIN;
	static int32_t x299 = -60;
	int8_t x300 = INT8_MIN;
	static volatile int32_t t49 = 61863;

	t49 = (((x297-x298)*x299)<x300);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x302 = -1;
	static uint16_t x303 = 0U;
	int16_t x304 = -1;
	int32_t t50 = 16441556;

	t50 = (((x301-x302)*x303)<x304);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x309 = INT16_MAX;
	uint16_t x310 = UINT16_MAX;
	volatile uint8_t x311 = 14U;
	int32_t t51 = 4747155;

	t51 = (((x309-x310)*x311)<x312);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x313 = 2064LLU;
	uint32_t x314 = 14195359U;
	int8_t x315 = INT8_MIN;
	int32_t x316 = -58132643;
	volatile int32_t t52 = 0;

	t52 = (((x313-x314)*x315)<x316);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x317 = INT32_MAX;
	uint64_t x318 = UINT64_MAX;
	uint16_t x319 = UINT16_MAX;
	volatile int32_t t53 = 201;

	t53 = (((x317-x318)*x319)<x320);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x321 = INT16_MAX;
	int32_t x322 = INT32_MAX;
	uint32_t x323 = UINT32_MAX;
	volatile uint8_t x324 = 0U;
	volatile int32_t t54 = 0;

	t54 = (((x321-x322)*x323)<x324);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x325 = -1;
	int64_t x326 = -4179827081905957LL;
	uint64_t x327 = UINT64_MAX;
	volatile int32_t t55 = -816278032;

	t55 = (((x325-x326)*x327)<x328);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x343 = UINT8_MAX;
	static int64_t x344 = -1LL;
	volatile int32_t t56 = 1;

	t56 = (((x341-x342)*x343)<x344);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x346 = INT32_MIN;
	volatile uint64_t x347 = UINT64_MAX;
	int32_t x348 = INT32_MIN;
	volatile int32_t t57 = 72347384;

	t57 = (((x345-x346)*x347)<x348);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x353 = 0LL;
	int8_t x354 = INT8_MAX;
	int32_t x355 = -1;
	uint8_t x356 = 115U;
	int32_t t58 = -4883;

	t58 = (((x353-x354)*x355)<x356);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x357 = 18669314LLU;
	int8_t x358 = INT8_MIN;
	uint16_t x359 = 27214U;
	uint32_t x360 = 921820423U;
	static int32_t t59 = -48637;

	t59 = (((x357-x358)*x359)<x360);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x361 = -1;
	int8_t x362 = INT8_MIN;
	uint16_t x363 = UINT16_MAX;
	uint32_t x364 = 12774U;
	int32_t t60 = 49071452;

	t60 = (((x361-x362)*x363)<x364);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x365 = 21;
	static uint32_t x366 = 27U;
	volatile uint32_t x368 = UINT32_MAX;
	int32_t t61 = -175058604;

	t61 = (((x365-x366)*x367)<x368);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x369 = INT16_MIN;
	int64_t x370 = -13052142798957160LL;
	volatile int32_t t62 = 1;

	t62 = (((x369-x370)*x371)<x372);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x373 = 110U;
	volatile int8_t x374 = -1;
	volatile int64_t x375 = -1LL;
	uint8_t x376 = UINT8_MAX;

	t63 = (((x373-x374)*x375)<x376);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x377 = 156U;
	volatile int16_t x378 = -1;
	int16_t x379 = INT16_MIN;
	int32_t t64 = -8;

	t64 = (((x377-x378)*x379)<x380);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x381 = 1130067;
	int64_t x383 = 1LL;
	static int32_t t65 = -6;

	t65 = (((x381-x382)*x383)<x384);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x385 = 0;
	volatile uint8_t x386 = 1U;
	volatile uint32_t x387 = 78549U;
	int64_t x388 = INT64_MIN;
	volatile int32_t t66 = 3353;

	t66 = (((x385-x386)*x387)<x388);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x389 = 90LLU;
	int16_t x390 = INT16_MIN;
	static volatile int32_t x391 = -1;
	int16_t x392 = -1;
	static volatile int32_t t67 = -223;

	t67 = (((x389-x390)*x391)<x392);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x393 = -1;
	uint32_t x394 = 153050U;
	int16_t x395 = INT16_MIN;
	uint16_t x396 = UINT16_MAX;

	t68 = (((x393-x394)*x395)<x396);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x401 = INT8_MIN;
	static int16_t x402 = -1;
	volatile uint8_t x403 = UINT8_MAX;
	static int8_t x404 = -1;
	int32_t t69 = 15773023;

	t69 = (((x401-x402)*x403)<x404);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x405 = -20;
	volatile int32_t x406 = -1;
	static int32_t x407 = -28138;
	static int8_t x408 = 22;
	volatile int32_t t70 = 99;

	t70 = (((x405-x406)*x407)<x408);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x413 = -18;
	int32_t x416 = -1;

	t71 = (((x413-x414)*x415)<x416);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x421 = UINT64_MAX;
	int8_t x422 = INT8_MIN;
	uint32_t x423 = UINT32_MAX;

	t72 = (((x421-x422)*x423)<x424);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x425 = -5057;
	static volatile int16_t x426 = 164;
	volatile int64_t x427 = -2270LL;
	int32_t x428 = INT32_MIN;

	t73 = (((x425-x426)*x427)<x428);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x431 = INT32_MIN;
	volatile uint32_t x432 = 106094U;
	static int32_t t74 = -39432;

	t74 = (((x429-x430)*x431)<x432);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x434 = 12U;
	uint32_t x435 = 108U;
	static int16_t x436 = INT16_MAX;
	int32_t t75 = -117;

	t75 = (((x433-x434)*x435)<x436);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x437 = INT8_MIN;
	volatile int16_t x438 = -12;
	int16_t x439 = INT16_MAX;
	static volatile uint16_t x440 = 289U;
	volatile int32_t t76 = 0;

	t76 = (((x437-x438)*x439)<x440);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x445 = INT8_MAX;
	uint32_t x446 = UINT32_MAX;
	int32_t x447 = -657715706;
	static uint16_t x448 = 1372U;
	int32_t t77 = -14715558;

	t77 = (((x445-x446)*x447)<x448);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x450 = 64576U;
	static int16_t x451 = 276;
	int16_t x452 = -1;
	volatile int32_t t78 = -13935;

	t78 = (((x449-x450)*x451)<x452);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x457 = INT32_MIN;
	int64_t x458 = 309LL;
	uint32_t x459 = 503U;
	volatile int32_t t79 = -30887;

	t79 = (((x457-x458)*x459)<x460);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x461 = INT8_MIN;
	int8_t x463 = -1;
	uint16_t x464 = 1U;
	static volatile int32_t t80 = -48;

	t80 = (((x461-x462)*x463)<x464);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x466 = UINT32_MAX;
	uint16_t x467 = 3U;
	uint16_t x468 = 1U;

	t81 = (((x465-x466)*x467)<x468);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x473 = 1001066530LL;
	static uint16_t x474 = 1655U;
	int32_t x475 = INT32_MIN;
	volatile int8_t x476 = -1;
	volatile int32_t t82 = -1;

	t82 = (((x473-x474)*x475)<x476);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x485 = -1;
	int8_t x486 = 1;
	int8_t x487 = INT8_MIN;
	int64_t x488 = INT64_MAX;

	t83 = (((x485-x486)*x487)<x488);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x494 = 1LLU;
	static uint8_t x495 = 14U;
	volatile int32_t t84 = 24685;

	t84 = (((x493-x494)*x495)<x496);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x497 = 3U;
	uint32_t x498 = 4502973U;
	uint64_t x499 = 3423409445945LLU;
	int16_t x500 = INT16_MIN;
	static int32_t t85 = 14175;

	t85 = (((x497-x498)*x499)<x500);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x501 = 1055364842LLU;
	uint8_t x502 = 12U;
	int32_t x504 = INT32_MAX;
	int32_t t86 = 2114191;

	t86 = (((x501-x502)*x503)<x504);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x513 = -1;
	uint8_t x514 = UINT8_MAX;
	volatile int16_t x515 = 11;
	int8_t x516 = -1;
	int32_t t87 = 2;

	t87 = (((x513-x514)*x515)<x516);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x521 = -1;
	volatile int32_t x522 = 4;
	static uint64_t x523 = 183738718LLU;
	static int8_t x524 = -49;
	volatile int32_t t88 = -145777;

	t88 = (((x521-x522)*x523)<x524);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x538 = -1;
	int32_t x539 = INT32_MIN;
	uint16_t x540 = 3415U;
	int32_t t89 = 14;

	t89 = (((x537-x538)*x539)<x540);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x541 = INT8_MIN;
	uint8_t x542 = 0U;
	uint32_t x544 = UINT32_MAX;

	t90 = (((x541-x542)*x543)<x544);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x545 = 28799U;
	int16_t x547 = -1;
	int32_t x548 = -1292420;
	volatile int32_t t91 = -177;

	t91 = (((x545-x546)*x547)<x548);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x553 = -24255499913421LL;
	uint8_t x554 = 37U;
	uint8_t x555 = 23U;
	int32_t x556 = INT32_MIN;

	t92 = (((x553-x554)*x555)<x556);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x557 = -1LL;
	int64_t x558 = INT64_MAX;
	uint64_t x559 = 464LLU;
	volatile uint32_t x560 = UINT32_MAX;
	int32_t t93 = 212;

	t93 = (((x557-x558)*x559)<x560);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x561 = INT8_MAX;
	static int8_t x562 = INT8_MAX;
	volatile int64_t x563 = INT64_MIN;
	int16_t x564 = INT16_MIN;

	t94 = (((x561-x562)*x563)<x564);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x571 = 55;
	uint16_t x572 = UINT16_MAX;
	static int32_t t95 = -7;

	t95 = (((x569-x570)*x571)<x572);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x581 = 3315660339876725LLU;
	static uint8_t x582 = UINT8_MAX;
	volatile int64_t x583 = 65406065788132735LL;
	uint16_t x584 = UINT16_MAX;
	volatile int32_t t96 = -14;

	t96 = (((x581-x582)*x583)<x584);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x593 = 4U;
	int8_t x594 = INT8_MIN;
	int32_t x595 = INT32_MAX;
	int16_t x596 = -370;
	volatile int32_t t97 = 3282;

	t97 = (((x593-x594)*x595)<x596);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x597 = -15986482;
	int8_t x598 = INT8_MIN;
	volatile uint32_t x599 = UINT32_MAX;
	volatile uint8_t x600 = 3U;
	int32_t t98 = 5652557;

	t98 = (((x597-x598)*x599)<x600);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x601 = 2U;
	int16_t x602 = INT16_MAX;
	int8_t x603 = INT8_MAX;
	int32_t x604 = 0;

	t99 = (((x601-x602)*x603)<x604);

	if (t99 != 1) { NG(); } else { ; }
	
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

