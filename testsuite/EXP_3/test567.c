#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 200373;
static volatile int8_t x9 = INT8_MIN;
uint64_t x12 = UINT64_MAX;
static volatile int16_t x13 = INT16_MIN;
volatile int64_t x16 = INT64_MIN;
int16_t x31 = -390;
volatile uint32_t x39 = 14080813U;
int32_t t8 = 1;
volatile uint32_t x49 = 21377735U;
static int8_t x51 = INT8_MIN;
int32_t t9 = -62948845;
volatile uint64_t x55 = UINT64_MAX;
static int16_t x57 = 3;
static int16_t x61 = INT16_MAX;
static int8_t x68 = 32;
volatile int32_t t13 = 126590000;
static int64_t x69 = -15603178709152510LL;
int64_t x71 = INT64_MIN;
uint64_t x77 = 3921820LLU;
int16_t x78 = INT16_MAX;
int64_t x84 = INT64_MIN;
int64_t x91 = INT64_MIN;
static volatile int32_t t21 = 6;
volatile int32_t t23 = 11;
volatile int32_t x109 = -1;
int32_t x112 = -113;
volatile uint64_t x116 = 216LLU;
static volatile int8_t x119 = -7;
static volatile int32_t t26 = 16479;
static uint8_t x126 = 113U;
static int32_t x128 = INT32_MIN;
int64_t x129 = 84262295437LL;
static int32_t t29 = 4;
uint16_t x140 = 159U;
volatile int32_t x142 = 4;
uint16_t x143 = UINT16_MAX;
int32_t t33 = -512;
static int32_t x151 = -48;
uint16_t x163 = UINT16_MAX;
volatile int16_t x164 = INT16_MAX;
volatile int32_t t38 = 6498559;
int16_t x182 = -6;
uint16_t x186 = 27U;
volatile int32_t x199 = -16;
int8_t x200 = -1;
int32_t t43 = -23;
int64_t x204 = INT64_MAX;
volatile int16_t x215 = INT16_MIN;
static int64_t x216 = INT64_MIN;
volatile int32_t t47 = 156721;
volatile uint16_t x222 = UINT16_MAX;
int16_t x223 = INT16_MIN;
int64_t x225 = -19356525LL;
uint8_t x230 = 1U;
static volatile uint8_t x234 = UINT8_MAX;
int32_t t51 = 1;
int32_t x240 = 413;
uint32_t x247 = UINT32_MAX;
int64_t x248 = INT64_MAX;
int32_t t53 = -684;
uint64_t x263 = 944LLU;
volatile int32_t t57 = -23638;
int32_t x266 = INT32_MAX;
int32_t x267 = INT32_MIN;
int64_t x269 = INT64_MAX;
volatile int32_t t60 = -552138489;
volatile uint64_t x282 = UINT64_MAX;
volatile int16_t x287 = INT16_MAX;
int32_t x290 = INT32_MIN;
int16_t x307 = INT16_MIN;
int32_t x308 = -327631;
static uint64_t x310 = UINT64_MAX;
static int8_t x312 = -1;
static volatile int32_t t68 = 19940160;
volatile int8_t x314 = INT8_MAX;
static volatile int32_t t70 = -2;
int32_t t71 = 9;
uint32_t x328 = 3U;
volatile int32_t t73 = -4912278;
int64_t x333 = INT64_MIN;
int64_t x340 = 392410506LL;
volatile int32_t t75 = 1413813;
uint16_t x347 = 30363U;
volatile int8_t x349 = INT8_MIN;
volatile int64_t x359 = INT64_MAX;
volatile int32_t x365 = INT32_MIN;
uint16_t x366 = 9555U;
int16_t x367 = -1;
volatile int8_t x375 = INT8_MIN;
volatile int32_t t85 = -67204891;
int16_t x390 = -14156;
int32_t t88 = 501065;
volatile int32_t t91 = -100263;
int64_t x409 = -1LL;
static int16_t x415 = INT16_MAX;
int64_t x420 = INT64_MIN;
int32_t x421 = INT32_MIN;
static int16_t x423 = -3050;
uint16_t x425 = 6785U;
volatile int16_t x426 = INT16_MIN;
uint16_t x436 = 192U;
uint32_t x444 = UINT32_MAX;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint8_t x2 = UINT8_MAX;
	volatile int8_t x3 = INT8_MIN;
	uint16_t x4 = 43U;

	t0 = ((x1%x2)==(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint64_t x6 = 819689179807LLU;
	volatile uint64_t x7 = 2580266021960537LLU;
	int8_t x8 = -1;
	static volatile int32_t t1 = 1022609;

	t1 = ((x5%x6)==(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 631U;
	int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -1755894;

	t2 = ((x9%x10)==(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 452206311191927LLU;
	uint16_t x15 = 7U;
	static int32_t t3 = -13;

	t3 = ((x13%x14)==(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = 51328;
	volatile int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MIN;
	static int64_t x24 = -2367963762LL;
	volatile int32_t t4 = -1844;

	t4 = ((x21%x22)==(x23/x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -1LL;
	int32_t x30 = INT32_MIN;
	static int64_t x32 = INT64_MIN;
	volatile int32_t t5 = -60;

	t5 = ((x29%x30)==(x31/x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MIN;
	int64_t x34 = -1LL;
	int64_t x35 = 37LL;
	int32_t x36 = -1;
	volatile int32_t t6 = 140908202;

	t6 = ((x33%x34)==(x35/x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = -1;
	int16_t x38 = INT16_MIN;
	volatile int64_t x40 = 710LL;
	int32_t t7 = 17304479;

	t7 = ((x37%x38)==(x39/x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 471U;
	volatile uint16_t x42 = 126U;
	int8_t x43 = INT8_MAX;
	int16_t x44 = 585;

	t8 = ((x41%x42)==(x43/x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x50 = 28U;
	static uint8_t x52 = 1U;

	t9 = ((x49%x50)==(x51/x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -1;
	volatile int64_t x54 = -1LL;
	static int32_t x56 = -8;
	volatile int32_t t10 = -354086;

	t10 = ((x53%x54)==(x55/x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x58 = INT8_MIN;
	int32_t x59 = INT32_MIN;
	int64_t x60 = -1LL;
	volatile int32_t t11 = -8547002;

	t11 = ((x57%x58)==(x59/x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x62 = 771670571416200LLU;
	int64_t x63 = INT64_MIN;
	volatile uint64_t x64 = UINT64_MAX;
	static int32_t t12 = -116;

	t12 = ((x61%x62)==(x63/x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x65 = -206;
	volatile int8_t x66 = -1;
	volatile uint16_t x67 = UINT16_MAX;

	t13 = ((x65%x66)==(x67/x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x70 = INT8_MAX;
	int32_t x72 = INT32_MAX;
	int32_t t14 = 1003297;

	t14 = ((x69%x70)==(x71/x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x73 = 24LLU;
	int16_t x74 = -2352;
	volatile uint32_t x75 = 199559U;
	int32_t x76 = -1;
	int32_t t15 = 56811783;

	t15 = ((x73%x74)==(x75/x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x79 = INT16_MIN;
	static uint64_t x80 = UINT64_MAX;
	int32_t t16 = 1022;

	t16 = ((x77%x78)==(x79/x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = -3;
	int64_t x82 = 345LL;
	uint8_t x83 = 97U;
	volatile int32_t t17 = -1;

	t17 = ((x81%x82)==(x83/x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x85 = -1;
	int32_t x86 = INT32_MIN;
	int32_t x87 = -3522862;
	static int16_t x88 = INT16_MIN;
	volatile int32_t t18 = -3198829;

	t18 = ((x85%x86)==(x87/x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	int16_t x90 = 27;
	volatile int16_t x92 = -321;
	int32_t t19 = 17;

	t19 = ((x89%x90)==(x91/x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x93 = 1833631LLU;
	uint16_t x94 = 15330U;
	int8_t x95 = -1;
	int8_t x96 = INT8_MIN;
	int32_t t20 = 3359957;

	t20 = ((x93%x94)==(x95/x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x97 = UINT32_MAX;
	static int64_t x98 = INT64_MAX;
	static int64_t x99 = INT64_MAX;
	int32_t x100 = -1;

	t21 = ((x97%x98)==(x99/x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = -1;
	int16_t x102 = -380;
	static int32_t x103 = -112627580;
	static int32_t x104 = -241228;
	int32_t t22 = -2880;

	t22 = ((x101%x102)==(x103/x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = -1;
	int64_t x106 = INT64_MIN;
	static uint16_t x107 = 27U;
	static uint8_t x108 = 27U;

	t23 = ((x105%x106)==(x107/x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x110 = 11U;
	int64_t x111 = INT64_MAX;
	static volatile int32_t t24 = -5252217;

	t24 = ((x109%x110)==(x111/x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	int64_t x114 = 69591440395420LL;
	volatile int16_t x115 = INT16_MAX;
	volatile int32_t t25 = 43362734;

	t25 = ((x113%x114)==(x115/x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MIN;
	uint32_t x118 = 170698U;
	static uint32_t x120 = 26U;

	t26 = ((x117%x118)==(x119/x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MAX;
	int8_t x122 = INT8_MAX;
	int32_t x123 = INT32_MAX;
	static int16_t x124 = INT16_MIN;
	volatile int32_t t27 = -3404;

	t27 = ((x121%x122)==(x123/x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = -1;
	uint32_t x127 = 40084U;
	static int32_t t28 = 0;

	t28 = ((x125%x126)==(x127/x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x130 = INT8_MIN;
	int32_t x131 = INT32_MIN;
	int64_t x132 = 5990478123657056LL;

	t29 = ((x129%x130)==(x131/x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	int16_t x134 = INT16_MIN;
	uint16_t x135 = 1U;
	int32_t x136 = INT32_MIN;
	volatile int32_t t30 = 1;

	t30 = ((x133%x134)==(x135/x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x137 = INT16_MIN;
	uint32_t x138 = 11867U;
	uint64_t x139 = 1453044LLU;
	volatile int32_t t31 = 5;

	t31 = ((x137%x138)==(x139/x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x141 = 182240;
	int32_t x144 = INT32_MIN;
	static int32_t t32 = -1440;

	t32 = ((x141%x142)==(x143/x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x145 = 36709U;
	static int32_t x146 = INT32_MIN;
	uint32_t x147 = UINT32_MAX;
	int64_t x148 = INT64_MIN;

	t33 = ((x145%x146)==(x147/x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = INT32_MIN;
	uint32_t x150 = 255705885U;
	int8_t x152 = 1;
	volatile int32_t t34 = 26373;

	t34 = ((x149%x150)==(x151/x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x153 = 6U;
	int16_t x154 = INT16_MIN;
	volatile uint64_t x155 = UINT64_MAX;
	int8_t x156 = -1;
	volatile int32_t t35 = -59611;

	t35 = ((x153%x154)==(x155/x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = INT64_MAX;
	volatile uint64_t x162 = 31LLU;
	int32_t t36 = 976272;

	t36 = ((x161%x162)==(x163/x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MIN;
	volatile int8_t x166 = INT8_MIN;
	uint8_t x167 = 0U;
	volatile int16_t x168 = -1;
	static int32_t t37 = -3633;

	t37 = ((x165%x166)==(x167/x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x169 = INT64_MIN;
	uint16_t x170 = 1447U;
	volatile int32_t x171 = 31653552;
	volatile int16_t x172 = 212;

	t38 = ((x169%x170)==(x171/x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x177 = -2496;
	int32_t x178 = INT32_MAX;
	static int16_t x179 = INT16_MIN;
	uint16_t x180 = 143U;
	volatile int32_t t39 = 1;

	t39 = ((x177%x178)==(x179/x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = 3301136566685465LLU;
	int32_t x183 = -51126;
	volatile int16_t x184 = INT16_MIN;
	int32_t t40 = -931;

	t40 = ((x181%x182)==(x183/x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = 9979LL;
	uint32_t x187 = 6U;
	uint64_t x188 = 1059422592787LLU;
	volatile int32_t t41 = -206611042;

	t41 = ((x185%x186)==(x187/x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = 11LLU;
	int64_t x194 = INT64_MIN;
	volatile int32_t x195 = INT32_MIN;
	int64_t x196 = INT64_MIN;
	static volatile int32_t t42 = 392852;

	t42 = ((x193%x194)==(x195/x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x197 = 12U;
	uint16_t x198 = UINT16_MAX;

	t43 = ((x197%x198)==(x199/x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x201 = INT16_MIN;
	static uint32_t x202 = UINT32_MAX;
	int64_t x203 = INT64_MAX;
	volatile int32_t t44 = 65738883;

	t44 = ((x201%x202)==(x203/x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x205 = 668;
	uint8_t x206 = UINT8_MAX;
	int32_t x207 = INT32_MIN;
	int8_t x208 = INT8_MIN;
	volatile int32_t t45 = 2936783;

	t45 = ((x205%x206)==(x207/x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = -110653742;
	volatile int32_t x210 = INT32_MIN;
	uint8_t x211 = UINT8_MAX;
	int32_t x212 = INT32_MAX;
	volatile int32_t t46 = 114067946;

	t46 = ((x209%x210)==(x211/x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = -1;
	static int8_t x214 = -1;

	t47 = ((x213%x214)==(x215/x216));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x221 = 0;
	uint16_t x224 = 13233U;
	int32_t t48 = 4026;

	t48 = ((x221%x222)==(x223/x224));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x226 = INT16_MIN;
	int8_t x227 = 6;
	uint16_t x228 = 2929U;
	int32_t t49 = 929;

	t49 = ((x225%x226)==(x227/x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = 1;
	volatile uint8_t x231 = UINT8_MAX;
	static uint64_t x232 = UINT64_MAX;
	static int32_t t50 = -526037389;

	t50 = ((x229%x230)==(x231/x232));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x233 = -1;
	int32_t x235 = INT32_MIN;
	static volatile int32_t x236 = -46692054;

	t51 = ((x233%x234)==(x235/x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x237 = 14U;
	static int16_t x238 = -183;
	uint32_t x239 = 77U;
	int32_t t52 = -230;

	t52 = ((x237%x238)==(x239/x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x245 = INT32_MIN;
	volatile int16_t x246 = INT16_MIN;

	t53 = ((x245%x246)==(x247/x248));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x249 = INT64_MIN;
	static int64_t x250 = INT64_MIN;
	int8_t x251 = -30;
	static uint8_t x252 = 10U;
	static volatile int32_t t54 = 0;

	t54 = ((x249%x250)==(x251/x252));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x253 = 557077423498057LLU;
	uint16_t x254 = 1U;
	int16_t x255 = 0;
	static volatile int64_t x256 = INT64_MIN;
	static int32_t t55 = 84766453;

	t55 = ((x253%x254)==(x255/x256));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x257 = INT16_MAX;
	int8_t x258 = 13;
	int16_t x259 = INT16_MAX;
	uint8_t x260 = 31U;
	volatile int32_t t56 = 826863;

	t56 = ((x257%x258)==(x259/x260));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = -1;
	static int8_t x262 = INT8_MIN;
	uint64_t x264 = 37LLU;

	t57 = ((x261%x262)==(x263/x264));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x265 = 65U;
	uint32_t x268 = UINT32_MAX;
	int32_t t58 = -16336;

	t58 = ((x265%x266)==(x267/x268));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MIN;
	uint64_t x272 = 23742127LLU;
	int32_t t59 = 1779439;

	t59 = ((x269%x270)==(x271/x272));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x277 = UINT64_MAX;
	int16_t x278 = 264;
	int16_t x279 = INT16_MAX;
	int16_t x280 = INT16_MIN;

	t60 = ((x277%x278)==(x279/x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x281 = 15953091425264034LLU;
	int8_t x283 = INT8_MAX;
	int64_t x284 = INT64_MIN;
	int32_t t61 = -9640;

	t61 = ((x281%x282)==(x283/x284));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x285 = 0;
	int16_t x286 = -1;
	uint16_t x288 = UINT16_MAX;
	int32_t t62 = -20156107;

	t62 = ((x285%x286)==(x287/x288));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x289 = INT32_MIN;
	uint64_t x291 = UINT64_MAX;
	volatile uint8_t x292 = UINT8_MAX;
	volatile int32_t t63 = 3762;

	t63 = ((x289%x290)==(x291/x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = 1553506296016015260LL;
	uint16_t x294 = 4U;
	uint32_t x295 = 0U;
	int16_t x296 = -1;
	int32_t t64 = 16;

	t64 = ((x293%x294)==(x295/x296));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x297 = INT8_MIN;
	int16_t x298 = INT16_MIN;
	int32_t x299 = INT32_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t65 = 0;

	t65 = ((x297%x298)==(x299/x300));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x301 = 37U;
	static int8_t x302 = INT8_MIN;
	int64_t x303 = INT64_MAX;
	int8_t x304 = -1;
	int32_t t66 = 63423331;

	t66 = ((x301%x302)==(x303/x304));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x305 = 33LLU;
	int32_t x306 = INT32_MIN;
	static volatile int32_t t67 = 1;

	t67 = ((x305%x306)==(x307/x308));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = INT32_MIN;
	static uint16_t x311 = 73U;

	t68 = ((x309%x310)==(x311/x312));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x313 = 4132;
	int16_t x315 = INT16_MAX;
	uint8_t x316 = 23U;
	int32_t t69 = -17;

	t69 = ((x313%x314)==(x315/x316));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile int8_t x318 = INT8_MIN;
	uint16_t x319 = UINT16_MAX;
	uint16_t x320 = 15230U;

	t70 = ((x317%x318)==(x319/x320));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x321 = 1138259U;
	static int16_t x322 = 44;
	uint32_t x323 = UINT32_MAX;
	volatile uint32_t x324 = UINT32_MAX;

	t71 = ((x321%x322)==(x323/x324));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x325 = -1LL;
	uint64_t x326 = 1564517LLU;
	int8_t x327 = INT8_MAX;
	int32_t t72 = -168;

	t72 = ((x325%x326)==(x327/x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = 3;
	uint16_t x330 = 1965U;
	uint64_t x331 = 11479133236166LLU;
	uint32_t x332 = UINT32_MAX;

	t73 = ((x329%x330)==(x331/x332));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x334 = INT8_MAX;
	volatile int32_t x335 = -1;
	int8_t x336 = INT8_MAX;
	int32_t t74 = 2;

	t74 = ((x333%x334)==(x335/x336));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x337 = -1;
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = -1;

	t75 = ((x337%x338)==(x339/x340));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x341 = 39;
	uint16_t x342 = 215U;
	volatile int32_t x343 = -1;
	uint64_t x344 = 172742755LLU;
	int32_t t76 = 227282136;

	t76 = ((x341%x342)==(x343/x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x345 = 127U;
	static int32_t x346 = -1;
	uint8_t x348 = 110U;
	int32_t t77 = -269807;

	t77 = ((x345%x346)==(x347/x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x350 = 2126933890619LLU;
	uint32_t x351 = UINT32_MAX;
	static int32_t x352 = INT32_MIN;
	int32_t t78 = -5409;

	t78 = ((x349%x350)==(x351/x352));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x353 = UINT32_MAX;
	int16_t x354 = INT16_MAX;
	int8_t x355 = INT8_MIN;
	static volatile int32_t x356 = INT32_MIN;
	int32_t t79 = 129044;

	t79 = ((x353%x354)==(x355/x356));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x357 = INT64_MIN;
	uint8_t x358 = 8U;
	volatile int32_t x360 = 116;
	static volatile int32_t t80 = -7;

	t80 = ((x357%x358)==(x359/x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x361 = 3U;
	static uint64_t x362 = 215LLU;
	static int8_t x363 = -1;
	int64_t x364 = 16LL;
	int32_t t81 = 3888;

	t81 = ((x361%x362)==(x363/x364));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x368 = 21184177LLU;
	static volatile int32_t t82 = 4527725;

	t82 = ((x365%x366)==(x367/x368));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x373 = 263U;
	static int16_t x374 = 7513;
	int64_t x376 = INT64_MIN;
	int32_t t83 = 66;

	t83 = ((x373%x374)==(x375/x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x377 = 114U;
	int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MAX;
	int16_t x380 = INT16_MAX;
	int32_t t84 = 103;

	t84 = ((x377%x378)==(x379/x380));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x381 = UINT32_MAX;
	int64_t x382 = -12075524257257LL;
	static int64_t x383 = INT64_MAX;
	uint64_t x384 = 479949LLU;

	t85 = ((x381%x382)==(x383/x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x385 = 86U;
	static volatile int32_t x386 = INT32_MAX;
	uint16_t x387 = 0U;
	volatile int64_t x388 = INT64_MAX;
	int32_t t86 = 68;

	t86 = ((x385%x386)==(x387/x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x389 = INT32_MAX;
	int8_t x391 = INT8_MIN;
	static volatile int64_t x392 = INT64_MIN;
	int32_t t87 = 998336154;

	t87 = ((x389%x390)==(x391/x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x393 = UINT32_MAX;
	int8_t x394 = INT8_MIN;
	uint16_t x395 = 36U;
	uint32_t x396 = UINT32_MAX;

	t88 = ((x393%x394)==(x395/x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x397 = 0;
	int32_t x398 = -1;
	static volatile int16_t x399 = INT16_MAX;
	int16_t x400 = INT16_MIN;
	volatile int32_t t89 = 1;

	t89 = ((x397%x398)==(x399/x400));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x401 = INT64_MIN;
	static uint16_t x402 = 813U;
	int8_t x403 = 7;
	static volatile int8_t x404 = INT8_MAX;
	volatile int32_t t90 = 181;

	t90 = ((x401%x402)==(x403/x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = 28;
	static int64_t x406 = -1478510731LL;
	static uint64_t x407 = 42142965585641123LLU;
	uint64_t x408 = 94236468LLU;

	t91 = ((x405%x406)==(x407/x408));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x410 = UINT32_MAX;
	int32_t x411 = 3747907;
	int32_t x412 = -1;
	int32_t t92 = -563;

	t92 = ((x409%x410)==(x411/x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x413 = 13U;
	uint64_t x414 = 5019339LLU;
	int8_t x416 = -1;
	int32_t t93 = 1;

	t93 = ((x413%x414)==(x415/x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x417 = 2U;
	int16_t x418 = INT16_MIN;
	static int8_t x419 = INT8_MIN;
	volatile int32_t t94 = 1;

	t94 = ((x417%x418)==(x419/x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x422 = UINT64_MAX;
	uint64_t x424 = 29LLU;
	volatile int32_t t95 = -126118896;

	t95 = ((x421%x422)==(x423/x424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x427 = 71U;
	uint32_t x428 = UINT32_MAX;
	int32_t t96 = 5307020;

	t96 = ((x425%x426)==(x427/x428));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x429 = -1;
	int32_t x430 = INT32_MIN;
	uint32_t x431 = 1587675U;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t97 = 783980449;

	t97 = ((x429%x430)==(x431/x432));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x433 = INT32_MIN;
	int16_t x434 = INT16_MAX;
	uint64_t x435 = 1LLU;
	volatile int32_t t98 = -46228;

	t98 = ((x433%x434)==(x435/x436));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x441 = INT32_MIN;
	volatile uint64_t x442 = 1624LLU;
	uint64_t x443 = 1580928129320LLU;
	int32_t t99 = -7658615;

	t99 = ((x441%x442)==(x443/x444));

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

