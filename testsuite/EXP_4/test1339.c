#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 482348543;
int16_t x7 = INT16_MAX;
int16_t x17 = -1;
int8_t x19 = -1;
uint16_t x21 = UINT16_MAX;
static int16_t x25 = -15;
int8_t x27 = 0;
volatile uint16_t x35 = UINT16_MAX;
int16_t x36 = INT16_MIN;
volatile int8_t x39 = -4;
volatile uint32_t x40 = 5550026U;
uint16_t x41 = 78U;
static int64_t x42 = INT64_MIN;
uint32_t x43 = 31440764U;
int16_t x48 = INT16_MIN;
int8_t x50 = INT8_MIN;
int16_t x57 = 90;
uint32_t x59 = UINT32_MAX;
int16_t x61 = INT16_MAX;
uint64_t x62 = 1LLU;
volatile uint64_t t15 = 160595LLU;
int16_t x66 = INT16_MIN;
static uint8_t x67 = 68U;
int64_t t16 = -3557645782047058LL;
static int16_t x75 = INT16_MIN;
uint16_t x79 = 134U;
static int32_t t19 = 5;
int8_t x82 = 11;
int64_t x94 = -287961LL;
volatile uint64_t x95 = 135074797719751833LLU;
int8_t x97 = -1;
volatile int16_t x100 = INT16_MIN;
uint32_t x101 = UINT32_MAX;
int8_t x111 = -1;
volatile int64_t t27 = 3408485778120740LL;
static int32_t x117 = 423;
static uint8_t x128 = UINT8_MAX;
static int8_t x129 = 1;
int16_t x135 = INT16_MAX;
int16_t x137 = INT16_MIN;
static int32_t x140 = 105;
static uint32_t x142 = UINT32_MAX;
static int16_t x148 = INT16_MAX;
uint8_t x152 = UINT8_MAX;
volatile uint32_t x155 = 3U;
volatile int32_t x157 = INT32_MAX;
int16_t x158 = -2281;
int8_t x159 = 22;
uint32_t x164 = 3199525U;
int64_t x166 = INT64_MIN;
volatile uint32_t t42 = 836792U;
int16_t x178 = -1;
uint8_t x180 = 7U;
int64_t x185 = INT64_MAX;
volatile int16_t x186 = INT16_MAX;
volatile int64_t t46 = -474564214490LL;
uint8_t x190 = 3U;
static int8_t x192 = -1;
uint64_t t48 = 239463923826LLU;
uint32_t x197 = UINT32_MAX;
static volatile uint32_t t49 = 28716031U;
int16_t x204 = -16;
static int16_t x210 = 5;
int8_t x212 = INT8_MIN;
int64_t t52 = 679633LL;
volatile int8_t x217 = -1;
int16_t x219 = -1;
int64_t x222 = INT64_MIN;
static int64_t x223 = -1LL;
uint16_t x224 = 31U;
volatile int64_t x234 = INT64_MIN;
uint32_t x242 = UINT32_MAX;
int64_t x246 = INT64_MIN;
int32_t t62 = 444295;
static volatile int16_t x253 = INT16_MIN;
int8_t x254 = -9;
int16_t x259 = INT16_MIN;
int32_t x262 = INT32_MAX;
volatile int32_t x264 = -157805;
int64_t t65 = -42966LL;
static volatile uint8_t x266 = UINT8_MAX;
uint32_t x272 = 11U;
uint8_t x280 = UINT8_MAX;
volatile int32_t t69 = -38125948;
uint16_t x283 = 164U;
static int32_t x287 = INT32_MIN;
static volatile int32_t t71 = 0;
volatile int32_t x289 = 2;
int32_t x295 = -1;
int8_t x296 = INT8_MAX;
int8_t x297 = INT8_MAX;
int8_t x299 = -1;
int8_t x304 = INT8_MIN;
int8_t x311 = 31;
static uint32_t x313 = 149U;
volatile int32_t x319 = -1;
int8_t x321 = -1;
int16_t x324 = INT16_MIN;
uint32_t x328 = 5358194U;
volatile uint16_t x332 = 14873U;
static volatile uint64_t t82 = 5LLU;
int32_t x337 = INT32_MIN;
uint8_t x339 = 3U;
int8_t x348 = INT8_MIN;
static volatile int32_t t88 = 6997308;
static int64_t x358 = INT64_MAX;
static volatile int8_t x362 = INT8_MAX;
uint64_t t90 = 6604817241216168LLU;
static int8_t x367 = INT8_MIN;
static int8_t x370 = 0;
uint64_t x381 = 2LLU;
static int32_t x383 = -1;
static int64_t x384 = INT64_MIN;
uint64_t t95 = 136260814454LLU;
int16_t x388 = INT16_MIN;
uint64_t x394 = UINT64_MAX;
volatile uint64_t t98 = 1818986495553026LLU;


