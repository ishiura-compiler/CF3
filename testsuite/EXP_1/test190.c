#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -11;
int8_t x9 = INT8_MIN;
static uint16_t x10 = 0U;
volatile int16_t x11 = INT16_MIN;
int16_t x19 = INT16_MIN;
static int64_t x24 = 2185241187347656LL;
int32_t x29 = -1;
volatile int16_t x42 = 727;
int32_t x48 = -1196;
int16_t x53 = INT16_MIN;
int64_t x72 = INT64_MIN;
uint8_t x74 = 0U;
int16_t x78 = INT16_MAX;
volatile int16_t x82 = -7333;
int8_t x83 = 1;
volatile int32_t t19 = 383216841;
int16_t x86 = INT16_MIN;
volatile int8_t x87 = INT8_MIN;
static uint16_t x96 = 1790U;
int32_t t22 = 19;
int8_t x100 = INT8_MIN;
int32_t t24 = 143483545;
static int32_t x112 = INT32_MIN;
int16_t x122 = 18;
uint16_t x124 = 81U;
volatile uint64_t x130 = UINT64_MAX;
static volatile int32_t t30 = 15;
int16_t x152 = INT16_MAX;
static volatile int32_t t35 = 8189916;
volatile uint16_t x164 = 0U;
volatile int64_t x168 = INT64_MIN;
int32_t t37 = 2;
int32_t x172 = INT32_MAX;
static int64_t x175 = -1873855598285749287LL;
volatile int64_t x179 = -1LL;
int64_t x180 = 0LL;
int64_t x184 = -5043397486LL;
static volatile int64_t x188 = -4259097896503825728LL;
int32_t x190 = 60271620;
volatile uint64_t x201 = UINT64_MAX;
int8_t x211 = INT8_MIN;
int32_t t45 = -1;
uint32_t x214 = 7941657U;
uint64_t x226 = 105520LLU;
static int8_t x228 = INT8_MIN;
volatile int32_t t49 = -2;
uint8_t x245 = UINT8_MAX;
int8_t x248 = 0;
uint64_t x249 = 15473237888497LLU;
int32_t t52 = 6;
int32_t x258 = INT32_MIN;
uint32_t x263 = UINT32_MAX;
uint16_t x265 = UINT16_MAX;
uint32_t x270 = 210748458U;
volatile int32_t t57 = 21684;
uint32_t x274 = UINT32_MAX;
static uint16_t x275 = 6U;
int32_t x280 = INT32_MAX;
static volatile int32_t t60 = -34;
uint64_t x293 = 1623910487962684257LLU;
uint16_t x305 = 23U;
volatile int8_t x306 = -1;
int64_t x311 = 107667LL;
volatile int64_t x312 = -28625964727LL;
uint16_t x314 = UINT16_MAX;
int8_t x321 = -29;
volatile uint16_t x323 = 38U;
int16_t x335 = INT16_MIN;
int64_t x342 = 2113LL;
volatile int32_t t70 = 472900665;
static uint32_t x352 = 324U;
volatile int16_t x353 = INT16_MIN;
int8_t x361 = INT8_MIN;
int32_t x364 = INT32_MIN;
int64_t x365 = -7467570843682LL;
static uint16_t x367 = 1255U;
static int32_t t75 = 118012;
volatile int32_t t76 = -24410;
uint64_t x373 = 43754853243883LLU;
static volatile int32_t t77 = 3255606;
int8_t x389 = INT8_MAX;
int16_t x405 = INT16_MAX;
uint64_t x418 = 7200111338300LLU;
static volatile int32_t t84 = -252;
static volatile int8_t x426 = INT8_MAX;
volatile int32_t t86 = -1545;
volatile int32_t t88 = -32211262;
static uint8_t x444 = UINT8_MAX;
int16_t x456 = -66;
uint16_t x458 = 30910U;
static int16_t x470 = INT16_MAX;
uint8_t x477 = 96U;
static uint32_t x479 = 1041683478U;
uint32_t x480 = 362490U;
int32_t t98 = -39;
int8_t x493 = -1;
int64_t x495 = -1403111625245920LL;


