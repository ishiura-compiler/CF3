#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x10 = 747410772U;
uint8_t x28 = 3U;
int16_t x35 = 83;
int32_t x41 = -24086;
uint16_t x45 = 6U;
static int32_t x50 = INT32_MIN;
static int8_t x52 = 1;
int8_t x62 = 42;
int16_t x65 = -12260;
volatile int32_t x69 = -1;
static uint16_t x72 = UINT16_MAX;
int32_t t15 = 5653;
uint32_t x88 = 29954824U;
uint64_t x89 = 179949902619LLU;
int64_t t19 = 24850633094372367LL;
volatile int32_t x99 = -1;
uint32_t x101 = 979899U;
uint32_t x103 = 3818067U;
volatile int8_t x104 = INT8_MIN;
static volatile uint32_t t22 = 443U;
int16_t x107 = -2;
uint16_t x109 = UINT16_MAX;
int16_t x110 = INT16_MAX;
volatile int32_t t24 = 64836;
static int32_t x114 = INT32_MAX;
static int16_t x115 = -252;
volatile int64_t t25 = -1LL;
int16_t x117 = INT16_MIN;
volatile int16_t x120 = -1;
int64_t x123 = 68191387796560LL;
uint32_t x125 = UINT32_MAX;
static uint64_t t28 = 185056LLU;
volatile int32_t x135 = 14258730;
uint32_t x146 = UINT32_MAX;
int32_t x150 = INT32_MAX;
int16_t x151 = -10008;
uint16_t x152 = 5265U;
uint16_t x167 = 313U;
int32_t x170 = INT32_MIN;
int16_t x173 = -1;
uint16_t x175 = 46U;
int8_t x183 = -61;
int8_t x188 = -42;
int32_t x192 = INT32_MIN;
int8_t x195 = -1;
static volatile uint8_t x196 = 17U;
volatile int16_t x199 = 69;
static int32_t t47 = 0;
int16_t x207 = INT16_MAX;
volatile int64_t t50 = -834790821LL;
int64_t x222 = INT64_MAX;
volatile int32_t x225 = 1787094;
static volatile int64_t x230 = INT64_MIN;
int16_t x231 = INT16_MIN;
int16_t x232 = -1;
volatile int32_t t54 = -3;
volatile uint16_t x234 = 19447U;
volatile int32_t t56 = 14054704;
int64_t t57 = 599453807998LL;
volatile uint32_t x245 = UINT32_MAX;
int16_t x251 = 1714;
static int16_t x252 = -1;
static int16_t x254 = INT16_MAX;
static int32_t t63 = 30;
static int16_t x277 = INT16_MIN;
int8_t x279 = INT8_MAX;
int16_t x282 = INT16_MIN;
volatile int32_t t68 = -88;
static int8_t x297 = 7;
static volatile int32_t x299 = -7;
int8_t x300 = INT8_MAX;
uint16_t x303 = 11U;
volatile int64_t x307 = -1713275599611484458LL;
volatile int64_t x308 = INT64_MIN;
volatile int16_t x318 = -1;
static int32_t x324 = INT32_MIN;
int32_t x326 = INT32_MAX;
uint32_t x339 = 475U;
static int32_t t80 = -549701;
uint32_t x351 = UINT32_MAX;
int16_t x359 = -1;
int16_t x369 = INT16_MIN;
static int16_t x370 = -11;
int64_t t88 = 306LL;
int16_t x381 = 1;
volatile uint64_t x383 = UINT64_MAX;
int16_t x386 = INT16_MAX;
int64_t x388 = INT64_MAX;
uint16_t x393 = 186U;
volatile uint32_t t93 = 75U;
uint64_t x405 = 417323184772LLU;
uint32_t x407 = UINT32_MAX;
static int8_t x409 = 6;
static uint64_t x417 = 1718065128LLU;
volatile uint8_t x419 = UINT8_MAX;
static volatile int8_t x423 = INT8_MAX;
int32_t t99 = 64405;


