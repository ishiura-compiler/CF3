#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x3 = 80457826U;
static int8_t x4 = -1;
int16_t x10 = 0;
int16_t x21 = 204;
uint16_t x23 = 4U;
uint16_t x27 = UINT16_MAX;
uint64_t x37 = 64239LLU;
int32_t x38 = INT32_MAX;
uint64_t t9 = 1763LLU;
int64_t t10 = -11667LL;
volatile uint64_t t11 = 665605013431104LLU;
int16_t x55 = -1;
uint64_t x59 = UINT64_MAX;
uint64_t t13 = 105698261040983945LLU;
static uint64_t t14 = 1661987857LLU;
volatile uint32_t x75 = 935111209U;
static uint16_t x80 = 687U;
volatile int64_t t18 = -2165813034907862LL;
uint16_t x83 = UINT16_MAX;
volatile int16_t x85 = INT16_MIN;
static uint64_t x86 = UINT64_MAX;
volatile int32_t x87 = -3818;
uint64_t x101 = UINT64_MAX;
uint8_t x104 = UINT8_MAX;
uint64_t x114 = UINT64_MAX;
volatile int32_t x123 = INT32_MIN;
int16_t x131 = -6927;
int16_t x134 = 6011;
int16_t x137 = INT16_MIN;
int8_t x138 = -1;
static volatile int8_t x139 = 1;
int8_t x146 = INT8_MAX;
int64_t x150 = -1LL;
int32_t x161 = 10352;
volatile int8_t x164 = -1;
static int16_t x165 = INT16_MIN;
static uint64_t t39 = UINT64_MAX;
int8_t x181 = INT8_MIN;
volatile int64_t t42 = 1432206645104LL;
volatile int32_t x187 = 224676;
static volatile int32_t x190 = -165461834;
static volatile uint64_t t44 = 29019LLU;
volatile int16_t x197 = 284;
static uint32_t x201 = UINT32_MAX;
uint64_t t47 = 18330LLU;
volatile int16_t x206 = INT16_MIN;
volatile int32_t t50 = -4;
int16_t x225 = INT16_MAX;
int32_t x226 = 32435948;
int8_t x232 = INT8_MAX;
int32_t x243 = 290302;
volatile uint64_t t55 = 14327491072564210LLU;
volatile uint32_t t58 = 150U;
volatile uint64_t t59 = 0LLU;
static uint8_t x265 = 0U;
volatile int32_t x268 = 574628648;
uint32_t x270 = 115266U;
uint32_t t62 = 255726128U;
static int64_t x283 = INT64_MAX;
volatile int64_t t64 = -954392254LL;
uint16_t x287 = 18306U;
volatile uint64_t t65 = 44782943302LLU;
int64_t x290 = -1LL;
int8_t x296 = 29;
int16_t x297 = -486;
uint8_t x300 = UINT8_MAX;
int32_t x302 = INT32_MIN;
uint64_t x306 = UINT64_MAX;
volatile int64_t x307 = INT64_MIN;
uint32_t x309 = 10U;
int64_t x322 = INT64_MAX;
volatile int64_t t73 = 528621459149553982LL;
int32_t x337 = INT32_MIN;
uint16_t x350 = 3U;
volatile uint8_t x353 = 0U;
volatile int32_t t77 = -3589;
int16_t x359 = -3697;
uint32_t t78 = 9U;
int16_t x361 = -1;
volatile int8_t x362 = 1;
volatile int64_t x365 = INT64_MAX;
static int64_t x369 = 258516567333120LL;
int32_t x375 = INT32_MIN;
static uint32_t x376 = 2029942568U;
volatile int64_t t82 = 3580868757400772LL;
int8_t x392 = -9;
uint8_t x393 = 2U;
volatile uint32_t x404 = 7906214U;
volatile int32_t x406 = -19087527;
static int16_t x408 = -18;
int8_t x416 = -1;
static int32_t x421 = 11;
volatile int8_t x433 = -1;
volatile uint64_t x437 = 873245020353682LLU;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	uint64_t x2 = 118276267LLU;
	volatile uint64_t t0 = 27806256883LLU;

	t0 = (x1+(x2+(x3/x4)));

	if (t0 != 118276139LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	volatile int16_t x6 = -1;
	int32_t x7 = -104124394;
	int64_t x8 = -1LL;
	int64_t t1 = 23811883701LL;

	t1 = (x5+(x6+(x7/x8)));

	if (t1 != 104124392LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int64_t x11 = -1LL;
	volatile int8_t x12 = INT8_MAX;
	static int64_t t2 = 759258LL;

	t2 = (x9+(x10+(x11/x12)));

	if (t2 != 65535LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	uint16_t x14 = 217U;
	int64_t x15 = -114756668542200489LL;
	int16_t x16 = INT16_MAX;
	static int64_t t3 = 1421334731617269338LL;

	t3 = (x13+(x14+(x15/x16)));

	if (t3 != -3500054992475LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int64_t x18 = -1LL;
	static uint32_t x19 = UINT32_MAX;
	uint32_t x20 = UINT32_MAX;
	volatile int64_t t4 = -5281468613373902LL;

	t4 = (x17+(x18+(x19/x20)));

	if (t4 != 2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 576U;
	uint64_t x24 = 3685228370366655871LLU;
	static volatile uint64_t t5 = 4781811018LLU;

	t5 = (x21+(x22+(x23/x24)));

	if (t5 != 780LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -7637;
	int32_t x26 = INT32_MIN;
	int64_t x28 = -440LL;
	static volatile int64_t t6 = 220183972708LL;

	t6 = (x25+(x26+(x27/x28)));

	if (t6 != -2147491433LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 436U;
	int64_t x30 = 366438248759251741LL;
	int8_t x31 = 2;
	uint32_t x32 = UINT32_MAX;
	volatile int64_t t7 = -342LL;

	t7 = (x29+(x30+(x31/x32)));

	if (t7 != 366438248759252177LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 1;
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = INT8_MIN;
	static int32_t x36 = INT32_MAX;
	uint64_t t8 = 3632379LLU;

	t8 = (x33+(x34+(x35/x36)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x39 = UINT32_MAX;
	uint64_t x40 = 185934LLU;

	t9 = (x37+(x38+(x39/x40)));

	if (t9 != 2147570985LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 6U;
	int16_t x46 = 20;
	int8_t x47 = INT8_MIN;
	int64_t x48 = 86950LL;

	t10 = (x45+(x46+(x47/x48)));

	if (t10 != 26LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = 1U;
	uint64_t x50 = 5839132LLU;
	int64_t x51 = -1LL;
	uint16_t x52 = UINT16_MAX;

	t11 = (x49+(x50+(x51/x52)));

	if (t11 != 5839133LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	int64_t x54 = INT64_MAX;
	int16_t x56 = INT16_MIN;
	volatile int64_t t12 = 4513223404832512LL;

	t12 = (x53+(x54+(x55/x56)));

	if (t12 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x57 = UINT16_MAX;
	int16_t x58 = -8;
	int16_t x60 = -1;

	t13 = (x57+(x58+(x59/x60)));

	if (t13 != 65528LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = UINT32_MAX;
	int32_t x62 = -1;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = INT8_MAX;

	t14 = (x61+(x62+(x63/x64)));

	if (t14 != 145249957631262976LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	static volatile uint32_t x66 = 1666563908U;
	int32_t x67 = INT32_MAX;
	int64_t x68 = 2921037462LL;
	int64_t t15 = 2296609196946LL;

	t15 = (x65+(x66+(x67/x68)));

	if (t15 != 1666563907LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -1;
	volatile int16_t x70 = INT16_MAX;
	int8_t x71 = -1;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t16 = -606995;

	t16 = (x69+(x70+(x71/x72)));

	if (t16 != 32766) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = 660;
	uint64_t x74 = 474620641631881911LLU;
	static uint64_t x76 = UINT64_MAX;
	volatile uint64_t t17 = 1163323295LLU;

	t17 = (x73+(x74+(x75/x76)));

	if (t17 != 474620641631882571LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = INT64_MIN;
	uint32_t x78 = UINT32_MAX;
	int64_t x79 = -1LL;

	t18 = (x77+(x78+(x79/x80)));

	if (t18 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -212714LL;
	int16_t x82 = -330;
	static int8_t x84 = INT8_MIN;
	volatile int64_t t19 = -1080482LL;

	t19 = (x81+(x82+(x83/x84)));

	if (t19 != -213555LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x88 = INT32_MIN;
	uint64_t t20 = 3974297417171LLU;

	t20 = (x85+(x86+(x87/x88)));

	if (t20 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x93 = 74U;
	int16_t x94 = 1;
	int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MAX;
	int32_t t21 = -785008427;

	t21 = (x93+(x94+(x95/x96)));

	if (t21 != 74) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = 30;
	int8_t x98 = -1;
	int64_t x99 = -29916882712LL;
	static int8_t x100 = INT8_MIN;
	int64_t t22 = 14LL;

	t22 = (x97+(x98+(x99/x100)));

	if (t22 != 233725675LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x102 = -1;
	volatile int16_t x103 = -1;
	uint64_t t23 = 157483757LLU;

	t23 = (x101+(x102+(x103/x104)));

	if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = -35452;
	static volatile int64_t x106 = INT64_MIN;
	uint8_t x107 = UINT8_MAX;
	uint64_t x108 = 21790LLU;
	volatile uint64_t t24 = 48214LLU;

	t24 = (x105+(x106+(x107/x108)));

	if (t24 != 9223372036854740356LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x109 = 119U;
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = -1LL;
	uint16_t x112 = UINT16_MAX;
	volatile uint64_t t25 = 2217LLU;

	t25 = (x109+(x110+(x111/x112)));

	if (t25 != 118LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x113 = INT32_MIN;
	volatile uint8_t x115 = UINT8_MAX;
	static int32_t x116 = INT32_MIN;
	volatile uint64_t t26 = 34533028315423LLU;

	t26 = (x113+(x114+(x115/x116)));

	if (t26 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	int8_t x118 = 1;
	int64_t x119 = 97891515LL;
	int32_t x120 = -1384;
	volatile int64_t t27 = 47791536LL;

	t27 = (x117+(x118+(x119/x120)));

	if (t27 != -2147554377LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	volatile uint64_t x122 = UINT64_MAX;
	uint8_t x124 = 26U;
	uint64_t t28 = 566441779403LLU;

	t28 = (x121+(x122+(x123/x124)));

	if (t28 != 9223372036772180283LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = 629;
	int8_t x126 = INT8_MIN;
	static int32_t x127 = 253176083;
	int64_t x128 = INT64_MIN;
	volatile int64_t t29 = -8LL;

	t29 = (x125+(x126+(x127/x128)));

	if (t29 != 501LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = -1;
	uint32_t x130 = UINT32_MAX;
	static uint8_t x132 = 3U;
	volatile uint32_t t30 = 1U;

	t30 = (x129+(x130+(x131/x132)));

	if (t30 != 4294964985U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = 21;
	uint8_t x135 = UINT8_MAX;
	static volatile uint64_t x136 = UINT64_MAX;
	uint64_t t31 = 59250623LLU;

	t31 = (x133+(x134+(x135/x136)));

	if (t31 != 6032LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x140 = 99U;
	volatile int32_t t32 = -57923388;

	t32 = (x137+(x138+(x139/x140)));

	if (t32 != -32769) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x141 = INT32_MAX;
	static uint64_t x142 = 86021046489340043LLU;
	static uint32_t x143 = 424U;
	static uint16_t x144 = 14109U;
	uint64_t t33 = 117052LLU;

	t33 = (x141+(x142+(x143/x144)));

	if (t33 != 86021048636823690LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MAX;
	static volatile int8_t x147 = INT8_MAX;
	int64_t x148 = -1LL;
	static int64_t t34 = -3436888202423277LL;

	t34 = (x145+(x146+(x147/x148)));

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	int32_t x151 = 125;
	volatile int8_t x152 = -1;
	static int64_t t35 = 1LL;

	t35 = (x149+(x150+(x151/x152)));

	if (t35 != -2147483774LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 10U;
	int16_t x154 = 7;
	int32_t x155 = 0;
	int64_t x156 = 252381838729247LL;
	int64_t t36 = 100836147LL;

	t36 = (x153+(x154+(x155/x156)));

	if (t36 != 17LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x162 = INT8_MIN;
	volatile int64_t x163 = 188LL;
	volatile int64_t t37 = 157LL;

	t37 = (x161+(x162+(x163/x164)));

	if (t37 != 10036LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x166 = INT8_MIN;
	static volatile int32_t x167 = 1;
	int16_t x168 = INT16_MAX;
	int32_t t38 = 1;

	t38 = (x165+(x166+(x167/x168)));

	if (t38 != -32896) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x169 = UINT64_MAX;
	volatile int16_t x170 = -1;
	uint64_t x171 = UINT64_MAX;
	int8_t x172 = INT8_MIN;

	t39 = (x169+(x170+(x171/x172)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = -278;
	uint16_t x174 = 7434U;
	static int16_t x175 = INT16_MAX;
	int32_t x176 = INT32_MIN;
	volatile int32_t t40 = -10;

	t40 = (x173+(x174+(x175/x176)));

	if (t40 != 7156) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 88U;
	volatile int16_t x178 = INT16_MAX;
	int64_t x179 = -1LL;
	int32_t x180 = INT32_MIN;
	static int64_t t41 = -13LL;

	t41 = (x177+(x178+(x179/x180)));

	if (t41 != 32855LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x182 = INT64_MAX;
	uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;

	t42 = (x181+(x182+(x183/x184)));

	if (t42 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = 174U;
	uint32_t x186 = 2U;
	int32_t x188 = 6651;
	volatile uint32_t t43 = 6U;

	t43 = (x185+(x186+(x187/x188)));

	if (t43 != 209U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = UINT64_MAX;
	static uint16_t x191 = 0U;
	static uint8_t x192 = 56U;

	t44 = (x189+(x190+(x191/x192)));

	if (t44 != 18446744073544089781LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = 35U;
	static uint8_t x194 = 1U;
	uint32_t x195 = 319679002U;
	int8_t x196 = -1;
	uint32_t t45 = 10875U;

	t45 = (x193+(x194+(x195/x196)));

	if (t45 != 36U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x198 = -73;
	static int16_t x199 = -1036;
	volatile int64_t x200 = INT64_MIN;
	int64_t t46 = -1888110755753LL;

	t46 = (x197+(x198+(x199/x200)));

	if (t46 != 211LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x202 = 2513U;
	uint64_t x203 = UINT64_MAX;
	static int8_t x204 = INT8_MIN;

	t47 = (x201+(x202+(x203/x204)));

	if (t47 != 4294969809LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = -1;
	static int32_t x207 = -1;
	int32_t x208 = INT32_MAX;
	int32_t t48 = -2;

	t48 = (x205+(x206+(x207/x208)));

	if (t48 != -32769) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x213 = -1LL;
	int32_t x214 = INT32_MAX;
	uint64_t x215 = 49411226727781143LLU;
	static int8_t x216 = INT8_MAX;
	uint64_t t49 = 1881708LLU;

	t49 = (x213+(x214+(x215/x216)));

	if (t49 != 389066924867749LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x221 = -418;
	static uint8_t x222 = 109U;
	volatile uint8_t x223 = 1U;
	static int16_t x224 = 1546;

	t50 = (x221+(x222+(x223/x224)));

	if (t50 != -309) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x227 = 35U;
	int16_t x228 = 5;
	int32_t t51 = 0;

	t51 = (x225+(x226+(x227/x228)));

	if (t51 != 32468722) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = -8;
	int64_t x231 = INT64_MIN;
	volatile int64_t t52 = -3556LL;

	t52 = (x229+(x230+(x231/x232)));

	if (t52 != -72624978815631497LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = INT64_MIN;
	int16_t x234 = -1;
	static uint16_t x235 = UINT16_MAX;
	uint16_t x236 = 54U;
	int64_t t53 = 30591LL;

	t53 = (x233+(x234+(x235/x236)));

	if (t53 != -9223372036854774596LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x237 = INT8_MAX;
	int32_t x238 = INT32_MIN;
	static uint32_t x239 = 71U;
	int32_t x240 = INT32_MAX;
	volatile uint32_t t54 = 2U;

	t54 = (x237+(x238+(x239/x240)));

	if (t54 != 2147483775U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = INT8_MAX;
	uint64_t x242 = 1771849753803476526LLU;
	uint32_t x244 = 633U;

	t55 = (x241+(x242+(x243/x244)));

	if (t55 != 1771849753803477111LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MIN;
	uint16_t x246 = 9505U;
	volatile uint32_t x247 = 1442U;
	uint16_t x248 = UINT16_MAX;
	volatile uint32_t t56 = 12161055U;

	t56 = (x245+(x246+(x247/x248)));

	if (t56 != 4294944033U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = 0;
	volatile int32_t x250 = -1;
	int64_t x251 = INT64_MIN;
	volatile int16_t x252 = INT16_MIN;
	volatile int64_t t57 = 1992102LL;

	t57 = (x249+(x250+(x251/x252)));

	if (t57 != 281474976710655LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = INT8_MIN;
	int32_t x254 = 407493;
	uint32_t x255 = 3U;
	uint16_t x256 = UINT16_MAX;

	t58 = (x253+(x254+(x255/x256)));

	if (t58 != 407365U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x257 = 258871LLU;
	int16_t x258 = -39;
	int64_t x259 = INT64_MIN;
	int8_t x260 = -2;

	t59 = (x257+(x258+(x259/x260)));

	if (t59 != 4611686018427646736LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x261 = 860857;
	static int32_t x262 = INT32_MIN;
	volatile int32_t x263 = INT32_MIN;
	int16_t x264 = -1499;
	volatile int32_t t60 = -74;

	t60 = (x261+(x262+(x263/x264)));

	if (t60 != -2145190181) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x266 = UINT16_MAX;
	static int16_t x267 = 32;
	int32_t t61 = 299797;

	t61 = (x265+(x266+(x267/x268)));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x269 = INT16_MIN;
	static volatile int16_t x271 = INT16_MAX;
	volatile uint32_t x272 = 46662U;

	t62 = (x269+(x270+(x271/x272)));

	if (t62 != 82498U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x277 = 54272351LL;
	volatile int16_t x278 = 569;
	int8_t x279 = INT8_MIN;
	uint8_t x280 = 1U;
	volatile int64_t t63 = 1LL;

	t63 = (x277+(x278+(x279/x280)));

	if (t63 != 54272792LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = -1;
	volatile int8_t x282 = INT8_MAX;
	uint8_t x284 = 4U;

	t64 = (x281+(x282+(x283/x284)));

	if (t64 != 2305843009213694077LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = INT32_MAX;
	int64_t x286 = INT64_MAX;
	uint64_t x288 = 271729572789LLU;

	t65 = (x285+(x286+(x287/x288)));

	if (t65 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x289 = INT32_MAX;
	static int32_t x291 = -1;
	int64_t x292 = -7178519493974LL;
	int64_t t66 = -237839815082LL;

	t66 = (x289+(x290+(x291/x292)));

	if (t66 != 2147483646LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x293 = 70U;
	volatile int64_t x294 = 19038406LL;
	static volatile int16_t x295 = INT16_MIN;
	volatile int64_t t67 = 14691215382885LL;

	t67 = (x293+(x294+(x295/x296)));

	if (t67 != 19037347LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x298 = 26;
	int16_t x299 = -1;
	volatile int32_t t68 = -15;

	t68 = (x297+(x298+(x299/x300)));

	if (t68 != -460) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int16_t x303 = -1;
	volatile uint64_t x304 = 107163239LLU;
	volatile uint64_t t69 = 11685990LLU;

	t69 = (x301+(x302+(x303/x304)));

	if (t69 != 174284349290LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x305 = INT64_MIN;
	static int16_t x308 = INT16_MAX;
	volatile uint64_t t70 = 58687863LLU;

	t70 = (x305+(x306+(x307/x308)));

	if (t70 != 9223090553287868407LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x310 = INT16_MIN;
	static volatile int8_t x311 = -1;
	uint32_t x312 = 25U;
	uint32_t t71 = 413598948U;

	t71 = (x309+(x310+(x311/x312)));

	if (t71 != 171765933U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x321 = 0U;
	int64_t x323 = -1LL;
	int64_t x324 = -33109696LL;
	volatile int64_t t72 = INT64_MAX;

	t72 = (x321+(x322+(x323/x324)));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x325 = -52;
	uint32_t x326 = UINT32_MAX;
	static int8_t x327 = -40;
	int64_t x328 = -78736261437LL;

	t73 = (x325+(x326+(x327/x328)));

	if (t73 != 4294967243LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x329 = -1;
	static uint64_t x330 = 463086072082660LLU;
	uint16_t x331 = 5U;
	volatile int32_t x332 = INT32_MIN;
	volatile uint64_t t74 = 94820092901LLU;

	t74 = (x329+(x330+(x331/x332)));

	if (t74 != 463086072082659LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x338 = -128;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = 32179775562178378LLU;
	static uint64_t t75 = 155174663949LLU;

	t75 = (x337+(x338+(x339/x340)));

	if (t75 != 18446744071562068413LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x349 = UINT16_MAX;
	static int64_t x351 = INT64_MAX;
	volatile int8_t x352 = INT8_MIN;
	static int64_t t76 = -39079430LL;

	t76 = (x349+(x350+(x351/x352)));

	if (t76 != -72057594037862397LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x354 = UINT16_MAX;
	volatile int32_t x355 = 249;
	int8_t x356 = 53;

	t77 = (x353+(x354+(x355/x356)));

	if (t77 != 65539) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x357 = UINT32_MAX;
	static uint16_t x358 = 7U;
	int32_t x360 = INT32_MAX;

	t78 = (x357+(x358+(x359/x360)));

	if (t78 != 6U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x363 = INT32_MIN;
	volatile int64_t x364 = INT64_MAX;
	int64_t t79 = -33450932880423202LL;

	t79 = (x361+(x362+(x363/x364)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x366 = INT16_MIN;
	int16_t x367 = 1267;
	uint16_t x368 = UINT16_MAX;
	int64_t t80 = -3168LL;

	t80 = (x365+(x366+(x367/x368)));

	if (t80 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x370 = UINT64_MAX;
	static int8_t x371 = 29;
	int32_t x372 = INT32_MAX;
	uint64_t t81 = 433178105803703196LLU;

	t81 = (x369+(x370+(x371/x372)));

	if (t81 != 258516567333119LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x373 = -1LL;
	int8_t x374 = INT8_MIN;

	t82 = (x373+(x374+(x375/x376)));

	if (t82 != 4294967168LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x377 = -387195953957860LL;
	int64_t x378 = 135LL;
	volatile uint32_t x379 = 18U;
	uint32_t x380 = UINT32_MAX;
	volatile int64_t t83 = 7607LL;

	t83 = (x377+(x378+(x379/x380)));

	if (t83 != -387195953957725LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x381 = 0U;
	uint8_t x382 = 14U;
	volatile int8_t x383 = -1;
	int32_t x384 = INT32_MIN;
	volatile int32_t t84 = 124;

	t84 = (x381+(x382+(x383/x384)));

	if (t84 != 14) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x389 = INT64_MIN;
	uint32_t x390 = 16674U;
	static int8_t x391 = INT8_MAX;
	int64_t t85 = -1692416LL;

	t85 = (x389+(x390+(x391/x392)));

	if (t85 != -9223372036854759148LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x394 = -3;
	int64_t x395 = -1LL;
	int32_t x396 = -1;
	volatile int64_t t86 = 2LL;

	t86 = (x393+(x394+(x395/x396)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = 1;
	static int32_t x398 = INT32_MAX;
	static uint32_t x399 = 190409196U;
	int16_t x400 = -1;
	volatile uint32_t t87 = 388U;

	t87 = (x397+(x398+(x399/x400)));

	if (t87 != 2147483648U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x401 = INT32_MIN;
	static int8_t x402 = INT8_MIN;
	uint16_t x403 = 3490U;
	volatile uint32_t t88 = 527337691U;

	t88 = (x401+(x402+(x403/x404)));

	if (t88 != 2147483520U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x405 = -1;
	int32_t x407 = 1;
	volatile int32_t t89 = 1184;

	t89 = (x405+(x406+(x407/x408)));

	if (t89 != -19087528) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = INT8_MAX;
	uint64_t x410 = 218531538777910LLU;
	uint8_t x411 = 0U;
	int8_t x412 = -34;
	uint64_t t90 = 27LLU;

	t90 = (x409+(x410+(x411/x412)));

	if (t90 != 218531538778037LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x413 = -1;
	volatile uint64_t x414 = 0LLU;
	int16_t x415 = INT16_MAX;
	volatile uint64_t t91 = 12529839494443LLU;

	t91 = (x413+(x414+(x415/x416)));

	if (t91 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x417 = INT16_MIN;
	uint16_t x418 = UINT16_MAX;
	int32_t x419 = -1;
	int16_t x420 = INT16_MAX;
	int32_t t92 = -176881;

	t92 = (x417+(x418+(x419/x420)));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x422 = -1;
	static int8_t x423 = 31;
	static uint8_t x424 = UINT8_MAX;
	volatile int32_t t93 = -1550175;

	t93 = (x421+(x422+(x423/x424)));

	if (t93 != 10) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x425 = 0U;
	int32_t x426 = -3112;
	volatile int8_t x427 = 3;
	uint8_t x428 = UINT8_MAX;
	int32_t t94 = 0;

	t94 = (x425+(x426+(x427/x428)));

	if (t94 != -3112) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x429 = INT16_MIN;
	uint8_t x430 = 5U;
	volatile int32_t x431 = INT32_MAX;
	int64_t x432 = INT64_MAX;
	volatile int64_t t95 = -32560361150040LL;

	t95 = (x429+(x430+(x431/x432)));

	if (t95 != -32763LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x434 = 26662;
	uint16_t x435 = 0U;
	int16_t x436 = -1;
	int32_t t96 = 2624845;

	t96 = (x433+(x434+(x435/x436)));

	if (t96 != 26661) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x438 = INT8_MIN;
	static int64_t x439 = INT64_MAX;
	static int16_t x440 = INT16_MIN;
	volatile uint64_t t97 = 2656331368995874LLU;

	t97 = (x437+(x438+(x439/x440)));

	if (t97 != 591770043642899LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x441 = 64168;
	int32_t x442 = INT32_MIN;
	int32_t x443 = -1;
	volatile int16_t x444 = 3962;
	int32_t t98 = -1906829;

	t98 = (x441+(x442+(x443/x444)));

	if (t98 != -2147419480) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x445 = UINT64_MAX;
	int64_t x446 = -9LL;
	uint8_t x447 = 0U;
	volatile int8_t x448 = -1;
	volatile uint64_t t99 = 1494873LLU;

	t99 = (x445+(x446+(x447/x448)));

	if (t99 != 18446744073709551606LLU) { NG(); } else { ; }
	
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

