#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
volatile int32_t t0 = -1;
uint64_t x8 = 34LLU;
int32_t t6 = 474818;
uint64_t x32 = UINT64_MAX;
volatile int32_t t9 = INT32_MIN;
uint32_t x45 = 148U;
uint64_t x47 = UINT64_MAX;
volatile uint8_t x48 = 1U;
int16_t x51 = INT16_MIN;
volatile uint32_t t13 = 367U;
int64_t x66 = 273080121768LL;
static volatile uint64_t t16 = 305505827880278LLU;
volatile int32_t x71 = -1;
static int32_t t17 = -121990785;
static volatile int32_t x76 = INT32_MIN;
uint64_t x78 = 15956909505517831LLU;
int8_t x81 = 26;
static uint64_t x82 = 30599489LLU;
int8_t x83 = -1;
int64_t x85 = INT64_MIN;
int32_t x89 = INT32_MAX;
volatile int64_t t22 = 1LL;
int16_t x99 = INT16_MAX;
volatile uint16_t x102 = 4U;
int16_t x103 = INT16_MAX;
int32_t t28 = 961986193;
int16_t x125 = -1;
uint16_t x130 = UINT16_MAX;
int32_t x136 = -2611018;
uint16_t x138 = 7726U;
volatile int32_t t34 = -5777654;
uint64_t x152 = UINT64_MAX;
static int32_t x153 = INT32_MIN;
static uint32_t x156 = 966086113U;
static int16_t x157 = INT16_MIN;
int16_t x161 = INT16_MIN;
volatile int32_t t40 = -729597;
static int32_t x165 = INT32_MIN;
uint32_t t41 = 19094740U;
int32_t x169 = INT32_MIN;
int64_t x174 = INT64_MAX;
uint16_t x175 = UINT16_MAX;
volatile int16_t x179 = INT16_MIN;
volatile int32_t t45 = 24215;
uint8_t x189 = 123U;
volatile uint32_t x191 = UINT32_MAX;
uint16_t x194 = UINT16_MAX;
int32_t x195 = -2;
int32_t x197 = INT32_MAX;
static int32_t x205 = INT32_MIN;
volatile int32_t x207 = -1;
int32_t t52 = -116914306;
int64_t t54 = -12479064629968LL;
volatile int32_t x222 = INT32_MIN;
uint64_t x229 = 125963LLU;
static int64_t x236 = INT64_MIN;
uint8_t x242 = 14U;
int8_t x243 = INT8_MIN;
int8_t x248 = INT8_MIN;
int16_t x249 = -1;
uint32_t x258 = UINT32_MAX;
static int64_t x263 = -1LL;
int64_t x265 = INT64_MIN;
static int16_t x272 = 0;
volatile int32_t t67 = -83043844;
static int32_t x282 = 11969053;
static int32_t t70 = 247596145;
volatile uint64_t t72 = 30256429675874313LLU;
int32_t x300 = INT32_MAX;
uint8_t x302 = 13U;
int32_t t75 = -7;
uint8_t x305 = 108U;
int64_t x307 = INT64_MIN;
int8_t x308 = INT8_MAX;
volatile int32_t t76 = 3;
uint16_t x310 = 1U;
int64_t x312 = 2662431361679LL;
volatile int32_t t78 = 824383;
static int8_t x321 = -7;
int32_t t80 = 11871;
volatile uint8_t x334 = 25U;
uint16_t x336 = 1922U;
static int8_t x338 = INT8_MAX;
volatile int32_t t85 = 71796;
static uint32_t x348 = UINT32_MAX;
uint8_t x350 = 41U;
uint32_t x353 = 8517U;
int8_t x363 = 25;
int16_t x369 = 1;
int32_t x375 = INT32_MIN;
int32_t x380 = INT32_MIN;
uint16_t x382 = 11768U;