void f0(void) {
	int64_t x1 = 256702626463LL;
	uint64_t x2 = 8440908511LLU;
	int8_t x3 = INT8_MIN;
	static int64_t x4 = -1LL;
	static volatile int64_t t0 = -41033LL;

	t0 = (((x1==x2)/x3)+x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 1506861059984087584LLU;
	uint32_t x11 = 87778U;
	static volatile int64_t x12 = INT64_MAX;
	static volatile int64_t t1 = INT64_MAX;

	t1 = (((x9==x10)/x11)+x12);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	static int32_t x14 = INT32_MIN;
	int64_t x15 = INT64_MIN;
	static int32_t x16 = INT32_MIN;
	static int64_t t2 = -2482060264826LL;

	t2 = (((x13==x14)/x15)+x16);

	if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	int64_t x18 = -141361264606168647LL;
	uint64_t x19 = 406348157000099LLU;
	int8_t x20 = -1;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (((x17==x18)/x19)+x20);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = INT64_MIN;
	uint8_t x23 = 86U;
	int32_t x24 = -1;
	volatile int32_t t4 = -12;

	t4 = (((x21==x22)/x23)+x24);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	int16_t x26 = INT16_MIN;
	volatile int32_t x27 = INT32_MAX;
	volatile int32_t t5 = 404757793;

	t5 = (((x25==x26)/x27)+x28);

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = -1;
	int32_t x30 = -1;
	int64_t x31 = -1LL;
	static uint16_t x32 = 0U;
	volatile int64_t t6 = -7LL;

	t6 = (((x29==x30)/x31)+x32);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	volatile int8_t x34 = 1;
	static int8_t x36 = -41;
	volatile int32_t t7 = -16744080;

	t7 = (((x33==x34)/x35)+x36);

	if (t7 != -41) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x37 = 3U;
	int32_t x38 = INT32_MIN;
	int32_t x39 = INT32_MAX;
	uint8_t x40 = 54U;
	int32_t t8 = -35660102;

	t8 = (((x37==x38)/x39)+x40);

	if (t8 != 54) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = INT16_MIN;
	uint16_t x43 = UINT16_MAX;
	uint8_t x44 = 27U;
	volatile int32_t t9 = -19107;

	t9 = (((x41==x42)/x43)+x44);

	if (t9 != 27) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = 142866100;
	uint64_t x47 = 731LLU;
	int32_t x48 = INT32_MAX;
	static uint64_t t10 = 928830383200LLU;

	t10 = (((x45==x46)/x47)+x48);

	if (t10 != 2147483647LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	volatile int64_t x51 = INT64_MIN;
	int64_t t11 = 66147754535LL;

	t11 = (((x49==x50)/x51)+x52);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x61 = 88933LLU;
	uint32_t x63 = 210558187U;
	volatile int32_t x64 = INT32_MIN;
	uint32_t t12 = 100258109U;

	t12 = (((x61==x62)/x63)+x64);

	if (t12 != 2147483648U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x66 = 0;
	int64_t x67 = -1LL;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (((x65==x66)/x67)+x68);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x70 = 23U;
	int64_t x71 = 24191223511662677LL;
	int64_t t14 = 102680631LL;

	t14 = (((x69==x70)/x71)+x72);

	if (t14 != 65535LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -1;
	int16_t x74 = INT16_MIN;
	static int16_t x75 = INT16_MIN;
	int16_t x76 = INT16_MIN;

	t15 = (((x73==x74)/x75)+x76);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = -1;
	int32_t x78 = -1;
	uint16_t x79 = 14548U;
	int16_t x80 = INT16_MAX;
	int32_t t16 = 2;

	t16 = (((x77==x78)/x79)+x80);

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x81 = INT16_MIN;
	uint16_t x82 = 2U;
	int64_t x83 = 1060551014880LL;
	volatile int16_t x84 = -1;
	static volatile int64_t t17 = 39207243757957LL;

	t17 = (((x81==x82)/x83)+x84);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = 19717303868382LL;
	static uint64_t x87 = 16722LLU;
	volatile uint64_t t18 = 34481463LLU;

	t18 = (((x85==x86)/x87)+x88);

	if (t18 != 29954824LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = -27;
	int64_t x91 = INT64_MIN;
	int8_t x92 = 1;

	t19 = (((x89==x90)/x91)+x92);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = 4;
	static int16_t x94 = 1318;
	int16_t x95 = INT16_MAX;
	int64_t x96 = 1LL;
	int64_t t20 = 102084886LL;

	t20 = (((x93==x94)/x95)+x96);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 67U;
	volatile int16_t x98 = INT16_MAX;
	uint64_t x100 = 3401925029LLU;
	volatile uint64_t t21 = 135722085161270884LLU;

	t21 = (((x97==x98)/x99)+x100);

	if (t21 != 3401925029LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x102 = -67017948;

	t22 = (((x101==x102)/x103)+x104);

	if (t22 != 4294967168U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -1;
	uint16_t x106 = UINT16_MAX;
	static int8_t x108 = INT8_MAX;
	static volatile int32_t t23 = -3;

	t23 = (((x105==x106)/x107)+x108);

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x111 = UINT8_MAX;
	int16_t x112 = INT16_MIN;

	t24 = (((x109==x110)/x111)+x112);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 195LLU;
	int64_t x116 = -481396872LL;

	t25 = (((x113==x114)/x115)+x116);

	if (t25 != -481396872LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x118 = 1;
	int16_t x119 = 2;
	volatile int32_t t26 = -290461;

	t26 = (((x117==x118)/x119)+x120);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MAX;
	uint64_t x122 = 29LLU;
	volatile uint16_t x124 = 524U;
	static volatile int64_t t27 = -31LL;

	t27 = (((x121==x122)/x123)+x124);

	if (t27 != 524LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x126 = -1;
	int32_t x127 = -1;
	static uint64_t x128 = 1408212887980133845LLU;

	t28 = (((x125==x126)/x127)+x128);

	if (t28 != 1408212887980133844LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x129 = -95;
	int8_t x130 = -1;
	volatile int8_t x131 = INT8_MAX;
	int32_t x132 = -11;
	int32_t t29 = -77555;

	t29 = (((x129==x130)/x131)+x132);

	if (t29 != -11) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x133 = -3161531743061310756LL;
	int64_t x134 = -1LL;
	static int16_t x136 = INT16_MIN;
	static volatile int32_t t30 = 2694;

	t30 = (((x133==x134)/x135)+x136);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 1234U;
	volatile uint64_t x138 = 21352LLU;
	volatile int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	volatile int32_t t31 = INT32_MIN;

	t31 = (((x137==x138)/x139)+x140);

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = 1;
	int64_t x142 = 2690122LL;
	volatile uint8_t x143 = 15U;
	int32_t x144 = -4580;
	volatile int32_t t32 = 29;

	t32 = (((x141==x142)/x143)+x144);

	if (t32 != -4580) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 27418U;
	int64_t x147 = 1796LL;
	volatile int32_t x148 = -1;
	int64_t t33 = -7895646558296LL;

	t33 = (((x145==x146)/x147)+x148);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x149 = 1;
	volatile int32_t t34 = -393;

	t34 = (((x149==x150)/x151)+x152);

	if (t34 != 5265) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = INT32_MAX;
	static uint16_t x154 = 625U;
	volatile uint64_t x155 = 1096035349850LLU;
	int32_t x156 = -1;
	uint64_t t35 = UINT64_MAX;

	t35 = (((x153==x154)/x155)+x156);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MAX;
	volatile int32_t x158 = -72898;
	uint16_t x159 = UINT16_MAX;
	static int16_t x160 = INT16_MIN;
	volatile int32_t t36 = -61518;

	t36 = (((x157==x158)/x159)+x160);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	static uint8_t x162 = 41U;
	static uint64_t x163 = 3702132LLU;
	int16_t x164 = INT16_MIN;
	uint64_t t37 = 42663267570435332LLU;

	t37 = (((x161==x162)/x163)+x164);

	if (t37 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x165 = 14U;
	uint32_t x166 = 18U;
	static int32_t x168 = -1;
	static volatile int32_t t38 = 49;

	t38 = (((x165==x166)/x167)+x168);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	static uint16_t x171 = 154U;
	int32_t x172 = -31942462;
	volatile int32_t t39 = 1;

	t39 = (((x169==x170)/x171)+x172);

	if (t39 != -31942462) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x174 = INT64_MIN;
	static volatile int64_t x176 = INT64_MAX;
	static volatile int64_t t40 = INT64_MAX;

	t40 = (((x173==x174)/x175)+x176);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x177 = -1;
	uint64_t x178 = 307LLU;
	int16_t x179 = INT16_MIN;
	static uint8_t x180 = 1U;
	volatile int32_t t41 = -88;

	t41 = (((x177==x178)/x179)+x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = 1LL;
	volatile uint16_t x182 = UINT16_MAX;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t42 = 3907;

	t42 = (((x181==x182)/x183)+x184);

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = -1LL;
	uint16_t x187 = 566U;
	static volatile int32_t t43 = -258094396;

	t43 = (((x185==x186)/x187)+x188);

	if (t43 != -42) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = -1;
	int8_t x190 = 1;
	uint8_t x191 = UINT8_MAX;
	int32_t t44 = INT32_MIN;

	t44 = (((x189==x190)/x191)+x192);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x193 = 116022U;
	int16_t x194 = -1;
	volatile int32_t t45 = 8;

	t45 = (((x193==x194)/x195)+x196);

	if (t45 != 17) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = -138561719LL;
	static int8_t x198 = INT8_MAX;
	int32_t x200 = 353;
	volatile int32_t t46 = -75792760;

	t46 = (((x197==x198)/x199)+x200);

	if (t46 != 353) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = 16544U;
	int8_t x202 = -1;
	volatile uint16_t x203 = 7U;
	int8_t x204 = 1;

	t47 = (((x201==x202)/x203)+x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x205 = 1U;
	int32_t x206 = INT32_MIN;
	int64_t x208 = 70LL;
	static volatile int64_t t48 = 1456266LL;

	t48 = (((x205==x206)/x207)+x208);

	if (t48 != 70LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x209 = 1002051310426193LLU;
	volatile uint16_t x210 = 189U;
	int8_t x211 = INT8_MAX;
	int64_t x212 = 877622138256LL;
	volatile int64_t t49 = 143721953116783LL;

	t49 = (((x209==x210)/x211)+x212);

	if (t49 != 877622138256LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = -1;
	uint16_t x214 = 1U;
	int64_t x215 = INT64_MAX;
	int32_t x216 = -1;

	t50 = (((x213==x214)/x215)+x216);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = 3LLU;
	static uint16_t x218 = UINT16_MAX;
	static int64_t x219 = INT64_MIN;
	int16_t x220 = 12;
	int64_t t51 = -22311920117911LL;

	t51 = (((x217==x218)/x219)+x220);

	if (t51 != 12LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x221 = 14;
	volatile int32_t x223 = INT32_MIN;
	volatile int8_t x224 = 21;
	volatile int32_t t52 = 166;

	t52 = (((x221==x222)/x223)+x224);

	if (t52 != 21) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x226 = -47;
	int32_t x227 = INT32_MIN;
	volatile uint64_t x228 = 2LLU;
	volatile uint64_t t53 = 582LLU;

	t53 = (((x225==x226)/x227)+x228);

	if (t53 != 2LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = UINT8_MAX;

	t54 = (((x229==x230)/x231)+x232);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x233 = 143621668U;
	uint16_t x235 = 109U;
	uint64_t x236 = 28LLU;
	uint64_t t55 = 69019LLU;

	t55 = (((x233==x234)/x235)+x236);

	if (t55 != 28LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MIN;
	int8_t x238 = 59;
	volatile int32_t x239 = -1;
	static int8_t x240 = INT8_MIN;

	t56 = (((x237==x238)/x239)+x240);

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x241 = -428836803;
	int16_t x242 = -7303;
	uint16_t x243 = 1U;
	int64_t x244 = 15LL;

	t57 = (((x241==x242)/x243)+x244);

	if (t57 != 15LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x246 = 686U;
	int32_t x247 = INT32_MIN;
	static int16_t x248 = INT16_MIN;
	volatile int32_t t58 = 1;

	t58 = (((x245==x246)/x247)+x248);

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x249 = -1;
	uint16_t x250 = UINT16_MAX;
	int32_t t59 = 0;

	t59 = (((x249==x250)/x251)+x252);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = -1;
	int16_t x255 = -13;
	int64_t x256 = INT64_MIN;
	int64_t t60 = INT64_MIN;

	t60 = (((x253==x254)/x255)+x256);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	int32_t x258 = -1;
	static uint64_t x259 = 14LLU;
	int64_t x260 = -1LL;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (((x257==x258)/x259)+x260);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = INT8_MIN;
	uint16_t x262 = 7937U;
	uint64_t x263 = 302984377871220LLU;
	int64_t x264 = -1673LL;
	uint64_t t62 = 223325941651588033LLU;

	t62 = (((x261==x262)/x263)+x264);

	if (t62 != 18446744073709549943LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x265 = -44;
	int32_t x266 = INT32_MAX;
	volatile int8_t x267 = INT8_MAX;
	int8_t x268 = INT8_MIN;

	t63 = (((x265==x266)/x267)+x268);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = 37U;
	static int32_t x270 = -1;
	uint32_t x271 = 8066U;
	uint32_t x272 = UINT32_MAX;
	uint32_t t64 = UINT32_MAX;

	t64 = (((x269==x270)/x271)+x272);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MIN;
	static uint8_t x274 = 107U;
	uint16_t x275 = 105U;
	static int16_t x276 = INT16_MIN;
	int32_t t65 = -3343426;

	t65 = (((x273==x274)/x275)+x276);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x278 = -1;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t66 = -1743;

	t66 = (((x277==x278)/x279)+x280);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = -1;
	uint8_t x283 = UINT8_MAX;
	static int8_t x284 = 36;
	volatile int32_t t67 = -382436;

	t67 = (((x281==x282)/x283)+x284);

	if (t67 != 36) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = -1;
	uint16_t x287 = 14U;
	static volatile int16_t x288 = INT16_MIN;

	t68 = (((x285==x286)/x287)+x288);

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x289 = 3U;
	uint16_t x290 = UINT16_MAX;
	static int64_t x291 = -1LL;
	uint32_t x292 = 82U;
	int64_t t69 = 0LL;

	t69 = (((x289==x290)/x291)+x292);

	if (t69 != 82LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x293 = 1785536281550LLU;
	int32_t x294 = 21;
	uint64_t x295 = UINT64_MAX;
	uint16_t x296 = 302U;
	volatile uint64_t t70 = 2161963263214LLU;

	t70 = (((x293==x294)/x295)+x296);

	if (t70 != 302LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x298 = INT16_MIN;
	static volatile int32_t t71 = -255943141;

	t71 = (((x297==x298)/x299)+x300);

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x301 = 0U;
	int8_t x302 = 0;
	static int8_t x304 = -1;
	int32_t t72 = 2;

	t72 = (((x301==x302)/x303)+x304);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x305 = INT32_MAX;
	int32_t x306 = -1;
	int64_t t73 = INT64_MIN;

	t73 = (((x305==x306)/x307)+x308);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x309 = INT32_MIN;
	volatile uint8_t x310 = UINT8_MAX;
	volatile int16_t x311 = 759;
	int64_t x312 = INT64_MIN;
	int64_t t74 = INT64_MIN;

	t74 = (((x309==x310)/x311)+x312);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = INT64_MIN;
	static volatile uint16_t x319 = 763U;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (((x317==x318)/x319)+x320);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = -1;
	static uint16_t x322 = 61U;
	int32_t x323 = INT32_MAX;
	int32_t t76 = INT32_MIN;

	t76 = (((x321==x322)/x323)+x324);

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = -15;
	int8_t x327 = -1;
	int32_t x328 = 130337950;
	volatile int32_t t77 = 2;

	t77 = (((x325==x326)/x327)+x328);

	if (t77 != 130337950) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x329 = 2U;
	uint8_t x330 = UINT8_MAX;
	uint16_t x331 = 469U;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t78 = -1475;

	t78 = (((x329==x330)/x331)+x332);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x337 = INT16_MIN;
	uint8_t x338 = UINT8_MAX;
	int32_t x340 = INT32_MIN;
	volatile uint32_t t79 = 9319U;

	t79 = (((x337==x338)/x339)+x340);

	if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = 2;
	uint32_t x342 = 6763U;
	int8_t x343 = INT8_MIN;
	uint16_t x344 = UINT16_MAX;

	t80 = (((x341==x342)/x343)+x344);

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = -1;
	uint16_t x346 = UINT16_MAX;
	volatile uint64_t x347 = 40LLU;
	static int16_t x348 = INT16_MIN;
	uint64_t t81 = 2002031742LLU;

	t81 = (((x345==x346)/x347)+x348);

	if (t81 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = INT32_MAX;
	uint8_t x350 = UINT8_MAX;
	uint64_t x352 = 408751431294935763LLU;
	volatile uint64_t t82 = 874906LLU;

	t82 = (((x349==x350)/x351)+x352);

	if (t82 != 408751431294935763LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x357 = -466137;
	volatile int8_t x358 = INT8_MAX;
	uint32_t x360 = UINT32_MAX;
	static volatile uint32_t t83 = UINT32_MAX;

	t83 = (((x357==x358)/x359)+x360);

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x361 = INT8_MAX;
	int32_t x362 = INT32_MIN;
	int64_t x363 = INT64_MIN;
	volatile uint16_t x364 = 4721U;
	int64_t t84 = -1357514458662115LL;

	t84 = (((x361==x362)/x363)+x364);

	if (t84 != 4721LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x365 = INT32_MIN;
	static int64_t x366 = -1LL;
	uint16_t x367 = UINT16_MAX;
	int32_t x368 = -3837064;
	volatile int32_t t85 = 0;

	t85 = (((x365==x366)/x367)+x368);

	if (t85 != -3837064) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x371 = 467U;
	int16_t x372 = INT16_MIN;
	int32_t t86 = 395418;

	t86 = (((x369==x370)/x371)+x372);

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x373 = INT8_MIN;
	static uint16_t x374 = 3U;
	uint64_t x375 = UINT64_MAX;
	volatile uint64_t x376 = 7711832420308954492LLU;
	volatile uint64_t t87 = 60403822265LLU;

	t87 = (((x373==x374)/x375)+x376);

	if (t87 != 7711832420308954492LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x377 = INT32_MIN;
	int8_t x378 = -1;
	volatile uint8_t x379 = 14U;
	int64_t x380 = -21387156707LL;

	t88 = (((x377==x378)/x379)+x380);

	if (t88 != -21387156707LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x382 = 4;
	int16_t x384 = INT16_MIN;
	uint64_t t89 = 30021066120771077LLU;

	t89 = (((x381==x382)/x383)+x384);

	if (t89 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x385 = INT64_MAX;
	volatile uint64_t x387 = UINT64_MAX;
	static volatile uint64_t t90 = 13847101350LLU;

	t90 = (((x385==x386)/x387)+x388);

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = -394;
	int64_t x391 = INT64_MIN;
	int64_t x392 = -1694051058LL;
	int64_t t91 = 16556099736LL;

	t91 = (((x389==x390)/x391)+x392);

	if (t91 != -1694051058LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x394 = 176922677U;
	static volatile int32_t x395 = -1;
	int8_t x396 = INT8_MAX;
	int32_t t92 = 1;

	t92 = (((x393==x394)/x395)+x396);

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x397 = 158675417060112LLU;
	uint32_t x398 = UINT32_MAX;
	uint32_t x399 = UINT32_MAX;
	int32_t x400 = INT32_MAX;

	t93 = (((x397==x398)/x399)+x400);

	if (t93 != 2147483647U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x401 = INT16_MIN;
	uint64_t x402 = 85437350588402LLU;
	volatile int32_t x403 = -1;
	int32_t x404 = INT32_MIN;
	int32_t t94 = INT32_MIN;

	t94 = (((x401==x402)/x403)+x404);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x406 = UINT16_MAX;
	static volatile int16_t x408 = -41;
	volatile uint32_t t95 = 2358757U;

	t95 = (((x405==x406)/x407)+x408);

	if (t95 != 4294967255U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x410 = 373;
	volatile uint16_t x411 = 13820U;
	int16_t x412 = -1;
	static volatile int32_t t96 = 6684;

	t96 = (((x409==x410)/x411)+x412);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x413 = 0U;
	uint32_t x414 = 16U;
	int16_t x415 = -2891;
	int64_t x416 = 0LL;
	volatile int64_t t97 = 12502376435202LL;

	t97 = (((x413==x414)/x415)+x416);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x418 = INT16_MAX;
	int32_t x420 = INT32_MIN;
	volatile int32_t t98 = INT32_MIN;

	t98 = (((x417==x418)/x419)+x420);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x421 = INT64_MAX;
	int64_t x422 = INT64_MIN;
	static uint8_t x424 = 3U;

	t99 = (((x421==x422)/x423)+x424);

	if (t99 != 3) { NG(); } else { ; }
	
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

