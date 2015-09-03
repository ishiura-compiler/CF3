#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -56;
int32_t t1 = 30662;
volatile uint16_t x9 = 59U;
uint16_t x10 = UINT16_MAX;
volatile int8_t x11 = 0;
static int32_t x13 = -1;
int32_t x30 = -492978646;
volatile uint64_t x36 = 1369790253105LLU;
uint64_t x38 = 5932LLU;
static volatile int64_t x44 = 406548015174535LL;
static volatile int32_t t13 = 1900;
int8_t x60 = -59;
int64_t x61 = INT64_MAX;
uint32_t x62 = 16U;
volatile int32_t t15 = 4177;
volatile int64_t x71 = INT64_MAX;
int64_t x73 = INT64_MIN;
static uint16_t x75 = UINT16_MAX;
int16_t x77 = INT16_MIN;
uint8_t x83 = 19U;
static int64_t x85 = INT64_MIN;
uint64_t x94 = 2022463256367LLU;
volatile int8_t x96 = 35;
uint32_t x97 = 27448U;
static volatile uint8_t x102 = UINT8_MAX;
volatile uint16_t x106 = 26U;
int32_t x108 = INT32_MIN;
static int8_t x109 = INT8_MIN;
uint64_t x110 = UINT64_MAX;
int32_t x116 = 48344;
int32_t x120 = INT32_MIN;
int32_t x123 = -1;
static int64_t x129 = INT64_MAX;
static int64_t x130 = INT64_MIN;
volatile int8_t x135 = 7;
uint64_t x137 = 15505172LLU;
volatile int32_t t34 = -356;
uint64_t x144 = 1061870754LLU;
int16_t x152 = INT16_MAX;
volatile int32_t x157 = INT32_MIN;
volatile uint64_t x161 = 3LLU;
uint8_t x162 = 83U;
int32_t x167 = INT32_MAX;
int64_t x183 = -877995337117LL;
int32_t x187 = -71260;
volatile int32_t t46 = -45319;
int16_t x190 = -1;
uint8_t x192 = 0U;
uint16_t x194 = 1459U;
volatile int8_t x198 = 0;
volatile int32_t t50 = 106;
int64_t x207 = -1LL;
volatile int32_t t53 = 6708028;
int64_t x217 = -1LL;
int32_t x220 = INT32_MIN;
int64_t x224 = INT64_MIN;
static volatile int32_t t56 = -509768748;
static int64_t x234 = -1LL;
static int32_t x238 = -1;
uint32_t x240 = UINT32_MAX;
uint8_t x247 = UINT8_MAX;
volatile int32_t x252 = INT32_MIN;
volatile int32_t t62 = 1;
int8_t x253 = 0;
volatile int32_t t63 = 6500018;
uint64_t x259 = UINT64_MAX;
uint8_t x266 = 13U;
int32_t t66 = 57;
int16_t x278 = -6;
int64_t x279 = INT64_MAX;
int32_t x283 = INT32_MIN;
int32_t t71 = 56924664;
uint8_t x289 = UINT8_MAX;
int32_t x293 = -1;
static int32_t t73 = -14;
volatile int16_t x300 = INT16_MIN;
int32_t t78 = -2241;
static int64_t x321 = INT64_MIN;
int16_t x324 = -31;
int16_t x327 = INT16_MAX;
int32_t t81 = 741632199;
int16_t x333 = INT16_MIN;
uint64_t x339 = 2358591667017LLU;
int32_t t84 = 1;
volatile int64_t x345 = INT64_MIN;
volatile int32_t t86 = 3165930;
static uint32_t x349 = UINT32_MAX;
volatile uint8_t x352 = 6U;
static int8_t x353 = INT8_MIN;
volatile int32_t t88 = -76548;
volatile int32_t t89 = 5;
int8_t x368 = -1;
static int16_t x372 = INT16_MIN;
int16_t x381 = -1;
static int32_t x382 = -124976;
static int8_t x387 = -1;
int64_t x390 = INT64_MIN;
static volatile int32_t t97 = -2314810;
static uint16_t x393 = UINT16_MAX;
static int8_t x395 = 0;
uint32_t x400 = 324U;


