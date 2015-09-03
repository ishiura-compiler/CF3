#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MAX;
int64_t x6 = INT64_MIN;
int8_t x10 = -1;
static int8_t x16 = INT8_MAX;
int8_t x18 = -1;
static volatile int64_t t5 = 14050676LL;
volatile uint8_t x26 = UINT8_MAX;
int32_t x32 = INT32_MAX;
uint32_t t7 = 2272376U;
volatile int8_t x37 = 2;
int16_t x42 = INT16_MAX;
int8_t x48 = INT8_MIN;
int8_t x49 = INT8_MAX;
int32_t x65 = 99506;
int16_t x66 = 844;
volatile int32_t t14 = 210958256;
volatile int32_t t15 = -8499;
int32_t x87 = -6;
int16_t x88 = INT16_MAX;
int16_t x89 = INT16_MIN;
volatile int32_t x95 = INT32_MAX;
static volatile uint64_t x96 = 13455LLU;
int16_t x100 = INT16_MIN;
static uint8_t x104 = 73U;
uint8_t x112 = 53U;
int16_t x116 = 19;
volatile int64_t x118 = -1LL;
static int32_t x119 = INT32_MIN;
int16_t x133 = 4;
static int8_t x139 = INT8_MAX;
uint32_t t31 = 252060298U;
volatile int32_t t32 = 288454;
int8_t x145 = 1;
static int8_t x173 = INT8_MIN;
uint64_t x180 = UINT64_MAX;
uint64_t x181 = UINT64_MAX;
volatile int64_t x184 = -1LL;
uint64_t x197 = 25856340853032LLU;
uint64_t t41 = 26274151755248580LLU;
static volatile int16_t x218 = -61;
static int16_t x220 = 4049;
int64_t x222 = INT64_MIN;
int64_t x234 = INT64_MAX;
static int16_t x235 = INT16_MIN;
int16_t x241 = -1;
uint16_t x244 = 142U;
uint32_t x247 = UINT32_MAX;
int32_t t50 = 251746472;
volatile int32_t t51 = 15;
int32_t x261 = -1;
int8_t x262 = -1;
uint8_t x268 = UINT8_MAX;
int64_t x275 = INT64_MAX;
uint16_t x276 = UINT16_MAX;
int64_t x279 = INT64_MIN;
volatile int32_t t57 = -5491;
int32_t x295 = INT32_MAX;
static int64_t x299 = INT64_MAX;
int64_t x302 = -1LL;
uint8_t x304 = 1U;
int32_t t62 = -1;
volatile int32_t x317 = 8;
uint16_t x328 = 0U;
uint8_t x335 = 12U;
uint64_t t73 = 1LLU;
uint32_t x370 = 249U;
static int64_t x372 = 1584733301LL;
int8_t x377 = -1;
static int32_t x379 = INT32_MAX;
int32_t x380 = INT32_MAX;
int32_t t79 = -3472966;
int16_t x386 = 208;
int8_t x387 = -22;
volatile uint64_t x388 = 1743LLU;
volatile int16_t x409 = 2835;
static uint64_t x412 = 38439LLU;
volatile uint64_t t84 = 239180762745974LLU;
volatile uint32_t x422 = UINT32_MAX;
uint8_t x424 = 12U;
int8_t x444 = INT8_MIN;
uint8_t x449 = 1U;
static uint64_t x453 = UINT64_MAX;
static uint64_t x459 = UINT64_MAX;
int16_t x460 = INT16_MIN;
uint64_t x465 = UINT64_MAX;
int32_t x466 = INT32_MIN;
int32_t x478 = -1;
static int8_t x487 = INT8_MIN;
static int64_t x498 = -68644450452880769LL;
uint64_t t99 = 16695205546662LLU;


