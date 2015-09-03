#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
static uint8_t x11 = 15U;
volatile int32_t x12 = INT32_MIN;
volatile int8_t x14 = INT8_MAX;
int32_t x15 = INT32_MAX;
int8_t x17 = INT8_MIN;
static int16_t x23 = INT16_MIN;
int8_t x29 = 30;
int64_t x32 = -1LL;
static int8_t x36 = -1;
int16_t x37 = INT16_MIN;
int8_t x38 = INT8_MIN;
static int8_t x48 = 8;
int32_t t10 = -15150;
int8_t x49 = 61;
int8_t x52 = INT8_MIN;
volatile int32_t t12 = 13873526;
int32_t t13 = -36;
int8_t x61 = INT8_MIN;
volatile int8_t x65 = -3;
int32_t x71 = INT32_MIN;
volatile int8_t x75 = INT8_MAX;
volatile int64_t x82 = 4046543LL;
uint8_t x83 = 7U;
volatile uint64_t t19 = UINT64_MAX;
volatile uint8_t x85 = 89U;
uint8_t x89 = UINT8_MAX;
int8_t x90 = 0;
uint8_t x93 = 16U;
volatile int32_t t22 = -24057973;
volatile int8_t x98 = INT8_MIN;
int64_t x100 = INT64_MAX;
uint32_t x101 = 729722U;
static volatile int32_t x105 = INT32_MIN;
volatile uint8_t x108 = 2U;
int32_t x117 = INT32_MAX;
int64_t t29 = -3501LL;
static volatile int32_t t30 = 2;
volatile uint32_t t31 = UINT32_MAX;
volatile uint8_t x133 = UINT8_MAX;
volatile int32_t x142 = -1;
volatile uint64_t x145 = UINT64_MAX;
volatile int64_t x146 = 7LL;
static int64_t t37 = -129974275321355177LL;
static int8_t x160 = -31;
uint16_t x163 = UINT16_MAX;
static volatile uint32_t x171 = 3753U;
int8_t x172 = INT8_MIN;
int64_t x174 = -1LL;
static uint8_t x175 = UINT8_MAX;
volatile uint64_t x180 = UINT64_MAX;
int32_t x191 = INT32_MAX;
volatile int32_t t45 = 437181494;
volatile int32_t t46 = 164;
int32_t t48 = 6312640;
volatile uint16_t x206 = 0U;
int32_t x216 = INT32_MAX;
volatile int32_t t52 = 19;
int8_t x221 = INT8_MAX;
volatile uint16_t x224 = UINT16_MAX;
int8_t x234 = -1;
int64_t x238 = 14273891918LL;
static volatile int32_t t57 = -7827;
static volatile uint32_t x250 = UINT32_MAX;
static volatile uint8_t x256 = UINT8_MAX;
uint32_t t61 = 16U;
uint64_t x257 = 25395262LLU;
int32_t x260 = INT32_MIN;
uint64_t t62 = 59913489504LLU;
int64_t x264 = INT64_MIN;
int64_t t63 = 48524725LL;
uint64_t x269 = 550728717LLU;
int64_t x271 = INT64_MIN;
static int16_t x276 = INT16_MIN;
int16_t x277 = INT16_MAX;
volatile int64_t t68 = 1485176370383060LL;
int8_t x289 = INT8_MIN;
int32_t x290 = INT32_MIN;
uint64_t x299 = UINT64_MAX;
int64_t x302 = -181443798917376789LL;
volatile int32_t x310 = -12505294;
volatile int32_t x312 = INT32_MAX;
static uint16_t x321 = 3U;
int32_t x327 = INT32_MAX;
int64_t t78 = 47738000572083642LL;
static int32_t x336 = 2830123;
uint32_t x343 = 1991392U;
uint16_t x347 = UINT16_MAX;
int32_t x351 = INT32_MIN;
int8_t x355 = INT8_MIN;
uint64_t x359 = 64875LLU;
static uint64_t x360 = UINT64_MAX;
uint32_t x361 = 18094798U;
uint16_t x363 = 6U;
int32_t x364 = INT32_MIN;
int32_t x385 = INT32_MAX;
static uint16_t x390 = 203U;
uint16_t x402 = 3U;
uint32_t x404 = 3U;
uint32_t x414 = 383580995U;
static volatile int64_t x415 = INT64_MIN;
static uint32_t x416 = 855U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint64_t x3 = 110149LLU;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = -1289375870LL;

	t0 = ((x1-(x2<x3))|x4);

	if (t0 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	uint16_t x6 = 10U;
	static volatile int32_t x7 = INT32_MAX;
	int32_t x8 = -6;
	static volatile int32_t t1 = 19390;

	t1 = ((x5-(x6<x7))|x8);

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int16_t x10 = 14171;
	static volatile int64_t t2 = -66677865LL;

	t2 = ((x9-(x10<x11))|x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x13 = UINT64_MAX;
	int64_t x16 = 0LL;
	volatile uint64_t t3 = 7423LLU;

	t3 = ((x13-(x14<x15))|x16);

	if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = 24;
	int16_t x19 = -279;
	int8_t x20 = -1;
	int32_t t4 = -76;

	t4 = ((x17-(x18<x19))|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	int8_t x22 = -1;
	int64_t x24 = INT64_MIN;
	int64_t t5 = 764983016036742976LL;

	t5 = ((x21-(x22<x23))|x24);

	if (t5 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -2;
	int16_t x26 = INT16_MIN;
	int32_t x27 = 0;
	uint16_t x28 = 7U;
	int32_t t6 = 204592048;

	t6 = ((x25-(x26<x27))|x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x30 = -1;
	uint32_t x31 = 780289U;
	int64_t t7 = 784230LL;

	t7 = ((x29-(x30<x31))|x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = -1;
	static int32_t x34 = -1;
	uint16_t x35 = 82U;
	volatile int32_t t8 = 94334344;

	t8 = ((x33-(x34<x35))|x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x39 = INT16_MIN;
	volatile int8_t x40 = -1;
	int32_t t9 = -15;

	t9 = ((x37-(x38<x39))|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = INT16_MAX;
	static volatile int64_t x46 = 16787821688LL;
	static int8_t x47 = INT8_MIN;

	t10 = ((x45-(x46<x47))|x48);

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x50 = INT8_MAX;
	static int8_t x51 = INT8_MIN;
	static int32_t t11 = -26;

	t11 = ((x49-(x50<x51))|x52);

	if (t11 != -67) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = 15;
	int64_t x54 = -189306991608LL;
	int8_t x55 = INT8_MAX;
	int32_t x56 = -1;

	t12 = ((x53-(x54<x55))|x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = INT8_MIN;
	volatile uint32_t x58 = UINT32_MAX;
	static uint16_t x59 = UINT16_MAX;
	int16_t x60 = -1;

	t13 = ((x57-(x58<x59))|x60);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x62 = INT64_MAX;
	static uint8_t x63 = 3U;
	int16_t x64 = -16123;
	volatile int32_t t14 = -358487835;

	t14 = ((x61-(x62<x63))|x64);

	if (t14 != -123) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MAX;
	int32_t x68 = -11;
	int32_t t15 = 1484017;

	t15 = ((x65-(x66<x67))|x68);

	if (t15 != -3) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -29003749059356LL;
	volatile uint64_t x70 = 34708498039143LLU;
	uint64_t x72 = 796LLU;
	uint64_t t16 = 71605186509528LLU;

	t16 = ((x69-(x70<x71))|x72);

	if (t16 != 18446715069960493055LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x73 = -1LL;
	volatile int32_t x74 = 4;
	int64_t x76 = INT64_MIN;
	volatile int64_t t17 = 1219228569836LL;

	t17 = ((x73-(x74<x75))|x76);

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 6516U;
	uint32_t x78 = 582U;
	volatile int64_t x79 = INT64_MIN;
	int32_t x80 = -1;
	static volatile int32_t t18 = 20219;

	t18 = ((x77-(x78<x79))|x80);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = -1LL;
	uint64_t x84 = UINT64_MAX;

	t19 = ((x81-(x82<x83))|x84);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = 0;
	int32_t x87 = INT32_MIN;
	uint64_t x88 = 858489735LLU;
	volatile uint64_t t20 = 152906LLU;

	t20 = ((x85-(x86<x87))|x88);

	if (t20 != 858489823LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x91 = 2;
	uint16_t x92 = UINT16_MAX;
	static int32_t t21 = -247631;

	t21 = ((x89-(x90<x91))|x92);

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = INT32_MIN;
	uint8_t x95 = 55U;
	static int16_t x96 = 1782;

	t22 = ((x93-(x94<x95))|x96);

	if (t22 != 1791) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = 258492;
	uint64_t x99 = 279091748976478102LLU;
	volatile int64_t t23 = INT64_MAX;

	t23 = ((x97-(x98<x99))|x100);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x102 = -1LL;
	static uint8_t x103 = 0U;
	int64_t x104 = 13LL;
	volatile int64_t t24 = 200693310726LL;

	t24 = ((x101-(x102<x103))|x104);

	if (t24 != 729725LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x106 = INT64_MAX;
	uint32_t x107 = 11U;
	static volatile int32_t t25 = 236557773;

	t25 = ((x105-(x106<x107))|x108);

	if (t25 != -2147483646) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x109 = INT16_MAX;
	uint32_t x110 = UINT32_MAX;
	static int8_t x111 = INT8_MIN;
	volatile uint16_t x112 = 14U;
	int32_t t26 = -26764;

	t26 = ((x109-(x110<x111))|x112);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1LL;
	volatile uint32_t x114 = 1U;
	int64_t x115 = INT64_MIN;
	static int32_t x116 = 996033;
	static int64_t t27 = -618080LL;

	t27 = ((x113-(x114<x115))|x116);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x118 = 157;
	volatile uint8_t x119 = 10U;
	int64_t x120 = INT64_MIN;
	int64_t t28 = 522044LL;

	t28 = ((x117-(x118<x119))|x120);

	if (t28 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = -52801883LL;
	volatile int16_t x122 = INT16_MIN;
	uint8_t x123 = 12U;
	int32_t x124 = INT32_MAX;

	t29 = ((x121-(x122<x123))|x124);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x125 = UINT8_MAX;
	int16_t x126 = -1;
	uint32_t x127 = 736473066U;
	int16_t x128 = -1;

	t30 = ((x125-(x126<x127))|x128);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 397U;
	volatile int64_t x130 = INT64_MIN;
	static int8_t x131 = INT8_MAX;
	volatile int32_t x132 = -1;

	t31 = ((x129-(x130<x131))|x132);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x134 = 733LLU;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = 19U;
	volatile uint32_t t32 = 111470365U;

	t32 = ((x133-(x134<x135))|x136);

	if (t32 != 255U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = UINT32_MAX;
	volatile int16_t x138 = INT16_MAX;
	int8_t x139 = INT8_MAX;
	static int16_t x140 = -1;
	uint32_t t33 = UINT32_MAX;

	t33 = ((x137-(x138<x139))|x140);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x141 = 278287178;
	uint8_t x143 = 15U;
	uint64_t x144 = UINT64_MAX;
	uint64_t t34 = UINT64_MAX;

	t34 = ((x141-(x142<x143))|x144);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x147 = 2187893368727404081LLU;
	int16_t x148 = INT16_MIN;
	uint64_t t35 = 493098777LLU;

	t35 = ((x145-(x146<x147))|x148);

	if (t35 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x149 = 1;
	int32_t x150 = -1;
	uint8_t x151 = 84U;
	int64_t x152 = INT64_MIN;
	static int64_t t36 = INT64_MIN;

	t36 = ((x149-(x150<x151))|x152);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x153 = INT64_MIN;
	uint16_t x154 = 7U;
	int32_t x155 = -949850514;
	int64_t x156 = -1LL;

	t37 = ((x153-(x154<x155))|x156);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -29888;
	int64_t x158 = -826353LL;
	uint64_t x159 = UINT64_MAX;
	static volatile int32_t t38 = -2;

	t38 = ((x157-(x158<x159))|x160);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = UINT64_MAX;
	uint64_t x162 = 1704100LLU;
	int64_t x164 = -1022262466LL;
	static volatile uint64_t t39 = UINT64_MAX;

	t39 = ((x161-(x162<x163))|x164);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MAX;
	int8_t x166 = -1;
	static int16_t x167 = 3937;
	static int16_t x168 = -1;
	int32_t t40 = 5421847;

	t40 = ((x165-(x166<x167))|x168);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -1;
	static int64_t x170 = -346204538785942LL;
	volatile int32_t t41 = 415073705;

	t41 = ((x169-(x170<x171))|x172);

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x173 = UINT64_MAX;
	volatile int64_t x176 = 51LL;
	uint64_t t42 = UINT64_MAX;

	t42 = ((x173-(x174<x175))|x176);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MAX;
	static volatile uint64_t x178 = 58LLU;
	int8_t x179 = INT8_MIN;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = ((x177-(x178<x179))|x180);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x181 = 88105371;
	uint32_t x182 = 6376304U;
	uint16_t x183 = 254U;
	int8_t x184 = -26;
	static int32_t t44 = 513668737;

	t44 = ((x181-(x182<x183))|x184);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x189 = -1;
	int8_t x190 = INT8_MIN;
	int16_t x192 = INT16_MAX;

	t45 = ((x189-(x190<x191))|x192);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = 38U;
	uint32_t x194 = 27217569U;
	static int16_t x195 = -1;
	uint8_t x196 = 1U;

	t46 = ((x193-(x194<x195))|x196);

	if (t46 != 37) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x197 = 957732U;
	int8_t x198 = 47;
	volatile int32_t x199 = INT32_MIN;
	int16_t x200 = INT16_MIN;
	static uint32_t t47 = 4U;

	t47 = ((x197-(x198<x199))|x200);

	if (t47 != 4294941988U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = 1;
	int16_t x202 = -1;
	static volatile int64_t x203 = INT64_MAX;
	static int8_t x204 = -9;

	t48 = ((x201-(x202<x203))|x204);

	if (t48 != -9) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x205 = 15U;
	static int16_t x207 = 12672;
	int16_t x208 = -3122;
	int32_t t49 = 361761;

	t49 = ((x205-(x206<x207))|x208);

	if (t49 != -3122) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = INT64_MAX;
	static int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MIN;
	int8_t x212 = -3;
	volatile int64_t t50 = -198417LL;

	t50 = ((x209-(x210<x211))|x212);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MIN;
	uint16_t x214 = 4668U;
	uint16_t x215 = 2U;
	int32_t t51 = 6;

	t51 = ((x213-(x214<x215))|x216);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = INT16_MAX;
	volatile int32_t x218 = INT32_MIN;
	static int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MIN;

	t52 = ((x217-(x218<x219))|x220);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x222 = 2974007U;
	int64_t x223 = INT64_MIN;
	volatile int32_t t53 = 6;

	t53 = ((x221-(x222<x223))|x224);

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = -1;
	volatile int32_t x226 = INT32_MAX;
	uint64_t x227 = 32501973081329LLU;
	int8_t x228 = -1;
	int32_t t54 = 65261;

	t54 = ((x225-(x226<x227))|x228);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x229 = UINT32_MAX;
	int64_t x230 = -1LL;
	uint8_t x231 = UINT8_MAX;
	static volatile int64_t x232 = INT64_MIN;
	volatile int64_t t55 = -7354LL;

	t55 = ((x229-(x230<x231))|x232);

	if (t55 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x233 = 0;
	volatile int8_t x235 = INT8_MAX;
	static int64_t x236 = INT64_MIN;
	volatile int64_t t56 = 52LL;

	t56 = ((x233-(x234<x235))|x236);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = 36U;
	int64_t x239 = INT64_MIN;
	static uint8_t x240 = UINT8_MAX;

	t57 = ((x237-(x238<x239))|x240);

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x241 = 39U;
	uint32_t x242 = 4029851U;
	uint16_t x243 = UINT16_MAX;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t58 = -9;

	t58 = ((x241-(x242<x243))|x244);

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = 3464889;
	uint64_t x246 = 202LLU;
	static int64_t x247 = -1136197936LL;
	static int8_t x248 = INT8_MIN;
	volatile int32_t t59 = 933;

	t59 = ((x245-(x246<x247))|x248);

	if (t59 != -72) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x249 = 20254099U;
	static int8_t x251 = 1;
	volatile int8_t x252 = -1;
	uint32_t t60 = UINT32_MAX;

	t60 = ((x249-(x250<x251))|x252);

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 52640U;
	static int32_t x254 = INT32_MIN;
	uint32_t x255 = UINT32_MAX;

	t61 = ((x253-(x254<x255))|x256);

	if (t61 != 52735U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x258 = INT32_MAX;
	volatile int32_t x259 = INT32_MIN;

	t62 = ((x257-(x258<x259))|x260);

	if (t62 != 18446744071587463230LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = UINT8_MAX;
	int64_t x262 = -1LL;
	int32_t x263 = INT32_MIN;

	t63 = ((x261-(x262<x263))|x264);

	if (t63 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x265 = -1;
	volatile uint32_t x266 = 1063621U;
	int8_t x267 = INT8_MIN;
	uint16_t x268 = 3846U;
	static volatile int32_t t64 = 406209;

	t64 = ((x265-(x266<x267))|x268);

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x270 = INT8_MIN;
	int32_t x272 = INT32_MAX;
	volatile uint64_t t65 = 3629LLU;

	t65 = ((x269-(x270<x271))|x272);

	if (t65 != 2147483647LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x273 = UINT64_MAX;
	static int32_t x274 = -3699;
	int32_t x275 = INT32_MIN;
	uint64_t t66 = UINT64_MAX;

	t66 = ((x273-(x274<x275))|x276);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x278 = 28U;
	static uint16_t x279 = 42U;
	int64_t x280 = INT64_MIN;
	static int64_t t67 = -1156944735496LL;

	t67 = ((x277-(x278<x279))|x280);

	if (t67 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = 7448383047164LL;
	static int16_t x283 = INT16_MAX;
	volatile int64_t x284 = 261719446109550006LL;

	t68 = ((x281-(x282<x283))|x284);

	if (t68 != -2634LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	uint64_t x286 = UINT64_MAX;
	static uint32_t x287 = 2U;
	volatile int16_t x288 = INT16_MAX;
	int64_t t69 = 485LL;

	t69 = ((x285-(x286<x287))|x288);

	if (t69 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x291 = INT8_MIN;
	uint32_t x292 = UINT32_MAX;
	static volatile uint32_t t70 = UINT32_MAX;

	t70 = ((x289-(x290<x291))|x292);

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MIN;
	uint32_t x294 = 29U;
	uint16_t x295 = 223U;
	static uint32_t x296 = 0U;
	static uint32_t t71 = 37953U;

	t71 = ((x293-(x294<x295))|x296);

	if (t71 != 4294934527U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x297 = INT16_MIN;
	uint8_t x298 = 1U;
	volatile int32_t x300 = -1;
	int32_t t72 = 27834;

	t72 = ((x297-(x298<x299))|x300);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MAX;
	static int8_t x303 = -1;
	volatile uint8_t x304 = 1U;
	static volatile int32_t t73 = -14;

	t73 = ((x301-(x302<x303))|x304);

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = UINT8_MAX;
	volatile uint8_t x311 = UINT8_MAX;
	volatile int32_t t74 = INT32_MAX;

	t74 = ((x309-(x310<x311))|x312);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x313 = 200U;
	volatile uint16_t x314 = 6U;
	volatile int32_t x315 = INT32_MIN;
	uint32_t x316 = 13157686U;
	static volatile uint32_t t75 = 1638U;

	t75 = ((x313-(x314<x315))|x316);

	if (t75 != 13157886U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = 30108LL;
	volatile uint8_t x319 = 17U;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t76 = -1902;

	t76 = ((x317-(x318<x319))|x320);

	if (t76 != -2147483393) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x322 = INT8_MAX;
	int16_t x323 = INT16_MIN;
	uint8_t x324 = UINT8_MAX;
	static volatile int32_t t77 = 5924;

	t77 = ((x321-(x322<x323))|x324);

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MAX;
	volatile int64_t x326 = -5562482077LL;
	int64_t x328 = -469035358832478LL;

	t78 = ((x325-(x326<x327))|x328);

	if (t78 != -469035358814210LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = -1LL;
	volatile int64_t x334 = -1LL;
	volatile int8_t x335 = -1;
	static int64_t t79 = 879651507LL;

	t79 = ((x333-(x334<x335))|x336);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = -1LL;
	uint64_t x338 = 933044822LLU;
	uint32_t x339 = UINT32_MAX;
	static uint32_t x340 = UINT32_MAX;
	volatile int64_t t80 = 1061240072301649270LL;

	t80 = ((x337-(x338<x339))|x340);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x341 = 32065353U;
	int16_t x342 = -1;
	static int64_t x344 = 44071063696513514LL;
	static volatile int64_t t81 = 1721LL;

	t81 = ((x341-(x342<x343))|x344);

	if (t81 != 44071063720124395LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = INT16_MAX;
	int32_t x346 = INT32_MIN;
	static volatile uint8_t x348 = 10U;
	volatile int32_t t82 = 590695045;

	t82 = ((x345-(x346<x347))|x348);

	if (t82 != 32766) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = -1LL;
	uint32_t x350 = UINT32_MAX;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = ((x349-(x350<x351))|x352);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x353 = INT16_MAX;
	uint16_t x354 = 1U;
	int16_t x356 = 300;
	static volatile int32_t t84 = 15353;

	t84 = ((x353-(x354<x355))|x356);

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = 163920323563LL;
	uint16_t x358 = UINT16_MAX;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = ((x357-(x358<x359))|x360);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x362 = -1LL;
	volatile uint32_t t86 = 34571U;

	t86 = ((x361-(x362<x363))|x364);

	if (t86 != 2165578445U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x365 = 305U;
	volatile int8_t x366 = INT8_MIN;
	uint32_t x367 = UINT32_MAX;
	volatile int64_t x368 = 18114582LL;
	int64_t t87 = 11636716661066LL;

	t87 = ((x365-(x366<x367))|x368);

	if (t87 != 18114870LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = -43823LL;
	int16_t x370 = INT16_MIN;
	volatile uint8_t x371 = 7U;
	int16_t x372 = INT16_MIN;
	int64_t t88 = 26409LL;

	t88 = ((x369-(x370<x371))|x372);

	if (t88 != -11056LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = 2031U;
	uint16_t x374 = UINT16_MAX;
	int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MAX;
	int32_t t89 = INT32_MAX;

	t89 = ((x373-(x374<x375))|x376);

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x377 = UINT16_MAX;
	uint32_t x378 = 71995259U;
	int8_t x379 = INT8_MIN;
	static volatile uint64_t x380 = UINT64_MAX;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = ((x377-(x378<x379))|x380);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = -1;
	static uint64_t x382 = 7LLU;
	int8_t x383 = -7;
	int16_t x384 = -1;
	static volatile int32_t t91 = -234912883;

	t91 = ((x381-(x382<x383))|x384);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x386 = 97;
	int64_t x387 = INT64_MIN;
	volatile int16_t x388 = -1;
	int32_t t92 = -516233;

	t92 = ((x385-(x386<x387))|x388);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = 0;
	int64_t x391 = -4334577318094607067LL;
	int64_t x392 = INT64_MIN;
	static int64_t t93 = INT64_MIN;

	t93 = ((x389-(x390<x391))|x392);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = INT16_MIN;
	uint64_t x394 = UINT64_MAX;
	int8_t x395 = INT8_MIN;
	uint32_t x396 = 44950U;
	volatile uint32_t t94 = 48U;

	t94 = ((x393-(x394<x395))|x396);

	if (t94 != 4294946710U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = -165;
	uint16_t x398 = 12U;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = UINT8_MAX;
	static volatile int32_t t95 = -236025941;

	t95 = ((x397-(x398<x399))|x400);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x401 = INT32_MIN;
	int64_t x403 = INT64_MIN;
	volatile uint32_t t96 = 60204U;

	t96 = ((x401-(x402<x403))|x404);

	if (t96 != 2147483651U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = 30;
	int64_t x406 = -235369613948015LL;
	volatile int32_t x407 = INT32_MIN;
	volatile int32_t x408 = INT32_MIN;
	int32_t t97 = -2;

	t97 = ((x405-(x406<x407))|x408);

	if (t97 != -2147483619) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x409 = 6063LLU;
	int8_t x410 = 1;
	static int64_t x411 = INT64_MIN;
	int32_t x412 = -5724;
	static uint64_t t98 = 658971909030070LLU;

	t98 = ((x409-(x410<x411))|x412);

	if (t98 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = INT8_MAX;
	volatile uint32_t t99 = 438U;

	t99 = ((x413-(x414<x415))|x416);

	if (t99 != 895U) { NG(); } else { ; }
	
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