void f0(void) {
	int32_t x2 = INT32_MIN;
	int16_t x3 = INT16_MAX;
	volatile int32_t x4 = INT32_MAX;
	int32_t t0 = -1;

	t0 = ((x1|x2)<=(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int32_t x6 = -1;
	static volatile uint16_t x7 = 47U;
	int32_t x8 = -1;

	t1 = ((x5|x6)<=(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x12 = -1;
	int32_t t2 = -328302;

	t2 = ((x9|x10)<=(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = 3;
	int64_t x15 = INT64_MIN;
	int16_t x16 = INT16_MIN;
	int32_t t3 = -6598;

	t3 = ((x13|x14)<=(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile int32_t x18 = INT32_MIN;
	static volatile int32_t x19 = INT32_MAX;
	uint32_t x20 = UINT32_MAX;
	static int32_t t4 = -19;

	t4 = ((x17|x18)<=(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 1716296LL;
	static int32_t x22 = -1;
	uint64_t x23 = 9147LLU;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -1;

	t5 = ((x21|x22)<=(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MAX;
	uint32_t x26 = 1793228U;
	static int16_t x27 = -1457;
	int64_t x28 = INT64_MAX;
	volatile int32_t t6 = 10;

	t6 = ((x25|x26)<=(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	static int64_t x31 = 414LL;
	volatile int8_t x32 = 8;
	volatile int32_t t7 = 227919;

	t7 = ((x29|x30)<=(x31==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint16_t x34 = 93U;
	static int8_t x35 = INT8_MIN;
	volatile int32_t t8 = -59;

	t8 = ((x33|x34)<=(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -1;
	int8_t x39 = -14;
	uint8_t x40 = 15U;
	int32_t t9 = -51;

	t9 = ((x37|x38)<=(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	uint64_t x42 = 3950922546LLU;
	int8_t x43 = -1;
	volatile int32_t t10 = -1;

	t10 = ((x41|x42)<=(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = 8;
	int64_t x47 = INT64_MIN;
	int8_t x48 = -1;
	int32_t t11 = -1;

	t11 = ((x45|x46)<=(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 246966177641LLU;
	int64_t x50 = INT64_MAX;
	static int16_t x51 = -1362;
	static int64_t x52 = INT64_MIN;
	int32_t t12 = 39341;

	t12 = ((x49|x50)<=(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	uint16_t x54 = 896U;
	int16_t x55 = INT16_MAX;
	uint32_t x56 = UINT32_MAX;

	t13 = ((x53|x54)<=(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -16708194229LL;
	int16_t x58 = -1;
	int64_t x59 = 26097LL;
	int32_t t14 = -17;

	t14 = ((x57|x58)<=(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x63 = 1;
	uint16_t x64 = UINT16_MAX;

	t15 = ((x61|x62)<=(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 7090U;
	static int64_t x66 = 888456379027LL;
	static int16_t x67 = INT16_MIN;
	static int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 4;

	t16 = ((x65|x66)<=(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 17952U;
	int8_t x70 = 3;
	static int64_t x72 = INT64_MIN;
	int32_t t17 = -1;

	t17 = ((x69|x70)<=(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MAX;
	int64_t x76 = INT64_MIN;
	int32_t t18 = 7715;

	t18 = ((x73|x74)<=(x75==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = -1048024267;
	volatile uint8_t x79 = UINT8_MAX;
	static volatile uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = -967199;

	t19 = ((x77|x78)<=(x79==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int32_t x82 = INT32_MAX;
	uint16_t x84 = 856U;
	int32_t t20 = -339079684;

	t20 = ((x81|x82)<=(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x86 = UINT16_MAX;
	volatile int16_t x87 = INT16_MIN;
	int8_t x88 = -1;
	static int32_t t21 = 309421915;

	t21 = ((x85|x86)<=(x87==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int8_t x90 = 3;
	uint16_t x91 = 62U;
	int8_t x92 = 1;
	int32_t t22 = -58;

	t22 = ((x89|x90)<=(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -1;
	volatile int32_t x95 = -1;
	static int32_t t23 = 202689;

	t23 = ((x93|x94)<=(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = 22U;
	static volatile int64_t x99 = INT64_MIN;
	uint32_t x100 = 263417340U;
	volatile int32_t t24 = 3323;

	t24 = ((x97|x98)<=(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	uint8_t x103 = 2U;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t25 = 20;

	t25 = ((x101|x102)<=(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -40LL;
	int64_t x107 = -423437LL;
	int32_t t26 = -41252;

	t26 = ((x105|x106)<=(x107==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x111 = 1;
	uint64_t x112 = 803551446LLU;
	int32_t t27 = -2;

	t27 = ((x109|x110)<=(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x113 = 8U;
	uint32_t x114 = 724339U;
	int16_t x115 = INT16_MAX;
	int32_t t28 = 127440343;

	t28 = ((x113|x114)<=(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = 1;
	volatile uint8_t x118 = UINT8_MAX;
	volatile int8_t x119 = INT8_MIN;
	static int32_t t29 = 8388276;

	t29 = ((x117|x118)<=(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 23U;
	static int16_t x122 = 5;
	int16_t x124 = -16;
	static volatile int32_t t30 = 893822;

	t30 = ((x121|x122)<=(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 0;
	volatile int32_t x126 = INT32_MIN;
	volatile uint16_t x127 = 1U;
	uint8_t x128 = 2U;
	int32_t t31 = -63138673;

	t31 = ((x125|x126)<=(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x131 = -1;
	volatile int32_t x132 = INT32_MIN;
	volatile int32_t t32 = 1538638;

	t32 = ((x129|x130)<=(x131==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 115U;
	static int8_t x134 = 1;
	int64_t x136 = INT64_MAX;
	static volatile int32_t t33 = 147;

	t33 = ((x133|x134)<=(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = 0U;
	static int64_t x139 = INT64_MAX;
	uint32_t x140 = UINT32_MAX;

	t34 = ((x137|x138)<=(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 1;
	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MAX;
	volatile int32_t t35 = 8370276;

	t35 = ((x141|x142)<=(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x145 = INT8_MIN;
	static uint64_t x146 = UINT64_MAX;
	static uint64_t x147 = 355171820294LLU;
	int8_t x148 = -1;
	int32_t t36 = -9384;

	t36 = ((x145|x146)<=(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = -1;
	static int64_t x150 = INT64_MIN;
	uint16_t x151 = UINT16_MAX;
	int32_t t37 = 14400050;

	t37 = ((x149|x150)<=(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 7066LLU;
	uint8_t x154 = 105U;
	static int32_t x155 = -1;
	int32_t x156 = -1;
	int32_t t38 = -5;

	t38 = ((x153|x154)<=(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MIN;
	static volatile int16_t x159 = -1;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -32;

	t39 = ((x157|x158)<=(x159==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x163 = -1;
	uint64_t x164 = 58205LLU;
	int32_t t40 = 423;

	t40 = ((x161|x162)<=(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	int64_t x166 = INT64_MIN;
	int32_t x168 = -200801;
	int32_t t41 = 447609411;

	t41 = ((x165|x166)<=(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = 16670377;
	uint8_t x171 = 0U;
	volatile int64_t x172 = INT64_MIN;
	int32_t t42 = 6181311;

	t42 = ((x169|x170)<=(x171==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	static int8_t x174 = 10;
	int64_t x175 = -36997816258357LL;
	int16_t x176 = -1;
	volatile int32_t t43 = 17264643;

	t43 = ((x173|x174)<=(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MIN;
	int32_t x179 = -1;
	int32_t x180 = 23;
	int32_t t44 = 3;

	t44 = ((x177|x178)<=(x179==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	static int32_t x182 = -7790276;
	int8_t x184 = INT8_MIN;
	static int32_t t45 = 51039204;

	t45 = ((x181|x182)<=(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 0U;
	volatile uint8_t x186 = 3U;
	int16_t x188 = INT16_MIN;

	t46 = ((x185|x186)<=(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	static int16_t x191 = -1;
	static int32_t t47 = -1080597;

	t47 = ((x189|x190)<=(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 412U;
	volatile int64_t x195 = -1LL;
	volatile uint16_t x196 = 5U;
	int32_t t48 = 79037903;

	t48 = ((x193|x194)<=(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	static int32_t x199 = INT32_MIN;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t49 = 683404963;

	t49 = ((x197|x198)<=(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = 68U;
	static int16_t x202 = INT16_MIN;
	static volatile int16_t x203 = INT16_MIN;
	volatile int8_t x204 = INT8_MAX;

	t50 = ((x201|x202)<=(x203==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MAX;
	int16_t x208 = INT16_MIN;
	int32_t t51 = 19105590;

	t51 = ((x205|x206)<=(x207==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MAX;
	uint8_t x211 = UINT8_MAX;
	uint16_t x212 = 741U;
	volatile int32_t t52 = -72756;

	t52 = ((x209|x210)<=(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = 3360058215496189LLU;
	int8_t x214 = INT8_MAX;
	static uint64_t x215 = 1LLU;
	uint16_t x216 = 83U;

	t53 = ((x213|x214)<=(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x218 = INT8_MIN;
	int16_t x219 = -102;
	int32_t t54 = 7956195;

	t54 = ((x217|x218)<=(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x221 = 3;
	static int64_t x222 = INT64_MIN;
	int8_t x223 = -21;
	int32_t t55 = 23990056;

	t55 = ((x221|x222)<=(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = 1;
	uint32_t x226 = UINT32_MAX;
	uint32_t x227 = 54970633U;
	int16_t x228 = INT16_MAX;

	t56 = ((x225|x226)<=(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = -1;
	uint8_t x230 = UINT8_MAX;
	int32_t x231 = INT32_MIN;
	volatile int16_t x232 = INT16_MIN;
	int32_t t57 = 90;

	t57 = ((x229|x230)<=(x231==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	int8_t x235 = INT8_MIN;
	int32_t x236 = -878840835;
	int32_t t58 = -56801191;

	t58 = ((x233|x234)<=(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x237 = 7874156073081LLU;
	int32_t x239 = INT32_MIN;
	static volatile int32_t t59 = 592608645;

	t59 = ((x237|x238)<=(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = 5137912;
	static int8_t x242 = INT8_MAX;
	uint64_t x243 = 18113LLU;
	volatile uint8_t x244 = 12U;
	static volatile int32_t t60 = 15;

	t60 = ((x241|x242)<=(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	static uint8_t x246 = UINT8_MAX;
	int16_t x248 = INT16_MIN;
	int32_t t61 = -504916;

	t61 = ((x245|x246)<=(x247==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x250 = -1LL;
	uint32_t x251 = 0U;

	t62 = ((x249|x250)<=(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = -1;
	static int8_t x255 = -16;
	volatile int8_t x256 = INT8_MAX;

	t63 = ((x253|x254)<=(x255==x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x257 = 6U;
	int32_t x258 = INT32_MAX;
	volatile int8_t x260 = INT8_MAX;
	int32_t t64 = -981;

	t64 = ((x257|x258)<=(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int32_t x262 = 2;
	int16_t x263 = 1;
	int8_t x264 = -1;
	volatile int32_t t65 = -1;

	t65 = ((x261|x262)<=(x263==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 3807LLU;
	int32_t x267 = -1;
	volatile int64_t x268 = -1LL;

	t66 = ((x265|x266)<=(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = -461249911485684LL;
	uint16_t x270 = UINT16_MAX;
	int32_t x271 = -827310;
	int32_t x272 = INT32_MAX;
	static int32_t t67 = 13644267;

	t67 = ((x269|x270)<=(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MIN;
	int64_t x275 = INT64_MAX;
	uint16_t x276 = 2U;
	volatile int32_t t68 = -48302;

	t68 = ((x273|x274)<=(x275==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	uint8_t x280 = 37U;
	volatile int32_t t69 = -28474121;

	t69 = ((x277|x278)<=(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = INT8_MAX;
	static uint64_t x282 = UINT64_MAX;
	uint32_t x284 = 103023U;
	volatile int32_t t70 = 10973834;

	t70 = ((x281|x282)<=(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x285 = INT32_MIN;
	static int32_t x286 = -1;
	static volatile uint16_t x287 = 189U;
	int16_t x288 = -1;

	t71 = ((x285|x286)<=(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = -7181211272LL;
	volatile int64_t x291 = -1LL;
	uint64_t x292 = 3LLU;
	static volatile int32_t t72 = -168;

	t72 = ((x289|x290)<=(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x294 = -1;
	static int64_t x295 = -1LL;
	volatile int32_t x296 = -12571468;

	t73 = ((x293|x294)<=(x295==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = UINT64_MAX;
	static volatile int8_t x298 = 1;
	int32_t x299 = INT32_MIN;
	volatile int32_t t74 = 4;

	t74 = ((x297|x298)<=(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = INT32_MIN;
	uint16_t x302 = 1387U;
	volatile int64_t x303 = -13069168805660LL;
	uint16_t x304 = 232U;
	volatile int32_t t75 = -57621696;

	t75 = ((x301|x302)<=(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 0U;
	int8_t x306 = -1;
	volatile uint8_t x307 = 0U;
	int32_t x308 = 25997;
	int32_t t76 = -646736338;

	t76 = ((x305|x306)<=(x307==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 0U;
	int8_t x310 = INT8_MIN;
	int64_t x311 = -1LL;
	int16_t x312 = INT16_MIN;
	int32_t t77 = 2456;

	t77 = ((x309|x310)<=(x311==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	static int32_t x314 = INT32_MIN;
	int8_t x315 = -1;
	volatile uint64_t x316 = 15146577LLU;

	t78 = ((x313|x314)<=(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -6;
	static volatile int16_t x318 = INT16_MAX;
	uint8_t x319 = 1U;
	static uint16_t x320 = 83U;
	int32_t t79 = -64948;

	t79 = ((x317|x318)<=(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MIN;
	int32_t t80 = -121580985;

	t80 = ((x321|x322)<=(x323==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 1U;
	int64_t x326 = 1857LL;
	static int64_t x328 = -6838139LL;

	t81 = ((x325|x326)<=(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	static int64_t x330 = -6320174060474321LL;
	static uint32_t x331 = 169095905U;
	uint8_t x332 = UINT8_MAX;
	static int32_t t82 = -32664964;

	t82 = ((x329|x330)<=(x331==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = -26;
	int16_t x335 = INT16_MIN;
	volatile int16_t x336 = -51;
	volatile int32_t t83 = 0;

	t83 = ((x333|x334)<=(x335==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	int8_t x338 = 5;
	int32_t x340 = 9;

	t84 = ((x337|x338)<=(x339==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	uint8_t x342 = 2U;
	static int32_t x343 = INT32_MIN;
	volatile int64_t x344 = INT64_MAX;
	static int32_t t85 = 3532315;

	t85 = ((x341|x342)<=(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x346 = UINT16_MAX;
	uint16_t x347 = 53U;
	int32_t x348 = INT32_MIN;

	t86 = ((x345|x346)<=(x347==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x350 = INT8_MIN;
	volatile uint64_t x351 = UINT64_MAX;
	int32_t t87 = 4640819;

	t87 = ((x349|x350)<=(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = -1LL;
	static uint64_t x355 = 1451444057969809583LLU;
	static uint32_t x356 = UINT32_MAX;

	t88 = ((x353|x354)<=(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x357 = INT32_MAX;
	static uint32_t x358 = UINT32_MAX;
	int64_t x359 = INT64_MIN;
	volatile uint8_t x360 = 0U;

	t89 = ((x357|x358)<=(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = -1;
	uint64_t x362 = 53LLU;
	static int64_t x363 = INT64_MAX;
	int8_t x364 = -11;
	static volatile int32_t t90 = -60;

	t90 = ((x361|x362)<=(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = 14153U;
	static uint64_t x366 = 2770777LLU;
	int64_t x367 = INT64_MAX;
	volatile int32_t t91 = -2282878;

	t91 = ((x365|x366)<=(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = -1;
	int64_t x370 = -1LL;
	int32_t x371 = -1;
	int32_t t92 = 7868;

	t92 = ((x369|x370)<=(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x373 = 42U;
	int8_t x374 = INT8_MIN;
	static uint64_t x375 = UINT64_MAX;
	int8_t x376 = -1;
	int32_t t93 = 189994;

	t93 = ((x373|x374)<=(x375==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x377 = UINT32_MAX;
	int32_t x378 = -1;
	static int64_t x379 = -1LL;
	uint16_t x380 = 0U;
	static int32_t t94 = -53743;

	t94 = ((x377|x378)<=(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x383 = INT8_MAX;
	static uint64_t x384 = 47LLU;
	volatile int32_t t95 = 3191;

	t95 = ((x381|x382)<=(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = INT16_MIN;
	volatile int32_t x386 = 305407925;
	uint64_t x388 = UINT64_MAX;
	int32_t t96 = -201627;

	t96 = ((x385|x386)<=(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int64_t x391 = INT64_MIN;
	static uint8_t x392 = 6U;

	t97 = ((x389|x390)<=(x391==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x394 = 3U;
	static int8_t x396 = INT8_MIN;
	volatile int32_t t98 = 1820;

	t98 = ((x393|x394)<=(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = INT32_MIN;
	uint32_t x398 = UINT32_MAX;
	uint8_t x399 = 64U;
	volatile int32_t t99 = 186;

	t99 = ((x397|x398)<=(x399==x400));

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