void f0(void) {
	uint8_t x2 = 1U;
	int8_t x3 = INT8_MIN;
	int8_t x4 = -31;

	t0 = ((x1<(x2<=x3))|x4);

	if (t0 != -31) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 0U;
	uint8_t x6 = 18U;
	static int64_t x7 = 7199024LL;
	static volatile uint64_t t1 = 307258528429LLU;

	t1 = ((x5<(x6<=x7))|x8);

	if (t1 != 35LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int16_t x10 = -502;
	int16_t x11 = INT16_MAX;
	int16_t x12 = -244;
	volatile int32_t t2 = 2;

	t2 = ((x9<(x10<=x11))|x12);

	if (t2 != -243) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	static uint8_t x14 = 5U;
	uint64_t x15 = 6LLU;
	volatile uint16_t x16 = 0U;
	int32_t t3 = -3300;

	t3 = ((x13<(x14<=x15))|x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	uint64_t x18 = 7623337852789398576LLU;
	static uint16_t x19 = 847U;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 1073106944;

	t4 = ((x17<(x18<=x19))|x20);

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 23U;
	uint8_t x22 = 27U;
	uint16_t x23 = UINT16_MAX;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 567;

	t5 = ((x21<(x22<=x23))|x24);

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static volatile int32_t x26 = INT32_MAX;
	volatile int8_t x27 = INT8_MIN;
	int8_t x28 = 1;

	t6 = ((x25<(x26<=x27))|x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 26LLU;
	uint16_t x30 = UINT16_MAX;
	int8_t x31 = INT8_MAX;
	uint64_t t7 = UINT64_MAX;

	t7 = ((x29<(x30<=x31))|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -1LL;
	volatile int32_t x34 = INT32_MIN;
	uint8_t x35 = 9U;
	int32_t x36 = 171;
	static volatile int32_t t8 = -30070;

	t8 = ((x33<(x34<=x35))|x36);

	if (t8 != 171) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MAX;
	int8_t x38 = 1;
	static uint8_t x39 = 4U;
	int32_t x40 = INT32_MIN;

	t9 = ((x37<(x38<=x39))|x40);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint16_t x42 = 1U;
	volatile int32_t x43 = INT32_MAX;
	static int64_t x44 = INT64_MIN;
	int64_t t10 = 59216497LL;

	t10 = ((x41<(x42<=x43))|x44);

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = 124;
	int32_t t11 = -10457;

	t11 = ((x45<(x46<=x47))|x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	uint8_t x50 = 1U;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = -771722374;

	t12 = ((x49<(x50<=x51))|x52);

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -54953028428LL;
	volatile int64_t x54 = INT64_MAX;
	int16_t x55 = INT16_MAX;
	uint32_t x56 = 10133U;

	t13 = ((x53<(x54<=x55))|x56);

	if (t13 != 10133U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	uint32_t x58 = 0U;
	static int16_t x59 = 1;
	int8_t x60 = -1;
	volatile int32_t t14 = -134134520;

	t14 = ((x57<(x58<=x59))|x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	uint32_t x62 = 9775U;
	static int16_t x63 = INT16_MIN;
	static int8_t x64 = INT8_MIN;
	int32_t t15 = -1084;

	t15 = ((x61<(x62<=x63))|x64);

	if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile uint16_t x67 = 5U;
	uint64_t x68 = 1938505430719541673LLU;

	t16 = ((x65<(x66<=x67))|x68);

	if (t16 != 1938505430719541673LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	int16_t x70 = 0;
	int16_t x72 = -1;

	t17 = ((x69<(x70<=x71))|x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	volatile int32_t x74 = -1;
	volatile int32_t x75 = 404300547;
	volatile int32_t t18 = -241841;

	t18 = ((x73<(x74<=x75))|x76);

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int64_t x79 = -1LL;
	int16_t x80 = INT16_MAX;
	static int32_t t19 = -335690;

	t19 = ((x77<(x78<=x79))|x80);

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x84 = INT32_MAX;
	static int32_t t20 = INT32_MAX;

	t20 = ((x81<(x82<=x83))|x84);

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	static int16_t x87 = -1;
	int32_t x88 = 60570;
	int32_t t21 = -7388002;

	t21 = ((x85<(x86<=x87))|x88);

	if (t21 != 60571) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x90 = 22647U;
	uint16_t x91 = 10U;
	int64_t x92 = -4070199850375185LL;

	t22 = ((x89<(x90<=x91))|x92);

	if (t22 != -4070199850375185LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint64_t x94 = UINT64_MAX;
	int8_t x95 = -1;
	static uint16_t x96 = 7493U;
	int32_t t23 = 253677853;

	t23 = ((x93<(x94<=x95))|x96);

	if (t23 != 7493) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 1U;
	static int16_t x98 = INT16_MIN;
	int16_t x100 = -1;
	volatile int32_t t24 = 0;

	t24 = ((x97<(x98<=x99))|x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int16_t x104 = -120;
	volatile int32_t t25 = 31950413;

	t25 = ((x101<(x102<=x103))|x104);

	if (t25 != -119) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -543;
	volatile int64_t x106 = INT64_MIN;
	int64_t x107 = -1LL;
	static uint16_t x108 = 1U;
	volatile int32_t t26 = -1031507863;

	t26 = ((x105<(x106<=x107))|x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = -1;
	int64_t x110 = INT64_MAX;
	static volatile int32_t x111 = -1;
	static int64_t x112 = -2659283480079LL;
	volatile int64_t t27 = -127683LL;

	t27 = ((x109<(x110<=x111))|x112);

	if (t27 != -2659283480079LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = 23;
	static int8_t x114 = 1;
	uint64_t x115 = 4497815432891469LLU;
	int8_t x116 = INT8_MIN;

	t28 = ((x113<(x114<=x115))|x116);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int8_t x118 = INT8_MAX;
	int16_t x119 = -1;
	int8_t x120 = -1;
	volatile int32_t t29 = 1150830;

	t29 = ((x117<(x118<=x119))|x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = 12U;
	volatile int64_t x122 = INT64_MIN;
	uint8_t x123 = 5U;
	volatile uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = -481;

	t30 = ((x121<(x122<=x123))|x124);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = 7260133;
	int8_t x127 = INT8_MIN;
	uint64_t x128 = 129360081480675LLU;
	uint64_t t31 = 44LLU;

	t31 = ((x125<(x126<=x127))|x128);

	if (t31 != 129360081480675LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int32_t x131 = 15839471;
	int64_t x132 = INT64_MIN;
	int64_t t32 = 1379543833352LL;

	t32 = ((x129<(x130<=x131))|x132);

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int64_t x134 = INT64_MAX;
	volatile int32_t x135 = -1;
	int32_t t33 = 1036;

	t33 = ((x133<(x134<=x135))|x136);

	if (t33 != -2611017) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MAX;
	int8_t x139 = INT8_MAX;
	int16_t x140 = INT16_MIN;

	t34 = ((x137<(x138<=x139))|x140);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -18LL;
	uint32_t x142 = 946U;
	int16_t x143 = INT16_MIN;
	volatile uint16_t x144 = UINT16_MAX;
	volatile int32_t t35 = 0;

	t35 = ((x141<(x142<=x143))|x144);

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = UINT64_MAX;
	int32_t x146 = 15662;
	static int32_t x147 = INT32_MIN;
	int32_t x148 = -1;
	int32_t t36 = 15156;

	t36 = ((x145<(x146<=x147))|x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	int64_t x150 = 101LL;
	volatile uint64_t x151 = 22707040099166LLU;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = ((x149<(x150<=x151))|x152);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = INT16_MAX;
	static int8_t x155 = INT8_MIN;
	volatile uint32_t t38 = 84U;

	t38 = ((x153<(x154<=x155))|x156);

	if (t38 != 966086113U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = UINT8_MAX;
	volatile int32_t x159 = -17;
	static int64_t x160 = INT64_MIN;
	volatile int64_t t39 = 73367193076281LL;

	t39 = ((x157<(x158<=x159))|x160);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MIN;
	int16_t x163 = INT16_MIN;
	volatile uint8_t x164 = 2U;

	t40 = ((x161<(x162<=x163))|x164);

	if (t40 != 3) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = 21306;
	volatile uint16_t x167 = 0U;
	uint32_t x168 = 1234U;

	t41 = ((x165<(x166<=x167))|x168);

	if (t41 != 1235U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x170 = UINT64_MAX;
	int32_t x171 = INT32_MAX;
	int64_t x172 = INT64_MIN;
	static volatile int64_t t42 = -696940258042LL;

	t42 = ((x169<(x170<=x171))|x172);

	if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	static int64_t x176 = INT64_MIN;
	int64_t t43 = 0LL;

	t43 = ((x173<(x174<=x175))|x176);

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	static int8_t x178 = 7;
	uint32_t x180 = 1U;
	static volatile uint32_t t44 = 1871711115U;

	t44 = ((x177<(x178<=x179))|x180);

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = -1;
	static int16_t x182 = INT16_MIN;
	int16_t x183 = -61;
	uint8_t x184 = UINT8_MAX;

	t45 = ((x181<(x182<=x183))|x184);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	uint16_t x186 = 190U;
	volatile int8_t x187 = -1;
	static uint64_t x188 = 1534296726167961867LLU;
	volatile uint64_t t46 = 1824LLU;

	t46 = ((x185<(x186<=x187))|x188);

	if (t46 != 1534296726167961867LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = 4037;
	static int16_t x192 = INT16_MIN;
	int32_t t47 = 11515812;

	t47 = ((x189<(x190<=x191))|x192);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	static volatile uint64_t x196 = 1LLU;
	uint64_t t48 = 286318255596779241LLU;

	t48 = ((x193<(x194<=x195))|x196);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x198 = -6LL;
	static int32_t x199 = -1;
	uint8_t x200 = UINT8_MAX;
	int32_t t49 = -3;

	t49 = ((x197<(x198<=x199))|x200);

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	int64_t x202 = INT64_MAX;
	static int64_t x203 = -16583034225884LL;
	uint32_t x204 = 380070632U;
	volatile uint32_t t50 = 24798251U;

	t50 = ((x201<(x202<=x203))|x204);

	if (t50 != 380070633U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = INT16_MIN;
	uint16_t x208 = 51U;
	int32_t t51 = 7;

	t51 = ((x205<(x206<=x207))|x208);

	if (t51 != 51) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int16_t x210 = -1;
	volatile int8_t x211 = INT8_MIN;
	int8_t x212 = -1;

	t52 = ((x209<(x210<=x211))|x212);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	uint8_t x214 = 7U;
	uint32_t x215 = UINT32_MAX;
	uint8_t x216 = UINT8_MAX;
	static volatile int32_t t53 = -1;

	t53 = ((x213<(x214<=x215))|x216);

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	uint32_t x218 = 13701U;
	static int64_t x219 = -142LL;
	int64_t x220 = 16082680864468712LL;

	t54 = ((x217<(x218<=x219))|x220);

	if (t54 != 16082680864468713LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	volatile int8_t x223 = 2;
	static uint16_t x224 = 1U;
	static int32_t t55 = -164;

	t55 = ((x221<(x222<=x223))|x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x225 = 6151712397989LLU;
	int16_t x226 = -1;
	int8_t x227 = INT8_MAX;
	int64_t x228 = INT64_MIN;
	int64_t t56 = INT64_MIN;

	t56 = ((x225<(x226<=x227))|x228);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x230 = 10177;
	int32_t x231 = -8092755;
	static int8_t x232 = INT8_MAX;
	volatile int32_t t57 = 0;

	t57 = ((x229<(x230<=x231))|x232);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = UINT64_MAX;
	int32_t x234 = -109;
	uint32_t x235 = 1U;
	volatile int64_t t58 = INT64_MIN;

	t58 = ((x233<(x234<=x235))|x236);

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	uint32_t x238 = 227U;
	int32_t x239 = INT32_MAX;
	static uint16_t x240 = UINT16_MAX;
	volatile int32_t t59 = -30958;

	t59 = ((x237<(x238<=x239))|x240);

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = UINT8_MAX;
	volatile int64_t x244 = INT64_MAX;
	volatile int64_t t60 = INT64_MAX;

	t60 = ((x241<(x242<=x243))|x244);

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	volatile uint64_t x246 = 24LLU;
	volatile int16_t x247 = INT16_MIN;
	int32_t t61 = 3961;

	t61 = ((x245<(x246<=x247))|x248);

	if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x250 = -957;
	uint8_t x251 = 14U;
	int16_t x252 = INT16_MAX;
	static int32_t t62 = 218704;

	t62 = ((x249<(x250<=x251))|x252);

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 1782699139466607196LLU;
	volatile int8_t x254 = INT8_MIN;
	int32_t x255 = -1418360;
	int64_t x256 = INT64_MIN;
	volatile int64_t t63 = INT64_MIN;

	t63 = ((x253<(x254<=x255))|x256);

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -50LL;
	int64_t x259 = 102508700LL;
	volatile int64_t x260 = -1LL;
	int64_t t64 = 109628834277732882LL;

	t64 = ((x257<(x258<=x259))|x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = -1;
	static volatile int64_t x262 = -179072541LL;
	int32_t x264 = INT32_MIN;
	int32_t t65 = 109864683;

	t65 = ((x261<(x262<=x263))|x264);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = INT16_MAX;
	int64_t x267 = INT64_MIN;
	int8_t x268 = INT8_MAX;
	int32_t t66 = 1090662;

	t66 = ((x265<(x266<=x267))|x268);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 321999U;
	static volatile uint32_t x270 = UINT32_MAX;
	int8_t x271 = -1;

	t67 = ((x269<(x270<=x271))|x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	int8_t x274 = -1;
	volatile uint32_t x275 = 11U;
	int64_t x276 = -1LL;
	volatile int64_t t68 = 103544394733570466LL;

	t68 = ((x273<(x274<=x275))|x276);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 0;
	int8_t x278 = INT8_MIN;
	int64_t x279 = 6384387854972LL;
	volatile uint8_t x280 = 1U;
	volatile int32_t t69 = 327427;

	t69 = ((x277<(x278<=x279))|x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	volatile int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MIN;

	t70 = ((x281<(x282<=x283))|x284);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = 1;
	int16_t x286 = 0;
	int16_t x287 = -1;
	int8_t x288 = -1;
	volatile int32_t t71 = 711561065;

	t71 = ((x285<(x286<=x287))|x288);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = -50;
	int8_t x290 = -1;
	int64_t x291 = -70000495974401LL;
	uint64_t x292 = 5183730758947126LLU;

	t72 = ((x289<(x290<=x291))|x292);

	if (t72 != 5183730758947127LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 6;
	static uint16_t x294 = UINT16_MAX;
	uint64_t x295 = 852933062860LLU;
	int8_t x296 = INT8_MIN;
	int32_t t73 = -1;

	t73 = ((x293<(x294<=x295))|x296);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	uint64_t x298 = UINT64_MAX;
	volatile uint16_t x299 = 324U;
	static int32_t t74 = INT32_MAX;

	t74 = ((x297<(x298<=x299))|x300);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -28;
	volatile uint32_t x303 = 723965U;
	static int32_t x304 = -742341;

	t75 = ((x301<(x302<=x303))|x304);

	if (t75 != -742341) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = -38;

	t76 = ((x305<(x306<=x307))|x308);

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 31U;
	uint8_t x311 = 27U;
	int64_t t77 = 26555LL;

	t77 = ((x309<(x310<=x311))|x312);

	if (t77 != 2662431361679LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = -1;
	volatile int64_t x314 = 61680528LL;
	int8_t x315 = -1;
	int32_t x316 = INT32_MIN;

	t78 = ((x313<(x314<=x315))|x316);

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -1;
	int32_t x318 = 436;
	uint64_t x319 = UINT64_MAX;
	uint64_t x320 = 616725978LLU;
	uint64_t t79 = 244985LLU;

	t79 = ((x317<(x318<=x319))|x320);

	if (t79 != 616725979LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x322 = 3LLU;
	volatile int8_t x323 = -1;
	int8_t x324 = INT8_MAX;

	t80 = ((x321<(x322<=x323))|x324);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 5;
	static int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MIN;
	static int16_t x328 = 14495;
	int32_t t81 = 3;

	t81 = ((x325<(x326<=x327))|x328);

	if (t81 != 14495) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = UINT16_MAX;
	int64_t x330 = INT64_MAX;
	int32_t x331 = INT32_MIN;
	int32_t x332 = INT32_MIN;
	int32_t t82 = INT32_MIN;

	t82 = ((x329<(x330<=x331))|x332);

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = -30;
	int8_t x335 = -1;
	volatile int32_t t83 = 1524;

	t83 = ((x333<(x334<=x335))|x336);

	if (t83 != 1923) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = -22LL;
	static int16_t x339 = INT16_MAX;
	static volatile uint16_t x340 = 882U;
	int32_t t84 = -257505351;

	t84 = ((x337<(x338<=x339))|x340);

	if (t84 != 883) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 7720U;
	int32_t x342 = 2181;
	static uint64_t x343 = 2LLU;
	int16_t x344 = INT16_MIN;

	t85 = ((x341<(x342<=x343))|x344);

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 15U;
	int16_t x346 = 18;
	uint64_t x347 = 111683869890LLU;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = ((x345<(x346<=x347))|x348);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -25;
	uint64_t x351 = 367602336009913LLU;
	uint16_t x352 = UINT16_MAX;
	int32_t t87 = 125866304;

	t87 = ((x349<(x350<=x351))|x352);

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x354 = INT64_MAX;
	static int8_t x355 = INT8_MIN;
	int8_t x356 = 1;
	volatile int32_t t88 = 308;

	t88 = ((x353<(x354<=x355))|x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = -1;
	static int16_t x358 = -1;
	uint8_t x359 = 76U;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 119;

	t89 = ((x357<(x358<=x359))|x360);

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 26341896059LLU;
	int8_t x362 = INT8_MIN;
	int8_t x364 = -1;
	volatile int32_t t90 = 12511;

	t90 = ((x361<(x362<=x363))|x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x365 = 15382786LL;
	volatile uint16_t x366 = UINT16_MAX;
	int8_t x367 = INT8_MIN;
	int64_t x368 = INT64_MAX;
	int64_t t91 = INT64_MAX;

	t91 = ((x365<(x366<=x367))|x368);

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = -1LL;
	uint32_t x371 = 281508U;
	int16_t x372 = 118;
	int32_t t92 = 665;

	t92 = ((x369<(x370<=x371))|x372);

	if (t92 != 118) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 0;
	volatile uint64_t x374 = UINT64_MAX;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = INT32_MIN;

	t93 = ((x373<(x374<=x375))|x376);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 26372763U;
	int8_t x378 = INT8_MIN;
	int16_t x379 = -1;
	volatile int32_t t94 = INT32_MIN;

	t94 = ((x377<(x378<=x379))|x380);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	int16_t x383 = INT16_MAX;
	static int8_t x384 = -2;
	volatile int32_t t95 = 548477;

	t95 = ((x381<(x382<=x383))|x384);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 13U;
	int16_t x386 = INT16_MIN;
	volatile uint16_t x387 = 3U;
	int64_t x388 = -1LL;
	volatile int64_t t96 = -22762605883LL;

	t96 = ((x385<(x386<=x387))|x388);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	volatile int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MAX;
	volatile int8_t x392 = -1;
	int32_t t97 = 190288;

	t97 = ((x389<(x390<=x391))|x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MIN;
	int64_t x394 = 0LL;
	uint32_t x395 = 1954078U;
	volatile int8_t x396 = 24;
	static int32_t t98 = -111;

	t98 = ((x393<(x394<=x395))|x396);

	if (t98 != 25) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	static int32_t x398 = 212486;
	uint16_t x399 = 37U;
	int32_t x400 = 216190;
	volatile int32_t t99 = 0;

	t99 = ((x397<(x398<=x399))|x400);

	if (t99 != 216191) { NG(); } else { ; }
	
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

