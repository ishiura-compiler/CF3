#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 18;
uint16_t x7 = 17638U;
uint32_t x14 = 2263U;
static int32_t x27 = -61349964;
uint16_t x30 = 114U;
int32_t t7 = 116519421;
int16_t x40 = -4;
static int32_t t8 = -2;
static int64_t x41 = INT64_MIN;
static int32_t x44 = -2511;
volatile uint8_t x52 = 9U;
int8_t x63 = INT8_MAX;
int32_t t13 = -4570582;
volatile int32_t x78 = INT32_MIN;
int64_t x92 = -3660316031732LL;
int32_t t20 = 3864596;
volatile int64_t x103 = -5342150LL;
uint64_t x112 = UINT64_MAX;
int32_t t25 = -255021006;
volatile int64_t x124 = -1LL;
int32_t x125 = -1;
int64_t x126 = -7164608LL;
static int32_t x130 = -1;
int16_t x150 = 5497;
uint8_t x152 = 5U;
int32_t t34 = 0;
int16_t x167 = 0;
int32_t t36 = 0;
int64_t x177 = 14624LL;
static int16_t x179 = INT16_MIN;
static volatile int32_t t38 = -1863;
int64_t x181 = INT64_MIN;
uint32_t x187 = 762U;
volatile int8_t x191 = INT8_MIN;
int32_t t41 = 10;
volatile int32_t x193 = INT32_MAX;
uint32_t x195 = 2U;
int16_t x197 = -1;
volatile uint16_t x198 = 2U;
int32_t x203 = -1022691916;
uint8_t x206 = UINT8_MAX;
uint32_t x209 = 8U;
int8_t x211 = INT8_MIN;
int32_t t46 = -60523441;
int32_t x222 = INT32_MAX;
int8_t x225 = 4;
uint64_t x227 = UINT64_MAX;
static uint32_t x228 = 601044099U;
int32_t t54 = 394;
static uint16_t x261 = 41U;
int32_t x267 = -59;
int32_t x273 = -1;
uint64_t x283 = 100480710413LLU;
static int64_t x285 = -1LL;
static int32_t t62 = -2;
int32_t t63 = 1416964;
int16_t x296 = INT16_MIN;
static int32_t t64 = -19602373;
static int32_t x298 = 515558608;
static uint16_t x303 = UINT16_MAX;
uint8_t x318 = 4U;
volatile int32_t t67 = 0;
static volatile int16_t x324 = INT16_MIN;
uint16_t x326 = UINT16_MAX;
int16_t x340 = INT16_MIN;
uint16_t x346 = UINT16_MAX;
int64_t x352 = 475896094062960425LL;
static int32_t t76 = 5963;
int32_t x357 = -362;
static uint64_t x363 = UINT64_MAX;
static volatile int32_t t78 = 120285995;
int16_t x365 = INT16_MIN;
static int64_t x372 = -56324LL;
int32_t t80 = -240;
volatile int32_t t81 = 0;
int64_t x382 = INT64_MIN;
int8_t x383 = INT8_MIN;
int16_t x385 = 6;
int32_t x387 = -1;
volatile int32_t t83 = 716420244;
static int64_t x391 = -1LL;
int16_t x398 = -1;
int32_t x400 = -1347;
int32_t x403 = 101;
volatile int16_t x404 = -244;
int8_t x408 = -7;
int32_t t89 = 1;
int32_t x418 = -1;
static uint8_t x432 = 24U;
int32_t x456 = INT32_MAX;
static volatile uint16_t x457 = UINT16_MAX;
volatile uint32_t x462 = 217U;
int32_t x464 = -12155454;