void f0(void) {
	static volatile int8_t x1 = INT8_MIN;
	uint16_t x2 = 3654U;
	static volatile int8_t x3 = -2;
	int64_t x4 = INT64_MAX;
	int32_t t0 = 1;

	t0 = (((x1-x2)-x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -15;
	static int8_t x6 = INT8_MAX;
	uint64_t x7 = 469LLU;
	uint32_t x8 = 752224U;

	t1 = (((x5-x6)-x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x12 = INT64_MAX;
	static volatile int32_t t2 = 108810;

	t2 = (((x9-x10)-x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	volatile uint16_t x14 = 108U;
	int64_t x15 = 143604163266199173LL;
	volatile int16_t x16 = INT16_MAX;
	int32_t t3 = 1;

	t3 = (((x13-x14)-x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MAX;
	int8_t x18 = 0;
	uint16_t x20 = 324U;
	volatile int32_t t4 = 4186884;

	t4 = (((x17-x18)-x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	int32_t x22 = INT32_MIN;
	static volatile int8_t x23 = 0;
	volatile int32_t t5 = 34;

	t5 = (((x21-x22)-x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	uint8_t x26 = 31U;
	uint8_t x27 = 0U;
	int8_t x28 = 0;
	volatile int32_t t6 = -157;

	t6 = (((x25-x26)-x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -48543;
	int8_t x31 = INT8_MIN;
	static volatile uint16_t x32 = UINT16_MAX;
	int32_t t7 = 1788;

	t7 = (((x29-x30)-x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -2;
	int64_t x34 = 16652289942LL;
	static int64_t x35 = 8613LL;
	static int64_t x36 = INT64_MAX;
	volatile int32_t t8 = 2734869;

	t8 = (((x33-x34)-x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MAX;
	uint64_t x43 = UINT64_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t9 = 8091369;

	t9 = (((x41-x42)-x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	int64_t x46 = -35312138085LL;
	int16_t x47 = INT16_MIN;
	int32_t t10 = 1;

	t10 = (((x45-x46)-x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	int32_t x50 = 20407;
	static uint64_t x51 = UINT64_MAX;
	int16_t x52 = INT16_MIN;
	int32_t t11 = 7;

	t11 = (((x49-x50)-x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = INT8_MAX;
	int32_t x55 = -94;
	static uint64_t x56 = 126394574596551LLU;
	volatile int32_t t12 = 17036;

	t12 = (((x53-x54)-x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -133771203464LL;
	int32_t x58 = INT32_MIN;
	int8_t x59 = -1;
	int8_t x60 = INT8_MAX;
	volatile int32_t t13 = -274;

	t13 = (((x57-x58)-x59)==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = 3636704808112282592LL;
	int32_t x62 = INT32_MAX;
	static int32_t x63 = INT32_MAX;
	int32_t x64 = INT32_MIN;
	volatile int32_t t14 = 711995;

	t14 = (((x61-x62)-x63)==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x65 = -1;
	uint8_t x66 = 1U;
	uint16_t x67 = 406U;
	int16_t x68 = INT16_MAX;
	static int32_t t15 = 19790564;

	t15 = (((x65-x66)-x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MIN;
	static int8_t x71 = 62;
	static int32_t t16 = 16822133;

	t16 = (((x69-x70)-x71)==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = -7837;
	uint16_t x75 = 13885U;
	uint32_t x76 = 291060U;
	int32_t t17 = 398;

	t17 = (((x73-x74)-x75)==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 1928;
	int64_t x79 = INT64_MIN;
	volatile int32_t x80 = INT32_MIN;
	int32_t t18 = 2099;

	t18 = (((x77-x78)-x79)==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	volatile int32_t x84 = INT32_MIN;

	t19 = (((x81-x82)-x83)==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x85 = 6329U;
	int16_t x88 = -3;
	int32_t t20 = 408503;

	t20 = (((x85-x86)-x87)==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = -1;
	int32_t x91 = -1;
	volatile uint8_t x92 = 3U;
	int32_t t21 = 1914;

	t21 = (((x89-x90)-x91)==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -1;
	static int32_t x94 = -1;
	uint32_t x95 = 1U;

	t22 = (((x93-x94)-x95)==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MIN;
	static volatile int32_t x99 = INT32_MAX;
	static int32_t t23 = 235253;

	t23 = (((x97-x98)-x99)==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x101 = INT32_MAX;
	volatile uint64_t x102 = 433568532555265884LLU;
	int8_t x103 = -1;
	int16_t x104 = -1;

	t24 = (((x101-x102)-x103)==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x109 = 271978094507LLU;
	static int16_t x110 = -9;
	static uint32_t x111 = 450277U;
	static int32_t t25 = 0;

	t25 = (((x109-x110)-x111)==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x113 = 0;
	volatile uint64_t x114 = 18LLU;
	volatile int64_t x115 = -1LL;
	static int32_t x116 = INT32_MIN;
	volatile int32_t t26 = 0;

	t26 = (((x113-x114)-x115)==x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = 235395583619190617LL;
	uint64_t x118 = 7LLU;
	uint64_t x119 = UINT64_MAX;
	volatile uint64_t x120 = UINT64_MAX;
	static int32_t t27 = -48743;

	t27 = (((x117-x118)-x119)==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x121 = INT32_MAX;
	int64_t x123 = 17157037826LL;
	static volatile int32_t t28 = 2;

	t28 = (((x121-x122)-x123)==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x125 = INT16_MIN;
	static volatile int32_t x126 = INT32_MIN;
	static volatile int16_t x127 = 5374;
	static volatile int64_t x128 = INT64_MAX;
	volatile int32_t t29 = -1;

	t29 = (((x125-x126)-x127)==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -1;
	volatile uint16_t x131 = 2U;
	int16_t x132 = INT16_MIN;

	t30 = (((x129-x130)-x131)==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MAX;
	static uint8_t x138 = UINT8_MAX;
	static int16_t x139 = INT16_MAX;
	int64_t x140 = INT64_MIN;
	volatile int32_t t31 = 103657352;

	t31 = (((x137-x138)-x139)==x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = -1;
	int8_t x142 = -1;
	int32_t x143 = -1;
	static uint8_t x144 = UINT8_MAX;
	static int32_t t32 = -902;

	t32 = (((x141-x142)-x143)==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MAX;
	uint32_t x150 = 1925007U;
	uint64_t x151 = UINT64_MAX;
	static volatile int32_t t33 = -304343525;

	t33 = (((x149-x150)-x151)==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x153 = 3U;
	static volatile int16_t x154 = INT16_MIN;
	static volatile uint32_t x155 = 1716U;
	int64_t x156 = -1LL;
	int32_t t34 = 1662;

	t34 = (((x153-x154)-x155)==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x157 = INT64_MAX;
	uint16_t x158 = 8306U;
	static int8_t x159 = -54;
	int32_t x160 = 711;

	t35 = (((x157-x158)-x159)==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = 1875U;
	static int64_t x162 = -1LL;
	int16_t x163 = INT16_MIN;
	volatile int32_t t36 = 11;

	t36 = (((x161-x162)-x163)==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x165 = INT16_MAX;
	int32_t x166 = 0;
	int64_t x167 = INT64_MAX;

	t37 = (((x165-x166)-x167)==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x169 = 27913975U;
	volatile int32_t x170 = 189;
	int16_t x171 = -6;
	volatile int32_t t38 = -485789528;

	t38 = (((x169-x170)-x171)==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = INT8_MIN;
	static volatile uint8_t x174 = UINT8_MAX;
	int16_t x176 = INT16_MIN;
	static int32_t t39 = 4;

	t39 = (((x173-x174)-x175)==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x177 = UINT32_MAX;
	uint16_t x178 = UINT16_MAX;
	volatile int32_t t40 = -62;

	t40 = (((x177-x178)-x179)==x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 22U;
	volatile uint8_t x182 = UINT8_MAX;
	uint16_t x183 = 532U;
	volatile int32_t t41 = -187;

	t41 = (((x181-x182)-x183)==x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x185 = 95144290U;
	int16_t x186 = -1;
	uint32_t x187 = 126969333U;
	static volatile int32_t t42 = -180;

	t42 = (((x185-x186)-x187)==x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 1U;
	static uint64_t x191 = UINT64_MAX;
	int64_t x192 = -1LL;
	int32_t t43 = 289965528;

	t43 = (((x189-x190)-x191)==x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x202 = 1;
	int64_t x203 = 6959407083LL;
	int32_t x204 = INT32_MIN;
	volatile int32_t t44 = 69099626;

	t44 = (((x201-x202)-x203)==x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = -5635LL;
	int16_t x210 = 1763;
	static volatile int8_t x212 = INT8_MAX;

	t45 = (((x209-x210)-x211)==x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x213 = UINT8_MAX;
	volatile uint32_t x215 = 10493U;
	uint32_t x216 = UINT32_MAX;
	int32_t t46 = -2512197;

	t46 = (((x213-x214)-x215)==x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x217 = 12555U;
	int16_t x218 = INT16_MAX;
	static volatile int64_t x219 = -485905170359406359LL;
	static int64_t x220 = INT64_MAX;
	static int32_t t47 = -4903761;

	t47 = (((x217-x218)-x219)==x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x221 = 193091004739563LLU;
	int8_t x222 = -22;
	int32_t x223 = -204118;
	volatile int64_t x224 = INT64_MAX;
	static int32_t t48 = 0;

	t48 = (((x221-x222)-x223)==x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x225 = -809642197;
	static int16_t x227 = INT16_MIN;

	t49 = (((x225-x226)-x227)==x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x229 = 367LLU;
	int16_t x230 = 952;
	static uint16_t x231 = UINT16_MAX;
	int64_t x232 = -1LL;
	volatile int32_t t50 = -12070470;

	t50 = (((x229-x230)-x231)==x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x246 = 3772447423LLU;
	uint32_t x247 = 394875U;
	int32_t t51 = -21;

	t51 = (((x245-x246)-x247)==x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x250 = 58;
	static int64_t x251 = 3LL;
	static volatile uint8_t x252 = 1U;

	t52 = (((x249-x250)-x251)==x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x253 = 0;
	uint16_t x254 = 6082U;
	static int8_t x255 = 0;
	static int8_t x256 = INT8_MIN;
	volatile int32_t t53 = 1;

	t53 = (((x253-x254)-x255)==x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x257 = -1;
	volatile uint8_t x259 = UINT8_MAX;
	static int16_t x260 = INT16_MAX;
	volatile int32_t t54 = -905606594;

	t54 = (((x257-x258)-x259)==x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x261 = INT16_MAX;
	int64_t x262 = -1LL;
	uint16_t x264 = 100U;
	int32_t t55 = -457197;

	t55 = (((x261-x262)-x263)==x264);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x266 = INT32_MAX;
	static uint8_t x267 = 2U;
	int64_t x268 = 6321474510440372LL;
	static int32_t t56 = 1706;

	t56 = (((x265-x266)-x267)==x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = -25483LL;
	int32_t x271 = INT32_MIN;
	static uint16_t x272 = 192U;

	t57 = (((x269-x270)-x271)==x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x273 = UINT32_MAX;
	int64_t x276 = INT64_MIN;
	static volatile int32_t t58 = 1;

	t58 = (((x273-x274)-x275)==x276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x277 = 3772089112418791139LLU;
	volatile int64_t x278 = -1LL;
	static uint64_t x279 = 10741LLU;
	volatile int32_t t59 = 459282;

	t59 = (((x277-x278)-x279)==x280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x281 = 11U;
	int8_t x282 = -38;
	uint16_t x283 = 657U;
	static uint32_t x284 = 18U;

	t60 = (((x281-x282)-x283)==x284);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x289 = 57;
	uint8_t x290 = 16U;
	uint8_t x291 = 1U;
	int64_t x292 = 249475372904709381LL;
	volatile int32_t t61 = 135524;

	t61 = (((x289-x290)-x291)==x292);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x294 = 40277018521252361LLU;
	static volatile int8_t x295 = -1;
	volatile uint8_t x296 = 12U;
	volatile int32_t t62 = 4839484;

	t62 = (((x293-x294)-x295)==x296);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x301 = -27;
	uint64_t x302 = UINT64_MAX;
	int16_t x303 = 7116;
	int32_t x304 = 9587222;
	volatile int32_t t63 = 32;

	t63 = (((x301-x302)-x303)==x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x307 = -19143319;
	int8_t x308 = 4;
	volatile int32_t t64 = -1174;

	t64 = (((x305-x306)-x307)==x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x309 = 125U;
	uint16_t x310 = 3U;
	volatile int32_t t65 = -1460;

	t65 = (((x309-x310)-x311)==x312);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x313 = UINT16_MAX;
	static int16_t x315 = INT16_MIN;
	static int16_t x316 = -1;
	volatile int32_t t66 = -8813691;

	t66 = (((x313-x314)-x315)==x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x322 = -47139303LL;
	static int32_t x324 = INT32_MIN;
	int32_t t67 = -11570;

	t67 = (((x321-x322)-x323)==x324);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x333 = 320547LLU;
	static int64_t x334 = INT64_MIN;
	int32_t x336 = INT32_MAX;
	volatile int32_t t68 = -24;

	t68 = (((x333-x334)-x335)==x336);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x337 = -1831508070813235640LL;
	volatile int32_t x338 = INT32_MIN;
	int32_t x339 = INT32_MIN;
	uint64_t x340 = 4642758341LLU;
	int32_t t69 = -12;

	t69 = (((x337-x338)-x339)==x340);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x341 = 1U;
	int32_t x343 = INT32_MAX;
	uint8_t x344 = UINT8_MAX;

	t70 = (((x341-x342)-x343)==x344);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x345 = INT32_MIN;
	volatile uint64_t x346 = 820641840949528633LLU;
	int8_t x347 = 14;
	int16_t x348 = -1;
	volatile int32_t t71 = 57;

	t71 = (((x345-x346)-x347)==x348);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x349 = UINT8_MAX;
	volatile uint8_t x350 = 22U;
	int64_t x351 = INT64_MAX;
	static int32_t t72 = 346095;

	t72 = (((x349-x350)-x351)==x352);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x354 = 5079607LL;
	uint32_t x355 = 1444U;
	int64_t x356 = INT64_MAX;
	int32_t t73 = -36885;

	t73 = (((x353-x354)-x355)==x356);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x362 = 496642624766682LLU;
	uint16_t x363 = UINT16_MAX;
	static volatile int32_t t74 = -1119;

	t74 = (((x361-x362)-x363)==x364);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x366 = 3U;
	volatile int8_t x368 = -1;

	t75 = (((x365-x366)-x367)==x368);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x369 = -1;
	int16_t x370 = -666;
	uint16_t x371 = 3U;
	uint8_t x372 = UINT8_MAX;

	t76 = (((x369-x370)-x371)==x372);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x374 = UINT32_MAX;
	static int16_t x375 = INT16_MIN;
	static uint64_t x376 = UINT64_MAX;

	t77 = (((x373-x374)-x375)==x376);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = -1;
	static int64_t x383 = INT64_MIN;
	uint16_t x384 = 2936U;
	volatile int32_t t78 = -973613;

	t78 = (((x381-x382)-x383)==x384);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x390 = 41LLU;
	volatile uint16_t x391 = 1687U;
	uint32_t x392 = 49U;
	volatile int32_t t79 = 5;

	t79 = (((x389-x390)-x391)==x392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = INT16_MAX;
	static volatile int16_t x395 = INT16_MIN;
	int8_t x396 = 22;
	volatile int32_t t80 = 0;

	t80 = (((x393-x394)-x395)==x396);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x397 = -1;
	static int8_t x398 = INT8_MAX;
	uint64_t x399 = 232449122198LLU;
	volatile int64_t x400 = -602831014722720LL;
	static int32_t t81 = -289408358;

	t81 = (((x397-x398)-x399)==x400);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x401 = UINT16_MAX;
	static int8_t x402 = INT8_MIN;
	static uint64_t x403 = 215403238931LLU;
	uint16_t x404 = 6U;
	volatile int32_t t82 = -106706;

	t82 = (((x401-x402)-x403)==x404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x406 = -1;
	int32_t x407 = INT32_MAX;
	int32_t x408 = -1;
	int32_t t83 = -235415;

	t83 = (((x405-x406)-x407)==x408);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x417 = 2U;
	static int8_t x419 = -1;
	int64_t x420 = INT64_MIN;

	t84 = (((x417-x418)-x419)==x420);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x421 = 1543580379731LLU;
	uint64_t x422 = 2700506732007LLU;
	int32_t x423 = INT32_MIN;
	static uint16_t x424 = UINT16_MAX;
	int32_t t85 = -2;

	t85 = (((x421-x422)-x423)==x424);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x425 = INT8_MAX;
	int16_t x427 = INT16_MIN;
	uint32_t x428 = 60891U;

	t86 = (((x425-x426)-x427)==x428);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x429 = 5U;
	int16_t x430 = -1;
	int8_t x431 = 1;
	uint32_t x432 = 4176U;
	int32_t t87 = -12159523;

	t87 = (((x429-x430)-x431)==x432);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x433 = 9787650U;
	static volatile uint16_t x434 = 2798U;
	volatile uint32_t x435 = 5U;
	volatile int8_t x436 = INT8_MIN;

	t88 = (((x433-x434)-x435)==x436);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x437 = UINT32_MAX;
	int64_t x438 = -1LL;
	int16_t x439 = -1;
	uint16_t x440 = 4585U;
	volatile int32_t t89 = -10794259;

	t89 = (((x437-x438)-x439)==x440);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x441 = INT32_MIN;
	uint64_t x442 = 2552830632908731760LLU;
	int32_t x443 = INT32_MIN;
	int32_t t90 = -56545675;

	t90 = (((x441-x442)-x443)==x444);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x445 = UINT16_MAX;
	int8_t x446 = -1;
	int32_t x447 = -1;
	static int16_t x448 = -4382;
	static volatile int32_t t91 = 1;

	t91 = (((x445-x446)-x447)==x448);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x449 = INT16_MAX;
	uint32_t x450 = 498U;
	int16_t x451 = -1;
	static volatile uint32_t x452 = 637246U;
	static volatile int32_t t92 = -93282962;

	t92 = (((x449-x450)-x451)==x452);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x453 = 208081525U;
	int8_t x454 = INT8_MIN;
	volatile uint8_t x455 = UINT8_MAX;
	volatile int32_t t93 = 1;

	t93 = (((x453-x454)-x455)==x456);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x457 = 2LLU;
	int32_t x459 = INT32_MIN;
	int16_t x460 = -1;
	int32_t t94 = -57;

	t94 = (((x457-x458)-x459)==x460);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x465 = -1;
	volatile uint8_t x466 = 45U;
	static volatile int8_t x467 = -1;
	static int64_t x468 = -1LL;
	volatile int32_t t95 = -164;

	t95 = (((x465-x466)-x467)==x468);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x469 = -1LL;
	static int64_t x471 = -1LL;
	int32_t x472 = -1;
	int32_t t96 = 0;

	t96 = (((x469-x470)-x471)==x472);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x478 = 915U;
	static int32_t t97 = 45197;

	t97 = (((x477-x478)-x479)==x480);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x485 = INT32_MIN;
	uint64_t x486 = UINT64_MAX;
	int32_t x487 = -1;
	uint64_t x488 = UINT64_MAX;

	t98 = (((x485-x486)-x487)==x488);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x494 = INT8_MAX;
	volatile int32_t x496 = -1;
	int32_t t99 = -196526;

	t99 = (((x493-x494)-x495)==x496);

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

