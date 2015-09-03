#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x11 = 161386U;
volatile uint16_t x12 = 1U;
volatile int32_t t2 = 68790;
volatile int32_t t4 = 1;
uint16_t x24 = 1652U;
static uint8_t x33 = 0U;
static uint64_t x34 = 1832089985540991114LLU;
volatile int64_t x35 = INT64_MAX;
int64_t x36 = INT64_MIN;
static int8_t x37 = 17;
int64_t x41 = INT64_MIN;
int8_t x44 = INT8_MIN;
int8_t x51 = INT8_MIN;
uint8_t x57 = 92U;
int32_t x58 = -1;
volatile int16_t x62 = 584;
volatile int32_t t15 = 854175655;
volatile int32_t x69 = -1;
static int32_t x70 = INT32_MIN;
static int32_t t16 = 1;
uint16_t x74 = UINT16_MAX;
volatile int32_t t19 = 26;
int8_t x85 = -27;
volatile int16_t x89 = INT16_MAX;
volatile int64_t x95 = INT64_MIN;
int32_t x97 = INT32_MIN;
volatile int64_t x109 = -1LL;
int8_t x113 = 61;
volatile int32_t t27 = -2360658;
uint16_t x119 = 1668U;
static int32_t t29 = -1;
int16_t x129 = -10918;
static uint64_t x133 = 9932LLU;
static int16_t x134 = -1;
uint64_t x137 = 107141LLU;
int32_t t32 = -6;
uint32_t x141 = 207430490U;
uint8_t x144 = UINT8_MAX;
int32_t x155 = 798912567;
volatile uint32_t x167 = UINT32_MAX;
int32_t t40 = -2955;
static int32_t x174 = INT32_MIN;
int32_t x176 = INT32_MAX;
volatile int32_t t41 = 7989781;
static volatile int64_t x185 = INT64_MIN;
int32_t x187 = 1;
volatile uint8_t x188 = UINT8_MAX;
int32_t t46 = 283194033;
int32_t t47 = -195;
volatile int8_t x208 = -1;
uint64_t x219 = 1500128889120687628LLU;
uint8_t x228 = 102U;
uint8_t x236 = 33U;
int16_t x237 = INT16_MIN;
int8_t x241 = 1;
uint64_t x244 = 288502LLU;
uint8_t x247 = 88U;
int8_t x250 = -6;
int32_t t56 = 521;
int64_t x254 = -1LL;
int8_t x264 = INT8_MIN;
static int32_t x265 = INT32_MAX;
static uint64_t x269 = UINT64_MAX;
volatile int32_t x274 = 866;
volatile int32_t x275 = 409;
int32_t t62 = -110;
volatile int32_t x279 = INT32_MIN;
int32_t x280 = -376;
int16_t x281 = INT16_MAX;
int32_t x288 = -1;
volatile int16_t x298 = -1;
int8_t x299 = INT8_MIN;
static uint64_t x309 = 27591160179LLU;
int16_t x311 = INT16_MIN;
static int8_t x315 = INT8_MIN;
int64_t x316 = -1LL;
int32_t x317 = INT32_MAX;
uint32_t x319 = 34U;
int32_t t72 = 6837;
int64_t x330 = 30918520LL;
volatile int16_t x337 = 0;
static int16_t x342 = 3320;
volatile uint8_t x346 = 1U;
volatile int32_t t79 = 916410;
uint64_t x355 = 81LLU;
int32_t x361 = -1;
static volatile int64_t x376 = -6816100543LL;
volatile int16_t x379 = -17;
int64_t x383 = -13LL;
int8_t x385 = INT8_MIN;
int32_t t89 = -707;
int16_t x394 = INT16_MIN;
volatile uint64_t x396 = UINT64_MAX;
static volatile int16_t x408 = INT16_MIN;
int64_t x414 = INT64_MIN;
int32_t x418 = INT32_MIN;
uint8_t x421 = 30U;
static int32_t x426 = INT32_MIN;
int64_t x428 = INT64_MIN;
int32_t x430 = 13;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MIN;
	static uint8_t x4 = 17U;
	volatile int32_t t0 = 29;

	t0 = (x1<((x2^x3)+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = UINT64_MAX;
	int16_t x6 = -3529;
	int8_t x7 = -15;
	volatile int32_t x8 = INT32_MIN;
	int32_t t1 = -308;

	t1 = (x5<((x6^x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	int64_t x10 = INT64_MIN;

	t2 = (x9<((x10^x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 3148U;
	int32_t x14 = INT32_MAX;
	int32_t x15 = -1;
	int32_t x16 = 42719;
	int32_t t3 = -62863634;

	t3 = (x13<((x14^x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	int32_t x18 = INT32_MIN;
	int16_t x19 = 10;
	int16_t x20 = -1;

	t4 = (x17<((x18^x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x21 = 2085451U;
	volatile int8_t x22 = -1;
	uint64_t x23 = 1797955487054195342LLU;
	int32_t t5 = -15651468;

	t5 = (x21<((x22^x23)+x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static int16_t x26 = -1;
	volatile uint32_t x27 = 46887U;
	static int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -3;

	t6 = (x25<((x26^x27)+x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MAX;
	static int32_t x30 = -245243135;
	volatile int64_t x31 = 394LL;
	uint32_t x32 = UINT32_MAX;
	int32_t t7 = 962;

	t7 = (x29<((x30^x31)+x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t t8 = 27;

	t8 = (x33<((x34^x35)+x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = 47LLU;
	static int8_t x39 = -1;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 16072525;

	t9 = (x37<((x38^x39)+x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	static int64_t x43 = INT64_MIN;
	volatile int32_t t10 = -41631;

	t10 = (x41<((x42^x43)+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	int64_t x46 = INT64_MIN;
	uint16_t x47 = UINT16_MAX;
	int8_t x48 = -1;
	volatile int32_t t11 = -171859090;

	t11 = (x45<((x46^x47)+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -784;
	static uint8_t x50 = UINT8_MAX;
	uint32_t x52 = UINT32_MAX;
	int32_t t12 = -178792;

	t12 = (x49<((x50^x51)+x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x59 = -1;
	uint8_t x60 = 0U;
	static int32_t t13 = 218;

	t13 = (x57<((x58^x59)+x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 61U;
	volatile int32_t x63 = -3;
	volatile uint8_t x64 = 72U;
	static int32_t t14 = 17;

	t14 = (x61<((x62^x63)+x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	uint32_t x66 = UINT32_MAX;
	int8_t x67 = 36;
	volatile int32_t x68 = INT32_MIN;

	t15 = (x65<((x66^x67)+x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x71 = INT64_MIN;
	volatile int64_t x72 = -14LL;

	t16 = (x69<((x70^x71)+x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MAX;
	static int16_t x75 = INT16_MIN;
	volatile int8_t x76 = INT8_MIN;
	volatile int32_t t17 = 31494481;

	t17 = (x73<((x74^x75)+x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 5U;
	volatile int64_t x78 = -1LL;
	static volatile int8_t x79 = -12;
	int8_t x80 = -30;
	volatile int32_t t18 = 3;

	t18 = (x77<((x78^x79)+x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = -132837647;
	int64_t x82 = 6567460933LL;
	static uint16_t x83 = 436U;
	uint64_t x84 = 653062LLU;

	t19 = (x81<((x82^x83)+x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x86 = -1;
	int32_t x87 = -9379065;
	uint8_t x88 = UINT8_MAX;
	int32_t t20 = 3649;

	t20 = (x85<((x86^x87)+x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x90 = 82302560434029909LLU;
	int8_t x91 = INT8_MIN;
	static volatile uint32_t x92 = 2079924635U;
	static volatile int32_t t21 = 1;

	t21 = (x89<((x90^x91)+x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	volatile int8_t x94 = INT8_MAX;
	int64_t x96 = -1LL;
	volatile int32_t t22 = 63096642;

	t22 = (x93<((x94^x95)+x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x98 = 675266457U;
	volatile int16_t x99 = 82;
	static int16_t x100 = -1;
	static volatile int32_t t23 = -2409;

	t23 = (x97<((x98^x99)+x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = 984;
	static volatile uint16_t x102 = 30U;
	volatile uint32_t x103 = UINT32_MAX;
	static int16_t x104 = 223;
	int32_t t24 = -270;

	t24 = (x101<((x102^x103)+x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = 0;
	int32_t x107 = INT32_MIN;
	static volatile int64_t x108 = -31LL;
	volatile int32_t t25 = -3903593;

	t25 = (x105<((x106^x107)+x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x110 = INT8_MIN;
	static uint16_t x111 = 61U;
	int8_t x112 = -2;
	volatile int32_t t26 = 6915;

	t26 = (x109<((x110^x111)+x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x114 = -1;
	int64_t x115 = -3593698847557392LL;
	static uint64_t x116 = UINT64_MAX;

	t27 = (x113<((x114^x115)+x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = -278619561;
	volatile int16_t x118 = INT16_MIN;
	int16_t x120 = INT16_MAX;
	int32_t t28 = 82;

	t28 = (x117<((x118^x119)+x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = -182723497LL;
	uint64_t x126 = 7858312716532563674LLU;
	int16_t x127 = INT16_MAX;
	uint32_t x128 = 1269971985U;

	t29 = (x125<((x126^x127)+x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x130 = UINT8_MAX;
	volatile int16_t x131 = INT16_MAX;
	static int8_t x132 = -1;
	volatile int32_t t30 = 214335861;

	t30 = (x129<((x130^x131)+x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x135 = 2;
	int8_t x136 = -3;
	volatile int32_t t31 = -5;

	t31 = (x133<((x134^x135)+x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x138 = INT16_MIN;
	uint32_t x139 = 348703726U;
	volatile uint16_t x140 = 70U;

	t32 = (x137<((x138^x139)+x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x142 = 13478;
	uint32_t x143 = 20U;
	volatile int32_t t33 = -96;

	t33 = (x141<((x142^x143)+x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x145 = 61LL;
	int32_t x146 = INT32_MIN;
	static uint16_t x147 = UINT16_MAX;
	int8_t x148 = -1;
	int32_t t34 = -73895299;

	t34 = (x145<((x146^x147)+x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = 32426LLU;
	volatile int64_t x150 = -1LL;
	int32_t x151 = INT32_MAX;
	uint8_t x152 = 0U;
	volatile int32_t t35 = 321;

	t35 = (x149<((x150^x151)+x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 135U;
	int32_t x154 = INT32_MIN;
	static uint8_t x156 = 5U;
	volatile int32_t t36 = -69411510;

	t36 = (x153<((x154^x155)+x156));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = UINT32_MAX;
	volatile uint32_t x158 = 3U;
	uint32_t x159 = UINT32_MAX;
	int16_t x160 = INT16_MAX;
	int32_t t37 = -2;

	t37 = (x157<((x158^x159)+x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x161 = -1;
	uint64_t x162 = 0LLU;
	uint64_t x163 = UINT64_MAX;
	static uint64_t x164 = UINT64_MAX;
	int32_t t38 = -44689217;

	t38 = (x161<((x162^x163)+x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MAX;
	int16_t x166 = -13670;
	int16_t x168 = INT16_MIN;
	int32_t t39 = -101002;

	t39 = (x165<((x166^x167)+x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -1;
	uint8_t x170 = 4U;
	int64_t x171 = 4375545278231254LL;
	int8_t x172 = 42;

	t40 = (x169<((x170^x171)+x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 9675U;
	volatile int16_t x175 = 25;

	t41 = (x173<((x174^x175)+x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MIN;
	uint64_t x178 = UINT64_MAX;
	static int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;
	int32_t t42 = 697699;

	t42 = (x177<((x178^x179)+x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MIN;
	uint32_t x182 = UINT32_MAX;
	int32_t x183 = INT32_MIN;
	static int16_t x184 = INT16_MAX;
	volatile int32_t t43 = 4057245;

	t43 = (x181<((x182^x183)+x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x186 = -1LL;
	int32_t t44 = -298545909;

	t44 = (x185<((x186^x187)+x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = 6;
	volatile int16_t x194 = INT16_MAX;
	int16_t x195 = -1;
	static volatile int8_t x196 = 1;
	int32_t t45 = 305;

	t45 = (x193<((x194^x195)+x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 1255369487580199842LLU;
	int64_t x198 = -1LL;
	int16_t x199 = -1;
	int32_t x200 = -693905;

	t46 = (x197<((x198^x199)+x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x201 = 2817U;
	static volatile int16_t x202 = INT16_MIN;
	uint16_t x203 = 17236U;
	uint8_t x204 = 0U;

	t47 = (x201<((x202^x203)+x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = 1U;
	int8_t x206 = INT8_MIN;
	uint8_t x207 = UINT8_MAX;
	int32_t t48 = -16;

	t48 = (x205<((x206^x207)+x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x209 = INT16_MIN;
	uint16_t x210 = 6U;
	volatile int16_t x211 = INT16_MAX;
	static int8_t x212 = -1;
	static int32_t t49 = 543887;

	t49 = (x209<((x210^x211)+x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = -1;
	uint64_t x218 = 34481409326856072LLU;
	volatile uint64_t x220 = UINT64_MAX;
	int32_t t50 = 514185189;

	t50 = (x217<((x218^x219)+x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x225 = UINT8_MAX;
	int8_t x226 = INT8_MIN;
	int8_t x227 = INT8_MIN;
	volatile int32_t t51 = 0;

	t51 = (x225<((x226^x227)+x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x233 = 7146;
	uint32_t x234 = UINT32_MAX;
	uint32_t x235 = 1119980U;
	volatile int32_t t52 = -441;

	t52 = (x233<((x234^x235)+x236));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x238 = INT8_MIN;
	static int8_t x239 = INT8_MIN;
	int16_t x240 = -1;
	static volatile int32_t t53 = 0;

	t53 = (x237<((x238^x239)+x240));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x242 = -6553;
	static uint32_t x243 = 340128383U;
	volatile int32_t t54 = 1;

	t54 = (x241<((x242^x243)+x244));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = UINT32_MAX;
	int32_t x246 = 818385;
	static uint64_t x248 = 2517LLU;
	static int32_t t55 = 885385;

	t55 = (x245<((x246^x247)+x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = 44981374U;
	volatile int32_t x251 = -1;
	static volatile uint8_t x252 = UINT8_MAX;

	t56 = (x249<((x250^x251)+x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x253 = INT8_MAX;
	volatile int16_t x255 = INT16_MAX;
	int16_t x256 = -9566;
	volatile int32_t t57 = -228;

	t57 = (x253<((x254^x255)+x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x257 = UINT64_MAX;
	uint16_t x258 = 4U;
	int16_t x259 = -1;
	uint64_t x260 = UINT64_MAX;
	static volatile int32_t t58 = 209763099;

	t58 = (x257<((x258^x259)+x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x261 = INT16_MIN;
	uint8_t x262 = UINT8_MAX;
	static int32_t x263 = 786;
	static int32_t t59 = -33099302;

	t59 = (x261<((x262^x263)+x264));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x266 = INT8_MAX;
	static volatile int8_t x267 = INT8_MAX;
	volatile int16_t x268 = INT16_MIN;
	static int32_t t60 = 12380;

	t60 = (x265<((x266^x267)+x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x270 = -15;
	int8_t x271 = INT8_MAX;
	int8_t x272 = -6;
	volatile int32_t t61 = -367339439;

	t61 = (x269<((x270^x271)+x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x273 = 671U;
	volatile int16_t x276 = INT16_MIN;

	t62 = (x273<((x274^x275)+x276));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x277 = 0U;
	int64_t x278 = -44448LL;
	volatile int32_t t63 = -1;

	t63 = (x277<((x278^x279)+x280));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x282 = 346LLU;
	static int64_t x283 = INT64_MIN;
	uint32_t x284 = 6U;
	volatile int32_t t64 = -28782328;

	t64 = (x281<((x282^x283)+x284));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x285 = 8600U;
	volatile int64_t x286 = -5401LL;
	int32_t x287 = INT32_MAX;
	volatile int32_t t65 = -1;

	t65 = (x285<((x286^x287)+x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = 28065750LL;
	volatile int32_t x294 = INT32_MIN;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = 2310611U;
	static volatile int32_t t66 = 779746;

	t66 = (x293<((x294^x295)+x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x297 = UINT64_MAX;
	volatile int8_t x300 = INT8_MIN;
	volatile int32_t t67 = 1;

	t67 = (x297<((x298^x299)+x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x301 = 880231;
	static uint32_t x302 = UINT32_MAX;
	uint64_t x303 = 10586633743LLU;
	uint32_t x304 = UINT32_MAX;
	static volatile int32_t t68 = 12;

	t68 = (x301<((x302^x303)+x304));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x305 = UINT16_MAX;
	volatile uint8_t x306 = UINT8_MAX;
	int32_t x307 = 7613;
	int32_t x308 = 14543716;
	volatile int32_t t69 = 318095705;

	t69 = (x305<((x306^x307)+x308));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x310 = INT16_MIN;
	volatile int16_t x312 = INT16_MAX;
	int32_t t70 = -322870;

	t70 = (x309<((x310^x311)+x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = INT64_MIN;
	volatile uint32_t x314 = 11U;
	int32_t t71 = 14609201;

	t71 = (x313<((x314^x315)+x316));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x318 = 2939U;
	volatile int16_t x320 = 1;

	t72 = (x317<((x318^x319)+x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x321 = UINT8_MAX;
	volatile int64_t x322 = -73849LL;
	int32_t x323 = INT32_MIN;
	uint64_t x324 = 7960988856778LLU;
	static volatile int32_t t73 = -11607403;

	t73 = (x321<((x322^x323)+x324));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = 766601541LLU;
	volatile int32_t x326 = INT32_MAX;
	int32_t x327 = -152;
	uint16_t x328 = UINT16_MAX;
	static volatile int32_t t74 = -355541;

	t74 = (x325<((x326^x327)+x328));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = 88768932493001066LL;
	int16_t x331 = -1078;
	int8_t x332 = INT8_MAX;
	volatile int32_t t75 = 5850142;

	t75 = (x329<((x330^x331)+x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = 11;
	static volatile uint16_t x334 = 74U;
	int64_t x335 = INT64_MIN;
	int32_t x336 = -1;
	volatile int32_t t76 = 26680;

	t76 = (x333<((x334^x335)+x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x338 = INT32_MAX;
	static int64_t x339 = 46LL;
	int16_t x340 = INT16_MAX;
	int32_t t77 = -810645688;

	t77 = (x337<((x338^x339)+x340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x341 = 1;
	static volatile uint16_t x343 = 264U;
	int32_t x344 = -21;
	volatile int32_t t78 = -144;

	t78 = (x341<((x342^x343)+x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x345 = 20;
	volatile uint64_t x347 = 63LLU;
	int16_t x348 = -293;

	t79 = (x345<((x346^x347)+x348));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = 186568LL;
	static int8_t x350 = INT8_MIN;
	volatile int16_t x351 = 11170;
	static uint8_t x352 = 63U;
	int32_t t80 = -1;

	t80 = (x349<((x350^x351)+x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = 1;
	uint32_t x354 = 228316160U;
	static int64_t x356 = -3537942178LL;
	volatile int32_t t81 = -1;

	t81 = (x353<((x354^x355)+x356));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x358 = INT16_MIN;
	uint16_t x359 = 1871U;
	static int16_t x360 = -1;
	volatile int32_t t82 = -3468;

	t82 = (x357<((x358^x359)+x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x362 = -1;
	static volatile int64_t x363 = INT64_MAX;
	uint16_t x364 = 13U;
	static int32_t t83 = -6124;

	t83 = (x361<((x362^x363)+x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x365 = 9U;
	static volatile int8_t x366 = 2;
	static uint32_t x367 = UINT32_MAX;
	volatile int8_t x368 = 12;
	volatile int32_t t84 = -996;

	t84 = (x365<((x366^x367)+x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x369 = INT64_MIN;
	static volatile int64_t x370 = INT64_MAX;
	int16_t x371 = INT16_MIN;
	int8_t x372 = -3;
	int32_t t85 = -165874;

	t85 = (x369<((x370^x371)+x372));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x373 = 547612446U;
	uint64_t x374 = UINT64_MAX;
	int16_t x375 = -1;
	static volatile int32_t t86 = -124605528;

	t86 = (x373<((x374^x375)+x376));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x377 = INT16_MIN;
	int8_t x378 = INT8_MIN;
	int8_t x380 = INT8_MIN;
	static volatile int32_t t87 = 2367;

	t87 = (x377<((x378^x379)+x380));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x381 = 49842537LLU;
	int64_t x382 = INT64_MIN;
	int16_t x384 = INT16_MIN;
	int32_t t88 = 1;

	t88 = (x381<((x382^x383)+x384));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x386 = 6U;
	static uint32_t x387 = UINT32_MAX;
	static int64_t x388 = INT64_MIN;

	t89 = (x385<((x386^x387)+x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x389 = 1250;
	uint64_t x390 = 183632826648LLU;
	volatile uint64_t x391 = 522088026355399LLU;
	int64_t x392 = -1LL;
	volatile int32_t t90 = 2;

	t90 = (x389<((x390^x391)+x392));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = 1441;
	static int8_t x395 = INT8_MIN;
	int32_t t91 = 7914072;

	t91 = (x393<((x394^x395)+x396));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x397 = 38LLU;
	int64_t x398 = INT64_MIN;
	int16_t x399 = INT16_MIN;
	volatile int16_t x400 = INT16_MAX;
	volatile int32_t t92 = -20;

	t92 = (x397<((x398^x399)+x400));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MIN;
	int8_t x406 = -3;
	uint8_t x407 = 36U;
	volatile int32_t t93 = 19;

	t93 = (x405<((x406^x407)+x408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x409 = UINT8_MAX;
	int8_t x410 = 7;
	uint8_t x411 = 30U;
	volatile uint8_t x412 = 11U;
	static int32_t t94 = 59;

	t94 = (x409<((x410^x411)+x412));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x413 = 0U;
	uint16_t x415 = 490U;
	uint16_t x416 = 1U;
	int32_t t95 = 4646386;

	t95 = (x413<((x414^x415)+x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x417 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	static uint64_t x420 = 11131363759010LLU;
	int32_t t96 = -291;

	t96 = (x417<((x418^x419)+x420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x422 = 473U;
	int8_t x423 = -1;
	uint16_t x424 = 1U;
	volatile int32_t t97 = -16346213;

	t97 = (x421<((x422^x423)+x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x425 = UINT64_MAX;
	int16_t x427 = -1;
	static int32_t t98 = -1334;

	t98 = (x425<((x426^x427)+x428));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x429 = -2;
	uint32_t x431 = UINT32_MAX;
	int32_t x432 = INT32_MAX;
	volatile int32_t t99 = 3;

	t99 = (x429<((x430^x431)+x432));

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