void f0(void) {
	static volatile uint32_t x1 = 96341562U;
	volatile int16_t x2 = INT16_MIN;
	static uint8_t x3 = UINT8_MAX;
	volatile int64_t x4 = INT64_MAX;

	t0 = (x1<=(x2*(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 4778498903LLU;
	static int16_t x6 = INT16_MAX;
	int64_t x8 = 262424516066617LL;
	static volatile int32_t t1 = -98;

	t1 = (x5<=(x6*(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int8_t x10 = INT8_MAX;
	uint16_t x11 = UINT16_MAX;
	static uint32_t x12 = UINT32_MAX;
	static int32_t t2 = 93;

	t2 = (x9<=(x10*(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	static int32_t x15 = -1;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 113;

	t3 = (x13<=(x14*(x15/x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = INT32_MAX;
	static int16_t x19 = 7;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 0;

	t4 = (x17<=(x18*(x19/x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -432991616;
	volatile uint8_t x26 = 5U;
	int32_t x28 = 223211020;
	volatile int32_t t5 = 328159908;

	t5 = (x25<=(x26*(x27/x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int64_t x31 = -1LL;
	uint8_t x32 = UINT8_MAX;
	int32_t t6 = -108;

	t6 = (x29<=(x30*(x31/x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = -1;
	uint32_t x34 = 56929245U;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = INT16_MIN;

	t7 = (x33<=(x34*(x35/x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	static int64_t x38 = INT64_MIN;
	int8_t x39 = -6;

	t8 = (x37<=(x38*(x39/x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = -76;
	uint32_t x43 = UINT32_MAX;
	volatile int32_t t9 = -109;

	t9 = (x41<=(x42*(x43/x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	static uint64_t x46 = UINT64_MAX;
	static int8_t x47 = 58;
	uint8_t x48 = 62U;
	int32_t t10 = -120202232;

	t10 = (x45<=(x46*(x47/x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 2U;
	volatile uint8_t x50 = 29U;
	volatile int16_t x51 = INT16_MIN;
	int32_t t11 = -7;

	t11 = (x49<=(x50*(x51/x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x53 = 82646188;
	static int8_t x54 = -1;
	int16_t x55 = INT16_MIN;
	volatile int64_t x56 = -1LL;
	static int32_t t12 = -16097;

	t12 = (x53<=(x54*(x55/x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	static volatile uint16_t x62 = 347U;
	int8_t x64 = 1;

	t13 = (x61<=(x62*(x63/x64)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x69 = INT8_MAX;
	uint16_t x70 = 779U;
	uint16_t x71 = 994U;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t14 = 2038616;

	t14 = (x69<=(x70*(x71/x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MAX;
	int16_t x75 = INT16_MIN;
	uint8_t x76 = 51U;
	volatile int32_t t15 = -1005227;

	t15 = (x73<=(x74*(x75/x76)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x77 = INT32_MAX;
	volatile int16_t x79 = INT16_MAX;
	static int32_t x80 = -28989148;
	int32_t t16 = -4047;

	t16 = (x77<=(x78*(x79/x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = UINT8_MAX;
	static int8_t x82 = INT8_MIN;
	uint8_t x83 = 0U;
	int8_t x84 = INT8_MIN;
	static volatile int32_t t17 = 1;

	t17 = (x81<=(x82*(x83/x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x85 = UINT8_MAX;
	static int16_t x86 = INT16_MIN;
	int8_t x87 = -6;
	volatile int16_t x88 = INT16_MAX;
	int32_t t18 = -4875872;

	t18 = (x85<=(x86*(x87/x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -1;
	int8_t x90 = -26;
	int16_t x91 = 9179;
	volatile int32_t t19 = 890243240;

	t19 = (x89<=(x90*(x91/x92)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -20516514;
	int16_t x94 = INT16_MAX;
	static int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MAX;

	t20 = (x93<=(x94*(x95/x96)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = 0U;
	volatile int32_t x98 = -23841586;
	volatile uint8_t x99 = 46U;
	uint32_t x100 = UINT32_MAX;
	int32_t t21 = 14;

	t21 = (x97<=(x98*(x99/x100)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = 2036273U;
	static volatile int8_t x102 = INT8_MIN;
	int8_t x104 = INT8_MIN;
	int32_t t22 = -30447838;

	t22 = (x101<=(x102*(x103/x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x105 = -1;
	int16_t x106 = -1;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = 792378746545933344LLU;
	int32_t t23 = 45;

	t23 = (x105<=(x106*(x107/x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x109 = 16797LLU;
	static int16_t x110 = INT16_MIN;
	static int8_t x111 = -1;
	volatile int32_t t24 = 33704;

	t24 = (x109<=(x110*(x111/x112)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	uint64_t x114 = 37364571082087013LLU;
	uint8_t x115 = 3U;
	int32_t x116 = INT32_MIN;

	t25 = (x113<=(x114*(x115/x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x117 = 1U;
	uint64_t x118 = UINT64_MAX;
	volatile uint64_t x119 = UINT64_MAX;
	volatile int32_t x120 = INT32_MAX;
	static volatile int32_t t26 = 214093;

	t26 = (x117<=(x118*(x119/x120)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 116U;
	int16_t x122 = INT16_MAX;
	int16_t x123 = -5;
	int32_t t27 = -24;

	t27 = (x121<=(x122*(x123/x124)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x127 = -1;
	volatile int8_t x128 = -1;
	static volatile int32_t t28 = 84877;

	t28 = (x125<=(x126*(x127/x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = UINT32_MAX;
	volatile int32_t x131 = 2;
	int32_t x132 = -1;
	volatile int32_t t29 = -1068;

	t29 = (x129<=(x130*(x131/x132)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	uint8_t x134 = 1U;
	int64_t x135 = -1LL;
	uint8_t x136 = 1U;
	volatile int32_t t30 = 9720;

	t30 = (x133<=(x134*(x135/x136)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x137 = -1LL;
	volatile int16_t x138 = -1;
	int16_t x139 = INT16_MAX;
	uint8_t x140 = 8U;
	static volatile int32_t t31 = -1;

	t31 = (x137<=(x138*(x139/x140)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = 1110078797424973LLU;
	uint16_t x142 = UINT16_MAX;
	int8_t x143 = INT8_MAX;
	uint64_t x144 = 7663899385555571882LLU;
	volatile int32_t t32 = -218281;

	t32 = (x141<=(x142*(x143/x144)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = INT32_MIN;
	volatile int16_t x146 = INT16_MIN;
	volatile int8_t x147 = INT8_MIN;
	static int64_t x148 = -1LL;
	volatile int32_t t33 = 49759933;

	t33 = (x145<=(x146*(x147/x148)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = 46U;
	int64_t x151 = -1LL;

	t34 = (x149<=(x150*(x151/x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MAX;
	int32_t x158 = -1;
	uint32_t x159 = 148162483U;
	int64_t x160 = -833856601606LL;
	static int32_t t35 = 220713;

	t35 = (x157<=(x158*(x159/x160)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x165 = 2282610U;
	int64_t x166 = -3569106080268LL;
	static uint8_t x168 = 4U;

	t36 = (x165<=(x166*(x167/x168)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x173 = 341;
	static volatile int32_t x174 = INT32_MIN;
	static uint16_t x175 = UINT16_MAX;
	int32_t x176 = INT32_MIN;
	volatile int32_t t37 = 797947;

	t37 = (x173<=(x174*(x175/x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x178 = UINT32_MAX;
	uint64_t x180 = 876377285398LLU;

	t38 = (x177<=(x178*(x179/x180)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x182 = 27U;
	static uint64_t x183 = 111431280LLU;
	uint64_t x184 = 5249365880095301370LLU;
	volatile int32_t t39 = -26989;

	t39 = (x181<=(x182*(x183/x184)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x185 = UINT32_MAX;
	int16_t x186 = 18;
	uint32_t x188 = UINT32_MAX;
	static volatile int32_t t40 = -1904;

	t40 = (x185<=(x186*(x187/x188)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x189 = UINT8_MAX;
	uint32_t x190 = UINT32_MAX;
	volatile int16_t x192 = INT16_MAX;

	t41 = (x189<=(x190*(x191/x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x194 = INT16_MIN;
	int8_t x196 = -1;
	static int32_t t42 = -1;

	t42 = (x193<=(x194*(x195/x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x199 = INT32_MIN;
	int64_t x200 = 25752LL;
	int32_t t43 = -417493;

	t43 = (x197<=(x198*(x199/x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = INT64_MIN;
	uint16_t x202 = 17U;
	int32_t x204 = 561;
	static int32_t t44 = 13;

	t44 = (x201<=(x202*(x203/x204)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x205 = 7818665LLU;
	int16_t x207 = 13025;
	volatile int16_t x208 = -1;
	volatile int32_t t45 = 1;

	t45 = (x205<=(x206*(x207/x208)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x210 = INT32_MAX;
	volatile int32_t x212 = -1907;

	t46 = (x209<=(x210*(x211/x212)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x217 = -9971;
	int16_t x218 = 18;
	int8_t x219 = -1;
	volatile int32_t x220 = 2;
	volatile int32_t t47 = 4;

	t47 = (x217<=(x218*(x219/x220)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x221 = 1;
	uint32_t x223 = 109U;
	static int8_t x224 = INT8_MIN;
	static int32_t t48 = 37381;

	t48 = (x221<=(x222*(x223/x224)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x226 = -1;
	static int32_t t49 = 7;

	t49 = (x225<=(x226*(x227/x228)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x237 = 4599408515162LLU;
	uint64_t x238 = UINT64_MAX;
	volatile int64_t x239 = 4590LL;
	int16_t x240 = INT16_MIN;
	int32_t t50 = 1066301;

	t50 = (x237<=(x238*(x239/x240)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x241 = INT32_MIN;
	static uint8_t x242 = UINT8_MAX;
	int16_t x243 = -1;
	uint64_t x244 = 5738353533317366732LLU;
	volatile int32_t t51 = 920;

	t51 = (x241<=(x242*(x243/x244)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x245 = 3456LL;
	int32_t x246 = -1;
	int32_t x247 = INT32_MIN;
	uint16_t x248 = 398U;
	volatile int32_t t52 = -759;

	t52 = (x245<=(x246*(x247/x248)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x249 = 6547U;
	volatile uint64_t x250 = 444365LLU;
	uint32_t x251 = UINT32_MAX;
	uint8_t x252 = UINT8_MAX;
	int32_t t53 = 1;

	t53 = (x249<=(x250*(x251/x252)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x253 = INT16_MAX;
	static int8_t x254 = INT8_MIN;
	int64_t x255 = 353128704816LL;
	int64_t x256 = INT64_MIN;

	t54 = (x253<=(x254*(x255/x256)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = INT16_MAX;
	static volatile int64_t x258 = 474818LL;
	uint64_t x259 = 3610422LLU;
	volatile uint64_t x260 = 131603880478352619LLU;
	volatile int32_t t55 = 89;

	t55 = (x257<=(x258*(x259/x260)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x262 = INT8_MAX;
	int8_t x263 = -1;
	static uint32_t x264 = UINT32_MAX;
	static volatile int32_t t56 = 102;

	t56 = (x261<=(x262*(x263/x264)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = INT8_MAX;
	uint8_t x266 = UINT8_MAX;
	static volatile int16_t x268 = INT16_MAX;
	volatile int32_t t57 = 62518;

	t57 = (x265<=(x266*(x267/x268)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x269 = INT16_MAX;
	int16_t x270 = 10;
	uint32_t x271 = 68U;
	uint16_t x272 = 4041U;
	static volatile int32_t t58 = 20;

	t58 = (x269<=(x270*(x271/x272)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x274 = INT8_MAX;
	static int16_t x275 = -1;
	int64_t x276 = -1LL;
	volatile int32_t t59 = -1;

	t59 = (x273<=(x274*(x275/x276)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = INT8_MIN;
	volatile int16_t x278 = INT16_MIN;
	static volatile uint64_t x279 = 29083LLU;
	int8_t x280 = -1;
	int32_t t60 = -221477;

	t60 = (x277<=(x278*(x279/x280)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = INT16_MAX;
	uint64_t x282 = 115071023609006LLU;
	int32_t x284 = -6659144;
	int32_t t61 = 870262;

	t61 = (x281<=(x282*(x283/x284)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x286 = 3U;
	int16_t x287 = 0;
	uint32_t x288 = 266621750U;

	t62 = (x285<=(x286*(x287/x288)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x289 = 9267U;
	int8_t x290 = 1;
	volatile int32_t x291 = 943;
	int64_t x292 = 32427849LL;

	t63 = (x289<=(x290*(x291/x292)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = 2261495759745764549LL;
	int16_t x294 = -92;
	uint8_t x295 = UINT8_MAX;

	t64 = (x293<=(x294*(x295/x296)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x297 = -1;
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t65 = 46;

	t65 = (x297<=(x298*(x299/x300)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = -1;
	volatile int16_t x302 = INT16_MIN;
	int16_t x304 = INT16_MIN;
	volatile int32_t t66 = 24153;

	t66 = (x301<=(x302*(x303/x304)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x317 = UINT32_MAX;
	uint16_t x319 = 273U;
	volatile int64_t x320 = INT64_MIN;

	t67 = (x317<=(x318*(x319/x320)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MAX;
	int16_t x323 = -25;
	volatile int32_t t68 = -326878;

	t68 = (x321<=(x322*(x323/x324)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x325 = INT64_MIN;
	static volatile int32_t x327 = 4487;
	int16_t x328 = 15960;
	int32_t t69 = 1933302;

	t69 = (x325<=(x326*(x327/x328)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x329 = INT16_MAX;
	uint8_t x330 = 9U;
	static int64_t x331 = INT64_MIN;
	int64_t x332 = INT64_MIN;
	int32_t t70 = -1412640;

	t70 = (x329<=(x330*(x331/x332)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x333 = 3198958LLU;
	volatile int8_t x334 = 1;
	static uint16_t x335 = 0U;
	static volatile int64_t x336 = -13292073743747445LL;
	volatile int32_t t71 = 8863;

	t71 = (x333<=(x334*(x335/x336)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x337 = INT8_MIN;
	static int16_t x338 = -1;
	static int32_t x339 = -1;
	volatile int32_t t72 = -1;

	t72 = (x337<=(x338*(x339/x340)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x341 = INT8_MAX;
	static int16_t x342 = INT16_MIN;
	uint8_t x343 = 94U;
	int8_t x344 = INT8_MIN;
	volatile int32_t t73 = -8849944;

	t73 = (x341<=(x342*(x343/x344)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x345 = -304;
	uint32_t x347 = 260U;
	uint8_t x348 = 1U;
	static volatile int32_t t74 = 106001;

	t74 = (x345<=(x346*(x347/x348)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x349 = INT16_MIN;
	int8_t x350 = -1;
	int8_t x351 = 38;
	static volatile int32_t t75 = -2180819;

	t75 = (x349<=(x350*(x351/x352)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x353 = INT32_MAX;
	static int32_t x354 = INT32_MAX;
	int64_t x355 = INT64_MIN;
	static volatile uint64_t x356 = 574049692768410LLU;

	t76 = (x353<=(x354*(x355/x356)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x358 = 3;
	static volatile int8_t x359 = -4;
	int64_t x360 = INT64_MIN;
	volatile int32_t t77 = -1049740078;

	t77 = (x357<=(x358*(x359/x360)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x361 = UINT64_MAX;
	volatile int64_t x362 = INT64_MAX;
	int64_t x364 = 1047088635184LL;

	t78 = (x361<=(x362*(x363/x364)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = INT8_MIN;
	static uint8_t x368 = UINT8_MAX;
	volatile int32_t t79 = 43790;

	t79 = (x365<=(x366*(x367/x368)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = 0;
	int32_t x370 = 12;
	int16_t x371 = INT16_MIN;

	t80 = (x369<=(x370*(x371/x372)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = INT16_MIN;
	uint16_t x374 = 1U;
	static int64_t x375 = -1LL;
	int64_t x376 = 82LL;

	t81 = (x373<=(x374*(x375/x376)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x381 = 4620U;
	volatile int64_t x384 = INT64_MIN;
	volatile int32_t t82 = 3204591;

	t82 = (x381<=(x382*(x383/x384)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x386 = 2U;
	int16_t x388 = 4147;

	t83 = (x385<=(x386*(x387/x388)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x389 = -1LL;
	uint64_t x390 = 2152133104773LLU;
	int32_t x392 = 1;
	static int32_t t84 = -2030927;

	t84 = (x389<=(x390*(x391/x392)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x393 = INT8_MIN;
	uint32_t x394 = 1522U;
	uint16_t x395 = 1U;
	static int8_t x396 = INT8_MIN;
	static int32_t t85 = -31;

	t85 = (x393<=(x394*(x395/x396)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x397 = 138866310U;
	int8_t x399 = INT8_MAX;
	volatile int32_t t86 = -26965;

	t86 = (x397<=(x398*(x399/x400)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x401 = -638;
	static uint8_t x402 = 3U;
	volatile int32_t t87 = -13511;

	t87 = (x401<=(x402*(x403/x404)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x405 = -27;
	uint32_t x406 = 910967597U;
	volatile int8_t x407 = -22;
	int32_t t88 = 3;

	t88 = (x405<=(x406*(x407/x408)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x409 = INT64_MIN;
	static volatile uint16_t x410 = UINT16_MAX;
	int32_t x411 = -1;
	static uint16_t x412 = 1509U;

	t89 = (x409<=(x410*(x411/x412)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x417 = -1LL;
	static uint64_t x419 = 26759LLU;
	volatile int8_t x420 = 3;
	volatile int32_t t90 = -1;

	t90 = (x417<=(x418*(x419/x420)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x425 = 6U;
	uint16_t x426 = UINT16_MAX;
	int64_t x427 = -130373721865094713LL;
	uint64_t x428 = UINT64_MAX;
	static volatile int32_t t91 = 20551;

	t91 = (x425<=(x426*(x427/x428)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x429 = INT64_MIN;
	int16_t x430 = INT16_MIN;
	uint16_t x431 = UINT16_MAX;
	int32_t t92 = 0;

	t92 = (x429<=(x430*(x431/x432)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x437 = UINT16_MAX;
	volatile uint64_t x438 = 459803734LLU;
	uint32_t x439 = 123098U;
	static int8_t x440 = -1;
	int32_t t93 = -1427834;

	t93 = (x437<=(x438*(x439/x440)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x441 = -116;
	int16_t x442 = INT16_MIN;
	int16_t x443 = INT16_MAX;
	int32_t x444 = INT32_MAX;
	volatile int32_t t94 = 0;

	t94 = (x441<=(x442*(x443/x444)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x445 = -1;
	static int16_t x446 = INT16_MIN;
	volatile uint8_t x447 = 25U;
	static volatile int64_t x448 = -1LL;
	static int32_t t95 = -5602;

	t95 = (x445<=(x446*(x447/x448)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x449 = INT16_MIN;
	volatile uint64_t x450 = 41591LLU;
	int16_t x451 = 11;
	static uint16_t x452 = 9U;
	volatile int32_t t96 = 30;

	t96 = (x449<=(x450*(x451/x452)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x453 = INT32_MAX;
	int16_t x454 = INT16_MIN;
	static int8_t x455 = INT8_MIN;
	static volatile int32_t t97 = 495;

	t97 = (x453<=(x454*(x455/x456)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x458 = -242;
	static int32_t x459 = INT32_MIN;
	static uint64_t x460 = UINT64_MAX;
	volatile int32_t t98 = 1;

	t98 = (x457<=(x458*(x459/x460)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x461 = UINT64_MAX;
	uint8_t x463 = 37U;
	volatile int32_t t99 = -5;

	t99 = (x461<=(x462*(x463/x464)));

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