void f0(void) {
	int32_t x1 = -495;
	static volatile uint32_t x2 = 28U;
	int8_t x4 = INT8_MIN;
	static int32_t t0 = 0;

	t0 = ((x1+(x2<=x3))*x4);

	if (t0 != 63232) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x7 = -2;
	static int8_t x8 = -1;
	volatile int32_t t1 = -7374792;

	t1 = ((x5+(x6<=x7))*x8);

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x11 = UINT16_MAX;
	uint32_t x12 = 6552506U;
	uint32_t t2 = 624553U;

	t2 = ((x9+(x10<=x11))*x12);

	if (t2 != 3462799034U) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -84LL;
	int8_t x14 = INT8_MAX;
	int32_t x15 = 500183;
	volatile int64_t t3 = 175301031338351LL;

	t3 = ((x13+(x14<=x15))*x16);

	if (t3 != -10541LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 123U;
	int8_t x19 = -1;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = 196376;

	t4 = ((x17+(x18<=x19))*x20);

	if (t4 != 4063108) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -1LL;
	volatile int16_t x22 = -1;
	volatile int64_t x23 = -1LL;
	int32_t x24 = INT32_MAX;

	t5 = ((x21+(x22<=x23))*x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = 7068026435991LLU;
	static int64_t x27 = -1LL;
	int64_t x28 = -1LL;
	uint64_t t6 = 3LLU;

	t6 = ((x25+(x26<=x27))*x28);

	if (t6 != 18446737005683115625LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 28274U;
	uint64_t x30 = 109176315011842922LLU;
	int8_t x31 = 1;

	t7 = ((x29+(x30<=x31))*x32);

	if (t7 != 4294939022U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x38 = 44U;
	static int64_t x39 = INT64_MIN;
	int8_t x40 = -1;
	int32_t t8 = -611978303;

	t8 = ((x37+(x38<=x39))*x40);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 5U;
	int8_t x43 = -1;
	static uint64_t x44 = 1LLU;
	static volatile uint64_t t9 = 9377404335936120LLU;

	t9 = ((x41+(x42<=x43))*x44);

	if (t9 != 5LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	int8_t x46 = INT8_MIN;
	volatile uint32_t x47 = UINT32_MAX;
	int32_t t10 = -9141;

	t10 = ((x45+(x46<=x47))*x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x50 = UINT64_MAX;
	int32_t x51 = INT32_MIN;
	uint64_t x52 = 178478766LLU;
	volatile uint64_t t11 = 916LLU;

	t11 = ((x49+(x50<=x51))*x52);

	if (t11 != 22666803282LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = 16U;
	static uint16_t x54 = UINT16_MAX;
	int8_t x55 = -1;
	static int32_t x56 = -499;
	volatile int32_t t12 = -255;

	t12 = ((x53+(x54<=x55))*x56);

	if (t12 != -7984) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = 43737879767LL;
	volatile int32_t x58 = INT32_MIN;
	volatile uint64_t x59 = UINT64_MAX;
	int16_t x60 = -77;
	int64_t t13 = 5LL;

	t13 = ((x57+(x58<=x59))*x60);

	if (t13 != -3367816742136LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x67 = UINT16_MAX;
	int8_t x68 = -8;

	t14 = ((x65+(x66<=x67))*x68);

	if (t14 != -796056) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x69 = 3;
	volatile uint32_t x70 = 16956094U;
	int8_t x71 = 30;
	int32_t x72 = 1057084;

	t15 = ((x69+(x70<=x71))*x72);

	if (t15 != 3171252) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 1LLU;
	int8_t x74 = INT8_MIN;
	static int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	volatile uint64_t t16 = 8702LLU;

	t16 = ((x73+(x74<=x75))*x76);

	if (t16 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -1;
	int64_t x78 = INT64_MIN;
	volatile uint32_t x79 = 63U;
	static int16_t x80 = INT16_MAX;
	int32_t t17 = -13647;

	t17 = ((x77+(x78<=x79))*x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x81 = UINT64_MAX;
	uint16_t x82 = 27797U;
	int64_t x83 = INT64_MIN;
	static volatile uint16_t x84 = 20647U;
	uint64_t t18 = 31121746586915286LLU;

	t18 = ((x81+(x82<=x83))*x84);

	if (t18 != 18446744073709530969LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	int8_t x86 = -1;
	volatile int32_t t19 = -146526;

	t19 = ((x85+(x86<=x87))*x88);

	if (t19 != -1073709056) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = 0;
	static int64_t x91 = 767044LL;
	static volatile uint64_t x92 = 3083165779LLU;
	volatile uint64_t t20 = 14755LLU;

	t20 = ((x89+(x90<=x91))*x92);

	if (t20 != 18446643047616471123LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 487LLU;
	int64_t x94 = -3511608667766232071LL;
	uint64_t t21 = 14999596504399LLU;

	t21 = ((x93+(x94<=x95))*x96);

	if (t21 != 6566040LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -1;
	uint32_t x98 = 4793650U;
	int16_t x99 = 1051;
	volatile int32_t t22 = 482876979;

	t22 = ((x97+(x98<=x99))*x100);

	if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = 110566;
	uint16_t x102 = 28205U;
	uint64_t x103 = 16365074LLU;
	int32_t t23 = 14;

	t23 = ((x101+(x102<=x103))*x104);

	if (t23 != 8071391) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	int8_t x106 = -1;
	uint16_t x107 = 24U;
	uint64_t x108 = 222932712999537437LLU;
	volatile uint64_t t24 = 128706283584904LLU;

	t24 = ((x105+(x106<=x107))*x108);

	if (t24 != 74446333139241757LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x109 = 37U;
	int32_t x110 = INT32_MIN;
	int8_t x111 = -1;
	int32_t t25 = 1558463;

	t25 = ((x109+(x110<=x111))*x112);

	if (t25 != 2014) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = UINT64_MAX;
	volatile int8_t x114 = INT8_MAX;
	int8_t x115 = INT8_MAX;
	volatile uint64_t t26 = 386051393089LLU;

	t26 = ((x113+(x114<=x115))*x116);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x117 = 13LLU;
	int16_t x120 = -220;
	volatile uint64_t t27 = 1392741014LLU;

	t27 = ((x117+(x118<=x119))*x120);

	if (t27 != 18446744073709548756LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -486391544;
	static int16_t x122 = -15259;
	uint32_t x123 = 7228002U;
	int64_t x124 = -1LL;
	volatile int64_t t28 = 1016563433951349LL;

	t28 = ((x121+(x122<=x123))*x124);

	if (t28 != 486391544LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = 0U;
	static int16_t x126 = INT16_MIN;
	uint8_t x127 = 14U;
	int32_t x128 = INT32_MIN;
	int32_t t29 = INT32_MIN;

	t29 = ((x125+(x126<=x127))*x128);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MIN;
	volatile uint64_t x136 = UINT64_MAX;
	volatile uint64_t t30 = 2871LLU;

	t30 = ((x133+(x134<=x135))*x136);

	if (t30 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x137 = 19U;
	int16_t x138 = INT16_MIN;
	uint32_t x140 = 848645463U;

	t31 = ((x137+(x138<=x139))*x140);

	if (t31 != 4088007372U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x141 = 173;
	int8_t x142 = INT8_MIN;
	int8_t x143 = 1;
	int8_t x144 = INT8_MAX;

	t32 = ((x141+(x142<=x143))*x144);

	if (t32 != 22098) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x146 = 62691400245360LLU;
	int32_t x147 = -159121490;
	uint16_t x148 = 14U;
	int32_t t33 = 6668;

	t33 = ((x145+(x146<=x147))*x148);

	if (t33 != 28) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x161 = 0U;
	static volatile int16_t x162 = 85;
	int16_t x163 = -1;
	static int32_t x164 = INT32_MAX;
	uint32_t t34 = 0U;

	t34 = ((x161+(x162<=x163))*x164);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = 2305734893703942341LLU;
	volatile uint16_t x166 = 22U;
	int64_t x167 = -9544375LL;
	int8_t x168 = -1;
	volatile uint64_t t35 = 2456542296LLU;

	t35 = ((x165+(x166<=x167))*x168);

	if (t35 != 16141009180005609275LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	volatile int16_t x176 = INT16_MAX;
	static volatile int32_t t36 = 226;

	t36 = ((x173+(x174<=x175))*x176);

	if (t36 != -4161409) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = -1LL;
	static int8_t x179 = 0;
	static volatile uint64_t t37 = 739LLU;

	t37 = ((x177+(x178<=x179))*x180);

	if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MAX;
	volatile uint64_t t38 = 2494447LLU;

	t38 = ((x181+(x182<=x183))*x184);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x185 = 488806;
	volatile int16_t x186 = -3;
	volatile int8_t x187 = INT8_MIN;
	static uint64_t x188 = UINT64_MAX;
	uint64_t t39 = 2716344762893LLU;

	t39 = ((x185+(x186<=x187))*x188);

	if (t39 != 18446744073709062810LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x189 = UINT64_MAX;
	int16_t x190 = INT16_MIN;
	uint16_t x191 = UINT16_MAX;
	static int64_t x192 = INT64_MIN;
	uint64_t t40 = 167542LLU;

	t40 = ((x189+(x190<=x191))*x192);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x198 = INT8_MIN;
	volatile int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;

	t41 = ((x197+(x198<=x199))*x200);

	if (t41 != 18443434462080363392LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x201 = 37U;
	uint16_t x202 = 0U;
	int8_t x203 = INT8_MIN;
	uint8_t x204 = 36U;
	int32_t t42 = 10502367;

	t42 = ((x201+(x202<=x203))*x204);

	if (t42 != 1332) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x205 = 23125987009LLU;
	volatile int16_t x206 = INT16_MIN;
	uint16_t x207 = UINT16_MAX;
	int32_t x208 = INT32_MAX;
	volatile uint64_t t43 = 387065LLU;

	t43 = ((x205+(x206<=x207))*x208);

	if (t43 != 12769190777290322238LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x209 = -1;
	uint8_t x210 = 5U;
	int16_t x211 = -27;
	volatile int8_t x212 = -1;
	volatile int32_t t44 = -1;

	t44 = ((x209+(x210<=x211))*x212);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x213 = 3890315764472381394LLU;
	int16_t x214 = INT16_MIN;
	static int16_t x215 = INT16_MAX;
	uint16_t x216 = 244U;
	uint64_t t45 = 346445294956506082LLU;

	t45 = ((x213+(x214<=x215))*x216);

	if (t45 != 8453098772073927964LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x217 = 15726U;
	volatile uint64_t x219 = UINT64_MAX;
	int32_t t46 = 121840114;

	t46 = ((x217+(x218<=x219))*x220);

	if (t46 != 63678623) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x221 = INT8_MIN;
	int8_t x223 = -1;
	uint32_t x224 = 39U;
	volatile uint32_t t47 = 121156U;

	t47 = ((x221+(x222<=x223))*x224);

	if (t47 != 4294962343U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x233 = INT64_MAX;
	int16_t x236 = -1;
	volatile int64_t t48 = 1LL;

	t48 = ((x233+(x234<=x235))*x236);

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x242 = 32576369179252628LLU;
	int8_t x243 = INT8_MAX;
	volatile int32_t t49 = 478278;

	t49 = ((x241+(x242<=x243))*x244);

	if (t49 != -142) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x245 = -143;
	static volatile int16_t x246 = -4462;
	volatile uint16_t x248 = 3165U;

	t50 = ((x245+(x246<=x247))*x248);

	if (t50 != -449430) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = -1;
	volatile int8_t x250 = -15;
	int64_t x251 = 83054030823LL;
	int16_t x252 = 329;

	t51 = ((x249+(x250<=x251))*x252);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x253 = INT16_MAX;
	static uint64_t x254 = 2849175168307627LLU;
	int8_t x255 = INT8_MAX;
	static uint16_t x256 = 1013U;
	int32_t t52 = -62806;

	t52 = ((x253+(x254<=x255))*x256);

	if (t52 != 33192971) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x263 = -1201782320392374902LL;
	int8_t x264 = INT8_MAX;
	volatile int32_t t53 = -1;

	t53 = ((x261+(x262<=x263))*x264);

	if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x265 = 5;
	static volatile int8_t x266 = INT8_MIN;
	uint16_t x267 = 4595U;
	int32_t t54 = -425165;

	t54 = ((x265+(x266<=x267))*x268);

	if (t54 != 1530) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = 1;
	int8_t x270 = 11;
	uint16_t x271 = 15U;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t55 = -15;

	t55 = ((x269+(x270<=x271))*x272);

	if (t55 != 131070) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x273 = 204513276744746LLU;
	static int16_t x274 = INT16_MIN;
	uint64_t t56 = 9LLU;

	t56 = ((x273+(x274<=x275))*x276);

	if (t56 != 13402777591466994645LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x277 = -97944479;
	uint8_t x278 = UINT8_MAX;
	volatile int8_t x280 = -3;

	t57 = ((x277+(x278<=x279))*x280);

	if (t57 != 293833437) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = 11;
	uint64_t x282 = UINT64_MAX;
	uint64_t x283 = UINT64_MAX;
	uint8_t x284 = 79U;
	volatile int32_t t58 = 2968852;

	t58 = ((x281+(x282<=x283))*x284);

	if (t58 != 948) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x289 = 986U;
	uint8_t x290 = 109U;
	uint64_t x291 = 142599LLU;
	int8_t x292 = INT8_MIN;
	int32_t t59 = -1825988;

	t59 = ((x289+(x290<=x291))*x292);

	if (t59 != -126336) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x293 = 1;
	static uint32_t x294 = 247U;
	uint32_t x296 = 21644609U;
	uint32_t t60 = 3U;

	t60 = ((x293+(x294<=x295))*x296);

	if (t60 != 43289218U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x297 = UINT64_MAX;
	int8_t x298 = 15;
	int32_t x300 = -1;
	volatile uint64_t t61 = 247LLU;

	t61 = ((x297+(x298<=x299))*x300);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x301 = -1;
	uint64_t x303 = 1794309LLU;

	t62 = ((x301+(x302<=x303))*x304);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x305 = 132675066353242539LLU;
	static uint16_t x306 = UINT16_MAX;
	volatile int8_t x307 = -1;
	static int32_t x308 = INT32_MAX;
	uint64_t t63 = 693454LLU;

	t63 = ((x305+(x306<=x307))*x308);

	if (t63 != 9974714032301977173LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x309 = INT8_MIN;
	int64_t x310 = -1LL;
	uint32_t x311 = 36728U;
	int16_t x312 = -12;
	int32_t t64 = -11;

	t64 = ((x309+(x310<=x311))*x312);

	if (t64 != 1524) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MIN;
	int64_t x315 = 473858545736519782LL;
	uint32_t x316 = 1U;
	volatile uint32_t t65 = 46555783U;

	t65 = ((x313+(x314<=x315))*x316);

	if (t65 != 2147483649U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x318 = INT32_MIN;
	static volatile int32_t x319 = -1;
	int16_t x320 = 4146;
	static int32_t t66 = 1;

	t66 = ((x317+(x318<=x319))*x320);

	if (t66 != 37314) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = 1LL;
	static int8_t x327 = -23;
	volatile int32_t t67 = 15270747;

	t67 = ((x325+(x326<=x327))*x328);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x329 = INT8_MAX;
	static int32_t x330 = -1;
	uint8_t x331 = 61U;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t68 = 113305745;

	t68 = ((x329+(x330<=x331))*x332);

	if (t68 != -4194304) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x333 = -1LL;
	static uint64_t x334 = 51635LLU;
	volatile int8_t x336 = INT8_MAX;
	volatile int64_t t69 = -421741793959877848LL;

	t69 = ((x333+(x334<=x335))*x336);

	if (t69 != -127LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x337 = INT8_MIN;
	static int8_t x338 = INT8_MIN;
	uint32_t x339 = 53695790U;
	int64_t x340 = -609956155795LL;
	volatile int64_t t70 = -444083524LL;

	t70 = ((x337+(x338<=x339))*x340);

	if (t70 != 78074387941760LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = -1;
	int16_t x342 = INT16_MIN;
	volatile uint16_t x343 = 7883U;
	uint64_t x344 = 9735919LLU;
	uint64_t t71 = 1306393636LLU;

	t71 = ((x341+(x342<=x343))*x344);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x349 = UINT16_MAX;
	uint16_t x350 = UINT16_MAX;
	int16_t x351 = -1;
	static uint16_t x352 = 875U;
	volatile int32_t t72 = 1;

	t72 = ((x349+(x350<=x351))*x352);

	if (t72 != 57343125) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x353 = 2612U;
	uint16_t x354 = 2U;
	uint32_t x355 = 1618781365U;
	volatile uint64_t x356 = 230537084714401LLU;

	t73 = ((x353+(x354<=x355))*x356);

	if (t73 != 602393402358729813LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = 5487462734LL;
	int64_t x358 = INT64_MIN;
	int8_t x359 = INT8_MAX;
	static int16_t x360 = -1;
	int64_t t74 = 648LL;

	t74 = ((x357+(x358<=x359))*x360);

	if (t74 != -5487462735LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x361 = UINT16_MAX;
	static int8_t x362 = INT8_MIN;
	int16_t x363 = INT16_MAX;
	uint16_t x364 = 97U;
	volatile int32_t t75 = -4277097;

	t75 = ((x361+(x362<=x363))*x364);

	if (t75 != 6356992) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x365 = 2824U;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 1U;
	volatile int16_t x368 = INT16_MIN;
	volatile int32_t t76 = 833472;

	t76 = ((x365+(x366<=x367))*x368);

	if (t76 != -92569600) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x369 = 747U;
	int64_t x371 = -1LL;
	int64_t t77 = 41606154326624806LL;

	t77 = ((x369+(x370<=x371))*x372);

	if (t77 != 1183795775847LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x373 = INT8_MIN;
	int32_t x374 = 12710891;
	int8_t x375 = 0;
	volatile int8_t x376 = INT8_MAX;
	static volatile int32_t t78 = 75;

	t78 = ((x373+(x374<=x375))*x376);

	if (t78 != -16256) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x378 = 1588430417304674LL;

	t79 = ((x377+(x378<=x379))*x380);

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x381 = -1;
	uint16_t x382 = 23U;
	int64_t x383 = -1LL;
	uint8_t x384 = 1U;
	volatile int32_t t80 = -726922;

	t80 = ((x381+(x382<=x383))*x384);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x385 = INT32_MIN;
	static uint64_t t81 = 1483281872876964LLU;

	t81 = ((x385+(x386<=x387))*x388);

	if (t81 != 18446740330645553152LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x389 = -1;
	static int8_t x390 = INT8_MAX;
	static uint16_t x391 = 12757U;
	static int16_t x392 = -1;
	volatile int32_t t82 = -202695;

	t82 = ((x389+(x390<=x391))*x392);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x401 = UINT16_MAX;
	int64_t x402 = -1LL;
	static int8_t x403 = -1;
	volatile uint64_t x404 = 8429452449546895728LLU;
	uint64_t t83 = 128LLU;

	t83 = ((x401+(x402<=x403))*x404);

	if (t83 != 7950958125416185856LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x410 = 14788794;
	volatile int64_t x411 = INT64_MIN;

	t84 = ((x409+(x410<=x411))*x412);

	if (t84 != 108974565LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x413 = INT16_MAX;
	static uint8_t x414 = 8U;
	int8_t x415 = INT8_MAX;
	volatile int16_t x416 = INT16_MAX;
	volatile int32_t t85 = 2;

	t85 = ((x413+(x414<=x415))*x416);

	if (t85 != 1073709056) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x421 = -1;
	volatile uint8_t x423 = 3U;
	static int32_t t86 = 8;

	t86 = ((x421+(x422<=x423))*x424);

	if (t86 != -12) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x425 = -4;
	int32_t x426 = INT32_MAX;
	int64_t x427 = INT64_MIN;
	static int64_t x428 = -1LL;
	int64_t t87 = 6214LL;

	t87 = ((x425+(x426<=x427))*x428);

	if (t87 != 4LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x429 = -63;
	volatile uint32_t x430 = 95120943U;
	static int64_t x431 = INT64_MIN;
	static uint16_t x432 = UINT16_MAX;
	static int32_t t88 = -94718;

	t88 = ((x429+(x430<=x431))*x432);

	if (t88 != -4128705) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x437 = INT16_MIN;
	int8_t x438 = INT8_MIN;
	int8_t x439 = INT8_MAX;
	uint16_t x440 = UINT16_MAX;
	static volatile int32_t t89 = -117853855;

	t89 = ((x437+(x438<=x439))*x440);

	if (t89 != -2147385345) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x441 = -5;
	static int64_t x442 = -1LL;
	volatile uint64_t x443 = 6570477LLU;
	static int32_t t90 = 1;

	t90 = ((x441+(x442<=x443))*x444);

	if (t90 != 640) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x445 = -781;
	int8_t x446 = INT8_MIN;
	uint64_t x447 = 354509LLU;
	static uint8_t x448 = 12U;
	int32_t t91 = 7;

	t91 = ((x445+(x446<=x447))*x448);

	if (t91 != -9372) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x450 = -6025;
	int64_t x451 = -968939369437LL;
	int16_t x452 = INT16_MAX;
	int32_t t92 = 403275;

	t92 = ((x449+(x450<=x451))*x452);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x454 = INT64_MAX;
	uint32_t x455 = 13966464U;
	static volatile int64_t x456 = 12316215888LL;
	volatile uint64_t t93 = 21LLU;

	t93 = ((x453+(x454<=x455))*x456);

	if (t93 != 18446744061393335728LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x457 = -1;
	uint64_t x458 = 458274355857355861LLU;
	int32_t t94 = -1417526;

	t94 = ((x457+(x458<=x459))*x460);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x467 = INT32_MAX;
	volatile int16_t x468 = -3760;
	volatile uint64_t t95 = 335500759161LLU;

	t95 = ((x465+(x466<=x467))*x468);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x477 = 37U;
	volatile uint32_t x479 = 4786U;
	static int8_t x480 = 37;
	static int32_t t96 = 0;

	t96 = ((x477+(x478<=x479))*x480);

	if (t96 != 1369) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x485 = INT16_MAX;
	static int32_t x486 = INT32_MIN;
	int64_t x488 = 3792LL;
	volatile int64_t t97 = -85LL;

	t97 = ((x485+(x486<=x487))*x488);

	if (t97 != 124256256LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x493 = 985922080LLU;
	int16_t x494 = INT16_MIN;
	int64_t x495 = INT64_MAX;
	volatile int32_t x496 = INT32_MAX;
	uint64_t t98 = 1139278734LLU;

	t98 = ((x493+(x494<=x495))*x496);

	if (t98 != 2117251546163709407LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x497 = UINT64_MAX;
	uint64_t x499 = UINT64_MAX;
	static volatile int64_t x500 = INT64_MIN;

	t99 = ((x497+(x498<=x499))*x500);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