void f0(void) {
	uint8_t x1 = 0U;
	int8_t x2 = 53;
	static int64_t x3 = 82583707671LL;
	int32_t x4 = -4133572;

	t0 = (x1^(x2|(x3==x4)));

	if (t0 != 53) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 7064;
	volatile uint64_t x6 = 60LLU;
	uint8_t x8 = 5U;
	static uint64_t t1 = 4161418505LLU;

	t1 = (x5^(x6|(x7==x8)));

	if (t1 != 7076LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MAX;
	volatile int8_t x10 = INT8_MIN;
	uint32_t x11 = 1U;
	int64_t x12 = 16170LL;
	int32_t t2 = 58;

	t2 = (x9^(x10|(x11==x12)));

	if (t2 != -2147483521) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 12274U;
	volatile int32_t x14 = INT32_MAX;
	volatile int8_t x15 = INT8_MIN;
	int64_t x16 = INT64_MAX;
	static int32_t t3 = -11618;

	t3 = (x13^(x14|(x15==x16)));

	if (t3 != 2147471373) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	uint32_t x20 = 14363U;
	int32_t t4 = INT32_MAX;

	t4 = (x17^(x18|(x19==x20)));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MAX;
	volatile uint64_t x23 = 242658441652914153LLU;
	int8_t x24 = -1;
	volatile int32_t t5 = 391;

	t5 = (x21^(x22|(x23==x24)));

	if (t5 != 65408) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	static uint8_t x28 = 25U;
	uint32_t t6 = 938618U;

	t6 = (x25^(x26|(x27==x28)));

	if (t6 != 14U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	uint16_t x30 = UINT16_MAX;
	uint8_t x31 = 1U;
	int64_t x32 = 501800837448LL;
	volatile int64_t t7 = 1576472520840052LL;

	t7 = (x29^(x30|(x31==x32)));

	if (t7 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = UINT32_MAX;
	volatile int8_t x34 = INT8_MIN;
	uint32_t t8 = 4141145U;

	t8 = (x33^(x34|(x35==x36)));

	if (t8 != 127U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 2310276661217409LLU;
	volatile int8_t x38 = 54;
	volatile uint64_t t9 = 4066LLU;

	t9 = (x37^(x38|(x39==x40)));

	if (t9 != 2310276661217463LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x44 = INT64_MAX;
	volatile int64_t t10 = -70LL;

	t10 = (x41^(x42|(x43==x44)));

	if (t10 != -9223372036854775730LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x45 = INT64_MAX;
	int8_t x46 = INT8_MAX;
	int8_t x47 = -1;
	volatile int64_t t11 = -302446969669825862LL;

	t11 = (x45^(x46|(x47==x48)));

	if (t11 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -2652;
	uint8_t x51 = 15U;
	int8_t x52 = INT8_MIN;
	int32_t t12 = 1425577;

	t12 = (x49^(x50|(x51==x52)));

	if (t12 != 2596) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 998207294958901LLU;
	volatile int16_t x54 = 814;
	int64_t x55 = -18639346337360880LL;
	uint32_t x56 = UINT32_MAX;
	volatile uint64_t t13 = 5951523LLU;

	t13 = (x53^(x54|(x55==x56)));

	if (t13 != 998207294959131LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	static volatile uint64_t x60 = UINT64_MAX;
	volatile int64_t t14 = 17LL;

	t14 = (x57^(x58|(x59==x60)));

	if (t14 != -9223372036854775718LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x63 = UINT8_MAX;
	uint16_t x64 = UINT16_MAX;

	t15 = (x61^(x62|(x63==x64)));

	if (t15 != 32766LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 11100889059057462LL;
	uint16_t x68 = 2U;

	t16 = (x65^(x66|(x67==x68)));

	if (t16 != -11100889059041482LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	static volatile uint64_t x70 = 1723111157671633LLU;
	volatile int32_t x71 = -442439;
	int32_t x72 = 13010;
	uint64_t t17 = 3130732566906875LLU;

	t17 = (x69^(x70|(x71==x72)));

	if (t17 != 9221648925697104174LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -14;
	volatile uint8_t x74 = 8U;
	uint8_t x76 = 17U;
	volatile int32_t t18 = 41623;

	t18 = (x73^(x74|(x75==x76)));

	if (t18 != -6) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 12024U;
	uint8_t x78 = 0U;
	static uint16_t x80 = UINT16_MAX;

	t19 = (x77^(x78|(x79==x80)));

	if (t19 != 12024) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	static int32_t x83 = INT32_MIN;
	volatile uint64_t x84 = 4LLU;
	int64_t t20 = -4435849LL;

	t20 = (x81^(x82|(x83==x84)));

	if (t20 != -12LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 18021U;
	static uint8_t x86 = 15U;
	static int16_t x87 = -1;
	volatile int16_t x88 = -1;
	volatile uint32_t t21 = 559845U;

	t21 = (x85^(x86|(x87==x88)));

	if (t21 != 18026U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 0U;
	static volatile int8_t x90 = -1;
	static uint64_t x91 = 60841LLU;
	int64_t x92 = INT64_MIN;
	static int32_t t22 = 99162;

	t22 = (x89^(x90|(x91==x92)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint8_t x96 = 12U;
	volatile int64_t t23 = 17536445885LL;

	t23 = (x93^(x94|(x95==x96)));

	if (t23 != 269095LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = UINT32_MAX;
	uint64_t x99 = 715397772933705179LLU;
	uint32_t t24 = 1830U;

	t24 = (x97^(x98|(x99==x100)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	uint32_t x104 = 939354U;
	uint32_t t25 = 1857U;

	t25 = (x101^(x102|(x103==x104)));

	if (t25 != 127U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	static uint32_t x106 = UINT32_MAX;
	volatile int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MIN;
	volatile int64_t t26 = 262861364LL;

	t26 = (x105^(x106|(x107==x108)));

	if (t26 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 43U;
	volatile int64_t x110 = 6479LL;
	uint8_t x112 = UINT8_MAX;

	t27 = (x109^(x110|(x111==x112)));

	if (t27 != 6500LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = -33;
	static int16_t x115 = INT16_MAX;
	int8_t x116 = -3;
	int32_t t28 = -492218;

	t28 = (x113^(x114|(x115==x116)));

	if (t28 != 2147483615) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = -1;
	static uint8_t x119 = 22U;
	uint64_t x120 = UINT64_MAX;
	volatile int32_t t29 = 24020044;

	t29 = (x117^(x118|(x119==x120)));

	if (t29 != -424) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 19454455482745LLU;
	volatile int8_t x122 = INT8_MAX;
	uint64_t x123 = 3787149224800383LLU;
	int32_t x124 = 14913854;
	uint64_t t30 = 992508277248982LLU;

	t30 = (x121^(x122|(x123==x124)));

	if (t30 != 19454455482630LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int16_t x126 = INT16_MIN;
	uint64_t x127 = 10539757136285LLU;
	static volatile int32_t t31 = 706482;

	t31 = (x125^(x126|(x127==x128)));

	if (t31 != 2147450880) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = UINT64_MAX;
	int64_t x131 = INT64_MAX;
	static volatile uint16_t x132 = 11U;
	uint64_t t32 = 3LLU;

	t32 = (x129^(x130|(x131==x132)));

	if (t32 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 8472U;
	uint8_t x134 = 62U;
	volatile int8_t x136 = INT8_MAX;
	static int32_t t33 = -7208930;

	t33 = (x133^(x134|(x135==x136)));

	if (t33 != 8486) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x138 = 4418U;
	static int32_t x139 = 5659;
	int32_t t34 = 1142;

	t34 = (x137^(x138|(x139==x140)));

	if (t34 != -28350) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MAX;
	volatile int64_t x143 = -1LL;
	int64_t x144 = -1LL;
	volatile uint32_t t35 = 3263562U;

	t35 = (x141^(x142|(x143==x144)));

	if (t35 != 4294934528U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	int64_t x146 = INT64_MIN;
	static int16_t x147 = -1;
	int64_t t36 = -26863LL;

	t36 = (x145^(x146|(x147==x148)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = INT16_MIN;
	static uint16_t x150 = 43U;
	int32_t x151 = INT32_MIN;
	volatile int32_t t37 = -14920883;

	t37 = (x149^(x150|(x151==x152)));

	if (t37 != -32725) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	uint16_t x154 = 32U;
	static int16_t x156 = -1;
	volatile int64_t t38 = 2050404536759785LL;

	t38 = (x153^(x154|(x155==x156)));

	if (t38 != 9223372036854775775LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x160 = 526367400LL;
	volatile int32_t t39 = -25491;

	t39 = (x157^(x158|(x159==x160)));

	if (t39 != -2147481368) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MAX;
	int64_t x163 = -1LL;
	uint64_t t40 = 2683181LLU;

	t40 = (x161^(x162|(x163==x164)));

	if (t40 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 50734519822465LLU;
	volatile int32_t x167 = -2924905;
	int16_t x168 = INT16_MIN;
	uint64_t t41 = 7LLU;

	t41 = (x165^(x166|(x167==x168)));

	if (t41 != 9223422771374598273LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	static uint32_t x170 = 6496824U;
	int8_t x171 = -1;
	uint8_t x172 = UINT8_MAX;

	t42 = (x169^(x170|(x171==x172)));

	if (t42 != 4288470471U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = UINT32_MAX;
	uint64_t x174 = UINT64_MAX;
	int8_t x175 = INT8_MIN;
	int64_t x176 = INT64_MAX;
	uint64_t t43 = 21LLU;

	t43 = (x173^(x174|(x175==x176)));

	if (t43 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = -1;
	volatile uint64_t x179 = 990426989LLU;
	volatile int32_t t44 = -150553991;

	t44 = (x177^(x178|(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	volatile int16_t x182 = INT16_MIN;
	volatile uint16_t x183 = 30640U;
	volatile int64_t x184 = INT64_MIN;
	volatile int32_t t45 = -9;

	t45 = (x181^(x182|(x183==x184)));

	if (t45 != 2147450880) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x187 = -1LL;
	static uint64_t x188 = UINT64_MAX;

	t46 = (x185^(x186|(x187==x188)));

	if (t46 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	int16_t x191 = 723;
	int32_t t47 = 1815;

	t47 = (x189^(x190|(x191==x192)));

	if (t47 != 124) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x193 = 56U;
	static uint64_t x194 = 284537473598536317LLU;
	uint8_t x195 = 4U;
	int16_t x196 = -28;

	t48 = (x193^(x194|(x195==x196)));

	if (t48 != 284537473598536261LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x198 = 2152U;
	static int8_t x199 = INT8_MIN;
	static int8_t x200 = -1;

	t49 = (x197^(x198|(x199==x200)));

	if (t49 != 4294965143U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	uint16_t x202 = UINT16_MAX;
	int32_t x203 = INT32_MIN;
	static volatile int64_t t50 = -3351LL;

	t50 = (x201^(x202|(x203==x204)));

	if (t50 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	int32_t x206 = -1;
	int8_t x207 = -1;
	static int32_t x208 = INT32_MIN;
	volatile uint32_t t51 = 489969U;

	t51 = (x205^(x206|(x207==x208)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	uint8_t x211 = UINT8_MAX;

	t52 = (x209^(x210|(x211==x212)));

	if (t52 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = -55LL;
	int16_t x214 = INT16_MIN;
	int16_t x215 = 25;
	uint16_t x216 = 220U;
	static volatile int64_t t53 = 249976LL;

	t53 = (x213^(x214|(x215==x216)));

	if (t53 != 32713LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = 863573017555LL;
	volatile int32_t x220 = -686444015;
	int64_t t54 = -29LL;

	t54 = (x217^(x218|(x219==x220)));

	if (t54 != -863573017556LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int64_t t55 = -9LL;

	t55 = (x221^(x222|(x223==x224)));

	if (t55 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MAX;
	static volatile int16_t x226 = 0;
	static int16_t x227 = -1;
	static uint16_t x228 = 9622U;
	int32_t t56 = 2208050;

	t56 = (x225^(x226|(x227==x228)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 792U;
	int16_t x230 = 3743;
	int16_t x231 = -1;
	volatile int64_t x232 = INT64_MIN;
	int32_t t57 = 50274073;

	t57 = (x229^(x230|(x231==x232)));

	if (t57 != 3463) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -3;
	int16_t x235 = -1;
	uint8_t x236 = UINT8_MAX;
	volatile int64_t t58 = 4344654069051LL;

	t58 = (x233^(x234|(x235==x236)));

	if (t58 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	volatile int64_t x238 = INT64_MIN;
	int64_t x239 = INT64_MIN;
	volatile uint8_t x240 = 6U;
	int64_t t59 = 254125LL;

	t59 = (x237^(x238|(x239==x240)));

	if (t59 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 1;
	int16_t x243 = -74;
	static int16_t x244 = -1;
	volatile uint32_t t60 = 467U;

	t60 = (x241^(x242|(x243==x244)));

	if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	int32_t x247 = -1;
	static int32_t x248 = INT32_MIN;
	volatile int64_t t61 = 1636LL;

	t61 = (x245^(x246|(x247==x248)));

	if (t61 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -644369;
	int32_t x250 = 986;
	int32_t x251 = INT32_MIN;
	uint32_t x252 = UINT32_MAX;

	t62 = (x249^(x250|(x251==x252)));

	if (t62 != -644811) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x255 = 4737U;
	int32_t x256 = 1651213;
	int32_t t63 = 83;

	t63 = (x253^(x254|(x255==x256)));

	if (t63 != 32759) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -23LL;
	int8_t x258 = -1;
	static int64_t x260 = INT64_MIN;
	int64_t t64 = -2005LL;

	t64 = (x257^(x258|(x259==x260)));

	if (t64 != 22LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 23681259674469LL;
	int16_t x263 = INT16_MIN;

	t65 = (x261^(x262|(x263==x264)));

	if (t65 != 23681492182170LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	static uint32_t x267 = UINT32_MAX;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = 750720;

	t66 = (x265^(x266|(x267==x268)));

	if (t66 != 32512) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 100U;
	int8_t x270 = INT8_MIN;
	volatile uint64_t x271 = 2300987864916455LLU;
	static int32_t t67 = -1161;

	t67 = (x269^(x270|(x271==x272)));

	if (t67 != -28) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x273 = -1LL;
	uint32_t x274 = UINT32_MAX;
	int8_t x275 = INT8_MAX;
	int16_t x276 = -844;
	volatile int64_t t68 = -172LL;

	t68 = (x273^(x274|(x275==x276)));

	if (t68 != -4294967296LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 6U;
	int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MIN;

	t69 = (x277^(x278|(x279==x280)));

	if (t69 != -32762) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = 1LL;
	static uint8_t x282 = UINT8_MAX;
	int16_t x284 = -1;
	volatile int64_t t70 = -9070LL;

	t70 = (x281^(x282|(x283==x284)));

	if (t70 != 254LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = INT16_MIN;
	int32_t x286 = INT32_MAX;
	int32_t x288 = -1;

	t71 = (x285^(x286|(x287==x288)));

	if (t71 != -2147450881) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = 8254318;
	int8_t x291 = INT8_MIN;
	int64_t x292 = 424363790507638883LL;
	volatile int32_t t72 = 483;

	t72 = (x289^(x290|(x291==x292)));

	if (t72 != 8254316) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 6U;
	static int16_t x294 = -1;
	static int32_t t73 = 16250825;

	t73 = (x293^(x294|(x295==x296)));

	if (t73 != -7) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x298 = 111U;
	static volatile int8_t x300 = -1;
	volatile int32_t t74 = -43;

	t74 = (x297^(x298|(x299==x300)));

	if (t74 != 16) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	int16_t x302 = -1;
	int16_t x303 = -1;
	static uint64_t t75 = 4087696462990LLU;

	t75 = (x301^(x302|(x303==x304)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	static volatile int8_t x306 = 0;
	static int16_t x307 = -1;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 6390;

	t76 = (x305^(x306|(x307==x308)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	static uint32_t x310 = 50374U;
	int16_t x312 = -1;
	static uint32_t t77 = 956U;

	t77 = (x309^(x310|(x311==x312)));

	if (t77 != 4294916934U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = -1;
	int8_t x315 = INT8_MAX;
	uint8_t x316 = 0U;
	static uint32_t t78 = 2U;

	t78 = (x313^(x314|(x315==x316)));

	if (t78 != 4294967146U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = 1568531975526770290LL;
	int64_t x318 = 572105LL;
	int32_t x320 = -1;
	static int64_t t79 = -254984839993LL;

	t79 = (x317^(x318|(x319==x320)));

	if (t79 != 1568531975526276283LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x322 = -1;
	volatile uint32_t x323 = UINT32_MAX;
	volatile int32_t t80 = -9;

	t80 = (x321^(x322|(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	static volatile int16_t x326 = -1;
	uint32_t x327 = 14050085U;
	int64_t t81 = INT64_MAX;

	t81 = (x325^(x326|(x327==x328)));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x330 = 32863377117805400LL;
	int16_t x331 = -1;

	t82 = (x329^(x330|(x331==x332)));

	if (t82 != 18413880696591746215LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	int16_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = INT64_MAX;
	int32_t t83 = -24;

	t83 = (x333^(x334|(x335==x336)));

	if (t83 != -256) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = INT64_MIN;
	int32_t x340 = INT32_MAX;
	int64_t t84 = -8405150378151LL;

	t84 = (x337^(x338|(x339==x340)));

	if (t84 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	int16_t x342 = INT16_MIN;
	int32_t x343 = INT32_MAX;
	static int32_t x344 = -1;
	volatile int64_t t85 = 4747720952LL;

	t85 = (x341^(x342|(x343==x344)));

	if (t85 != 32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x345 = INT64_MAX;
	volatile int16_t x346 = INT16_MAX;
	int64_t x347 = -721335103734390244LL;
	static volatile int64_t t86 = 16LL;

	t86 = (x345^(x346|(x347==x348)));

	if (t86 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 306U;
	uint16_t x350 = 438U;
	static volatile uint64_t x351 = 2158247812385LLU;
	uint32_t x352 = 75U;
	int32_t t87 = -64765481;

	t87 = (x349^(x350|(x351==x352)));

	if (t87 != 132) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 1;
	int16_t x354 = INT16_MIN;
	int8_t x355 = -55;
	int8_t x356 = INT8_MAX;

	t88 = (x353^(x354|(x355==x356)));

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 0U;
	uint64_t x359 = UINT64_MAX;
	static int64_t x360 = INT64_MIN;
	int64_t t89 = INT64_MAX;

	t89 = (x357^(x358|(x359==x360)));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x361 = 12861887854436LLU;
	int32_t x363 = INT32_MIN;
	static volatile uint64_t x364 = 8394770LLU;

	t90 = (x361^(x362|(x363==x364)));

	if (t90 != 12861887854363LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	volatile int16_t x366 = 28;
	int32_t x368 = -1;
	volatile int32_t t91 = 1128534;

	t91 = (x365^(x366|(x367==x368)));

	if (t91 != 65507) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 4U;
	int32_t x371 = 5041;
	uint32_t x372 = 50204U;
	static volatile int32_t t92 = 2343548;

	t92 = (x369^(x370|(x371==x372)));

	if (t92 != 4) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x373 = UINT64_MAX;
	int16_t x374 = -1;
	int16_t x375 = -10;
	uint16_t x376 = 54U;
	uint64_t t93 = 232LLU;

	t93 = (x373^(x374|(x375==x376)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	static int32_t x378 = INT32_MIN;
	int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MAX;
	int32_t t94 = -114;

	t94 = (x377^(x378|(x379==x380)));

	if (t94 != -2147483393) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x382 = -1;

	t95 = (x381^(x382|(x383==x384)));

	if (t95 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 73U;
	volatile int32_t x386 = 238;
	int32_t x387 = INT32_MIN;
	volatile int32_t t96 = -128617;

	t96 = (x385^(x386|(x387==x388)));

	if (t96 != 167) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 4895U;
	int8_t x390 = -1;
	uint32_t x391 = 29U;
	int16_t x392 = INT16_MAX;
	uint32_t t97 = 838U;

	t97 = (x389^(x390|(x391==x392)));

	if (t97 != 4294962400U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = UINT32_MAX;
	volatile uint32_t x395 = UINT32_MAX;
	int32_t x396 = -1;

	t98 = (x393^(x394|(x395==x396)));

	if (t98 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = 393U;
	static int8_t x398 = INT8_MAX;
	static uint8_t x399 = UINT8_MAX;
	volatile uint32_t x400 = 45U;
	volatile uint32_t t99 = 2665505U;

	t99 = (x397^(x398|(x399==x400)));

	if (t99 != 502U) { NG(); } else { ; }
	
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

