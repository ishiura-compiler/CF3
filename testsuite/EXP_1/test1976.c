#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
uint16_t x10 = UINT16_MAX;
int16_t x24 = -1;
volatile int32_t x29 = -1;
static int64_t x31 = -1LL;
uint32_t x32 = 1501492394U;
int8_t x33 = 3;
volatile int64_t x41 = 52038042097LL;
int32_t x45 = INT32_MIN;
volatile int16_t x46 = INT16_MAX;
int32_t t11 = -268;
static int64_t x53 = INT64_MIN;
static int32_t t13 = 103;
static uint16_t x62 = 39U;
uint64_t x64 = 254817LLU;
static volatile int32_t x66 = 1;
volatile uint16_t x67 = 12U;
volatile int32_t t18 = 1493;
static volatile int32_t x77 = 181;
int8_t x90 = -1;
uint16_t x96 = UINT16_MAX;
static volatile int32_t t24 = -363;
static int16_t x103 = -1;
volatile int16_t x107 = 217;
uint32_t x125 = 0U;
uint32_t t31 = UINT32_MAX;
static uint16_t x131 = UINT16_MAX;
volatile int32_t t32 = -1959145;
static int32_t t36 = -33476820;
volatile uint16_t x149 = UINT16_MAX;
uint16_t x158 = 0U;
volatile int32_t t39 = 15;
int16_t x161 = 1;
static int64_t t41 = -426626623LL;
static uint64_t x171 = 45961771261LLU;
int16_t x176 = INT16_MIN;
int8_t x178 = INT8_MIN;
uint8_t x182 = 29U;
int32_t x185 = INT32_MIN;
static uint8_t x188 = UINT8_MAX;
uint16_t x194 = 19U;
int16_t x196 = 27;
int8_t x197 = INT8_MIN;
static int64_t x204 = INT64_MIN;
volatile uint8_t x205 = 11U;
static volatile int32_t t51 = 5649;
int16_t x214 = INT16_MIN;
int8_t x223 = INT8_MAX;
uint16_t x226 = UINT16_MAX;
int32_t t56 = INT32_MIN;
volatile int16_t x232 = -1;
int64_t x236 = INT64_MIN;
uint32_t x237 = UINT32_MAX;
volatile int64_t x241 = INT64_MIN;
volatile int32_t x253 = INT32_MIN;
static int8_t x264 = -1;
int32_t t67 = 195;
static int16_t x273 = INT16_MAX;
uint32_t t68 = UINT32_MAX;
int16_t x277 = INT16_MIN;
uint8_t x284 = 0U;
int8_t x286 = -1;
uint32_t x287 = UINT32_MAX;
uint64_t x290 = 2LLU;
volatile int32_t t72 = 763072;
static int32_t t73 = 40276;
static int8_t x297 = 2;
uint32_t t75 = UINT32_MAX;
int32_t x305 = -646059;
volatile int8_t x306 = -1;
int16_t x309 = 144;
int16_t x313 = -3;
uint64_t x314 = UINT64_MAX;
uint16_t x316 = 20220U;
int16_t x317 = INT16_MIN;
int32_t x319 = INT32_MAX;
uint16_t x321 = UINT16_MAX;
int64_t x331 = INT64_MIN;
uint64_t x335 = 209891848LLU;
int64_t x336 = INT64_MAX;
volatile int64_t t83 = INT64_MAX;
int8_t x350 = INT8_MIN;
uint32_t t87 = 87237781U;
static uint32_t x353 = 36U;
int64_t x359 = -83LL;
static volatile int32_t t89 = -56299;
uint16_t x362 = 1U;
volatile int32_t t90 = 57;
int16_t x376 = -353;
static uint64_t x377 = UINT64_MAX;
int64_t x380 = INT64_MIN;
volatile int64_t t94 = INT64_MIN;
int16_t x381 = -50;
volatile int32_t t96 = -891727;
uint16_t x390 = UINT16_MAX;
uint16_t x393 = 1U;


void f0(void) {
	int16_t x2 = -1;
	int32_t x3 = INT32_MIN;
	int16_t x4 = 0;
	int32_t t0 = -82379;

	t0 = (((x1|x2)<x3)^x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	static int32_t x6 = INT32_MIN;
	int16_t x7 = -1;
	int64_t x8 = -1LL;
	volatile int64_t t1 = -41040825LL;

	t1 = (((x5|x6)<x7)^x8);

	if (t1 != -2LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1722424;
	volatile int64_t x11 = INT64_MIN;
	int8_t x12 = -1;
	volatile int32_t t2 = -3;

	t2 = (((x9|x10)<x11)^x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 7U;
	int32_t x14 = -1;
	static uint16_t x15 = UINT16_MAX;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = 146207341LL;

	t3 = (((x13|x14)<x15)^x16);

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	static int32_t x18 = INT32_MIN;
	int32_t x19 = 27087;
	int8_t x20 = INT8_MAX;
	int32_t t4 = 201926054;

	t4 = (((x17|x18)<x19)^x20);

	if (t4 != 126) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	static volatile int32_t x22 = INT32_MIN;
	volatile int8_t x23 = -1;
	volatile int32_t t5 = 243935832;

	t5 = (((x21|x22)<x23)^x24);

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 15930723923LLU;
	uint8_t x26 = 1U;
	uint8_t x27 = 117U;
	volatile int8_t x28 = INT8_MIN;
	int32_t t6 = -1672185;

	t6 = (((x25|x26)<x27)^x28);

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x30 = 76U;
	volatile uint32_t t7 = 7928U;

	t7 = (((x29|x30)<x31)^x32);

	if (t7 != 1501492394U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x34 = 48U;
	volatile uint64_t x35 = 0LLU;
	volatile int16_t x36 = 17;
	volatile int32_t t8 = -16124;

	t8 = (((x33|x34)<x35)^x36);

	if (t8 != 17) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -93;
	int64_t x38 = -37232569489LL;
	volatile int8_t x39 = INT8_MAX;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 4729828;

	t9 = (((x37|x38)<x39)^x40);

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x42 = UINT64_MAX;
	static volatile uint64_t x43 = 110LLU;
	static int64_t x44 = INT64_MIN;
	volatile int64_t t10 = INT64_MIN;

	t10 = (((x41|x42)<x43)^x44);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x47 = 231395039227955926LL;
	static uint16_t x48 = 22493U;

	t11 = (((x45|x46)<x47)^x48);

	if (t11 != 22492) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint16_t x50 = UINT16_MAX;
	int8_t x51 = 27;
	int64_t x52 = 202498319LL;
	volatile int64_t t12 = -1317130103LL;

	t12 = (((x49|x50)<x51)^x52);

	if (t12 != 202498318LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x54 = -1LL;
	uint32_t x55 = UINT32_MAX;
	int8_t x56 = INT8_MAX;

	t13 = (((x53|x54)<x55)^x56);

	if (t13 != 126) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = -2981364558302761LL;
	int32_t x58 = -1;
	volatile uint32_t x59 = UINT32_MAX;
	int16_t x60 = INT16_MAX;
	static int32_t t14 = -300812083;

	t14 = (((x57|x58)<x59)^x60);

	if (t14 != 32766) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -419;
	volatile uint64_t x63 = UINT64_MAX;
	volatile uint64_t t15 = 26404LLU;

	t15 = (((x61|x62)<x63)^x64);

	if (t15 != 254816LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MAX;
	volatile uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = -22595;

	t16 = (((x65|x66)<x67)^x68);

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -1;
	static int16_t x70 = -1;
	uint8_t x71 = UINT8_MAX;
	static uint64_t x72 = UINT64_MAX;
	uint64_t t17 = 823616LLU;

	t17 = (((x69|x70)<x71)^x72);

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 6143U;
	int32_t x74 = 3526511;
	int64_t x75 = INT64_MAX;
	uint16_t x76 = 176U;

	t18 = (((x73|x74)<x75)^x76);

	if (t18 != 177) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = UINT32_MAX;
	volatile uint32_t x79 = 6092047U;
	static int64_t x80 = -1LL;
	int64_t t19 = -13854292LL;

	t19 = (((x77|x78)<x79)^x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -30;
	int32_t x82 = -1;
	int32_t x83 = INT32_MAX;
	uint64_t x84 = 121097195527552LLU;
	static uint64_t t20 = 2129LLU;

	t20 = (((x81|x82)<x83)^x84);

	if (t20 != 121097195527553LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	static int8_t x86 = -1;
	static uint32_t x87 = UINT32_MAX;
	int8_t x88 = INT8_MAX;
	int32_t t21 = -487;

	t21 = (((x85|x86)<x87)^x88);

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = 3;
	static volatile uint8_t x91 = 25U;
	uint64_t x92 = 234592774445LLU;
	static uint64_t t22 = 1191050628031LLU;

	t22 = (((x89|x90)<x91)^x92);

	if (t22 != 234592774444LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -23594LL;
	static uint16_t x94 = 10U;
	volatile int8_t x95 = INT8_MAX;
	int32_t t23 = 199;

	t23 = (((x93|x94)<x95)^x96);

	if (t23 != 65534) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 420;
	uint64_t x98 = 1LLU;
	volatile int16_t x99 = 2;
	uint16_t x100 = 1U;

	t24 = (((x97|x98)<x99)^x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	volatile uint8_t x102 = 0U;
	static int32_t x104 = 0;
	int32_t t25 = -43;

	t25 = (((x101|x102)<x103)^x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 29U;
	int32_t x106 = INT32_MAX;
	static uint32_t x108 = UINT32_MAX;
	volatile uint32_t t26 = UINT32_MAX;

	t26 = (((x105|x106)<x107)^x108);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x110 = INT8_MIN;
	uint32_t x111 = UINT32_MAX;
	static volatile int8_t x112 = INT8_MAX;
	volatile int32_t t27 = -3108;

	t27 = (((x109|x110)<x111)^x112);

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 1;
	int32_t x114 = 806444;
	int8_t x115 = 6;
	int32_t x116 = INT32_MIN;
	static int32_t t28 = INT32_MIN;

	t28 = (((x113|x114)<x115)^x116);

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	int16_t x118 = 2;
	uint32_t x119 = 2044769011U;
	volatile int64_t x120 = INT64_MIN;
	volatile int64_t t29 = INT64_MIN;

	t29 = (((x117|x118)<x119)^x120);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 1231982U;
	uint32_t x122 = 20U;
	int16_t x123 = INT16_MIN;
	uint64_t x124 = 6914477741LLU;
	uint64_t t30 = 8850001994074802033LLU;

	t30 = (((x121|x122)<x123)^x124);

	if (t30 != 6914477740LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x126 = -26237;
	static int16_t x127 = INT16_MIN;
	static uint32_t x128 = UINT32_MAX;

	t31 = (((x125|x126)<x127)^x128);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static int8_t x130 = INT8_MAX;
	int16_t x132 = INT16_MIN;

	t32 = (((x129|x130)<x131)^x132);

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -29834LL;
	uint16_t x134 = 1527U;
	uint8_t x135 = 75U;
	volatile int32_t x136 = -7919;
	volatile int32_t t33 = -46;

	t33 = (((x133|x134)<x135)^x136);

	if (t33 != -7920) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	static uint64_t x138 = 159186LLU;
	volatile int64_t x139 = -41413909LL;
	uint8_t x140 = 1U;
	volatile int32_t t34 = 10046;

	t34 = (((x137|x138)<x139)^x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 80809461U;
	int16_t x142 = -1;
	int64_t x143 = -416394727020736LL;
	uint64_t x144 = 13582762839622213LLU;
	volatile uint64_t t35 = 71LLU;

	t35 = (((x141|x142)<x143)^x144);

	if (t35 != 13582762839622213LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 170225;
	uint16_t x146 = UINT16_MAX;
	volatile int64_t x147 = INT64_MAX;
	int8_t x148 = -3;

	t36 = (((x145|x146)<x147)^x148);

	if (t36 != -4) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MIN;
	int16_t x151 = 445;
	int64_t x152 = 14046308955066181LL;
	int64_t t37 = 5560230LL;

	t37 = (((x149|x150)<x151)^x152);

	if (t37 != 14046308955066180LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MIN;
	static int8_t x154 = -37;
	static int32_t x155 = -6;
	int32_t x156 = INT32_MAX;
	int32_t t38 = -148;

	t38 = (((x153|x154)<x155)^x156);

	if (t38 != 2147483646) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = 17U;
	volatile uint64_t x159 = UINT64_MAX;
	int32_t x160 = INT32_MIN;

	t39 = (((x157|x158)<x159)^x160);

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x162 = INT16_MIN;
	int8_t x163 = 15;
	static int8_t x164 = INT8_MAX;
	int32_t t40 = -909;

	t40 = (((x161|x162)<x163)^x164);

	if (t40 != 126) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int32_t x166 = INT32_MAX;
	volatile uint16_t x167 = UINT16_MAX;
	int64_t x168 = INT64_MIN;

	t41 = (((x165|x166)<x167)^x168);

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int32_t x170 = 6381;
	uint16_t x172 = 12U;
	volatile int32_t t42 = 22566;

	t42 = (((x169|x170)<x171)^x172);

	if (t42 != 12) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -32035;
	static int32_t x174 = INT32_MAX;
	uint32_t x175 = 3570632U;
	static int32_t t43 = -3;

	t43 = (((x173|x174)<x175)^x176);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	volatile int16_t x179 = 0;
	volatile uint16_t x180 = 51U;
	volatile int32_t t44 = -251568279;

	t44 = (((x177|x178)<x179)^x180);

	if (t44 != 50) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x181 = UINT32_MAX;
	uint64_t x183 = UINT64_MAX;
	static uint32_t x184 = UINT32_MAX;
	static uint32_t t45 = 3U;

	t45 = (((x181|x182)<x183)^x184);

	if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = INT16_MIN;
	int8_t x187 = INT8_MIN;
	int32_t t46 = 15944;

	t46 = (((x185|x186)<x187)^x188);

	if (t46 != 254) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = -3365;
	int8_t x190 = INT8_MAX;
	int16_t x191 = INT16_MAX;
	int32_t x192 = INT32_MIN;
	volatile int32_t t47 = -38;

	t47 = (((x189|x190)<x191)^x192);

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	uint64_t x195 = 134013286910785146LLU;
	volatile int32_t t48 = -28;

	t48 = (((x193|x194)<x195)^x196);

	if (t48 != 26) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = 7528140;
	int8_t x199 = INT8_MIN;
	uint32_t x200 = 1U;
	volatile uint32_t t49 = 4379281U;

	t49 = (((x197|x198)<x199)^x200);

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	volatile int32_t x202 = INT32_MIN;
	static volatile uint16_t x203 = 16443U;
	static volatile int64_t t50 = 33927726825LL;

	t50 = (((x201|x202)<x203)^x204);

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = INT8_MIN;
	volatile int8_t x207 = INT8_MIN;
	int8_t x208 = INT8_MIN;

	t51 = (((x205|x206)<x207)^x208);

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = INT32_MIN;
	static int8_t x210 = 46;
	int64_t x211 = INT64_MAX;
	volatile int64_t x212 = INT64_MIN;
	static int64_t t52 = -2062199LL;

	t52 = (((x209|x210)<x211)^x212);

	if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	volatile int32_t x215 = INT32_MIN;
	int8_t x216 = INT8_MIN;
	int32_t t53 = 1;

	t53 = (((x213|x214)<x215)^x216);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	int32_t x218 = -1;
	static int8_t x219 = INT8_MIN;
	int64_t x220 = -12955LL;
	static volatile int64_t t54 = 104252LL;

	t54 = (((x217|x218)<x219)^x220);

	if (t54 != -12955LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 1549;
	int8_t x222 = -18;
	static uint64_t x224 = UINT64_MAX;
	uint64_t t55 = 289785172446434445LLU;

	t55 = (((x221|x222)<x223)^x224);

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	int16_t x227 = -1;
	volatile int32_t x228 = INT32_MIN;

	t56 = (((x225|x226)<x227)^x228);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x229 = UINT16_MAX;
	int16_t x230 = -67;
	int8_t x231 = INT8_MAX;
	int32_t t57 = -3801;

	t57 = (((x229|x230)<x231)^x232);

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int32_t x234 = 921;
	int64_t x235 = INT64_MIN;
	int64_t t58 = INT64_MIN;

	t58 = (((x233|x234)<x235)^x236);

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = -12931772774LL;
	volatile uint64_t x239 = 40098079LLU;
	int8_t x240 = -1;
	int32_t t59 = 7525126;

	t59 = (((x237|x238)<x239)^x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x242 = UINT8_MAX;
	int32_t x243 = INT32_MIN;
	uint16_t x244 = 2U;
	int32_t t60 = 1869945;

	t60 = (((x241|x242)<x243)^x244);

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x245 = UINT8_MAX;
	int16_t x246 = -20;
	volatile int32_t x247 = INT32_MAX;
	volatile int32_t x248 = -1;
	int32_t t61 = 74051602;

	t61 = (((x245|x246)<x247)^x248);

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 203836036U;
	int8_t x250 = 7;
	int8_t x251 = INT8_MIN;
	uint8_t x252 = 13U;
	volatile int32_t t62 = 478457431;

	t62 = (((x249|x250)<x251)^x252);

	if (t62 != 12) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x254 = -1;
	volatile int32_t x255 = -1;
	static volatile int32_t x256 = INT32_MAX;
	volatile int32_t t63 = INT32_MAX;

	t63 = (((x253|x254)<x255)^x256);

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	static int8_t x258 = INT8_MIN;
	volatile int8_t x259 = 0;
	volatile int64_t x260 = 23056LL;
	volatile int64_t t64 = -34094663805LL;

	t64 = (((x257|x258)<x259)^x260);

	if (t64 != 23057LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 1144U;
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = 0;
	volatile int32_t t65 = -50277;

	t65 = (((x261|x262)<x263)^x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 358069788022093LLU;
	volatile int8_t x266 = INT8_MIN;
	static int8_t x267 = INT8_MAX;
	uint32_t x268 = 280616977U;
	volatile uint32_t t66 = 875U;

	t66 = (((x265|x266)<x267)^x268);

	if (t66 != 280616977U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 10061U;
	int64_t x270 = -18340097071291LL;
	int32_t x271 = 4466;
	int16_t x272 = -54;

	t67 = (((x269|x270)<x271)^x272);

	if (t67 != -53) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x274 = INT8_MIN;
	static int64_t x275 = INT64_MIN;
	uint32_t x276 = UINT32_MAX;

	t68 = (((x273|x274)<x275)^x276);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = INT64_MIN;
	static uint16_t x279 = 869U;
	uint8_t x280 = 2U;
	int32_t t69 = 13;

	t69 = (((x277|x278)<x279)^x280);

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = -1;
	int16_t x282 = 1;
	volatile int32_t x283 = -1;
	volatile int32_t t70 = 2970137;

	t70 = (((x281|x282)<x283)^x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int16_t x288 = INT16_MAX;
	volatile int32_t t71 = -40;

	t71 = (((x285|x286)<x287)^x288);

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x289 = 15125U;
	static uint32_t x291 = 46752664U;
	uint8_t x292 = UINT8_MAX;

	t72 = (((x289|x290)<x291)^x292);

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MIN;
	int64_t x294 = 16764032883001594LL;
	int16_t x295 = INT16_MAX;
	static uint8_t x296 = 2U;

	t73 = (((x293|x294)<x295)^x296);

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x298 = 271589787180LL;
	volatile int64_t x299 = -1LL;
	int64_t x300 = -12887718074980193LL;
	int64_t t74 = -886039703312LL;

	t74 = (((x297|x298)<x299)^x300);

	if (t74 != -12887718074980193LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MAX;
	int32_t x302 = INT32_MIN;
	int32_t x303 = INT32_MIN;
	uint32_t x304 = UINT32_MAX;

	t75 = (((x301|x302)<x303)^x304);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x307 = 8340426789312207LLU;
	volatile uint64_t x308 = 76414891971846LLU;
	uint64_t t76 = 7865161763757465107LLU;

	t76 = (((x305|x306)<x307)^x308);

	if (t76 != 76414891971846LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = INT16_MIN;
	int32_t x311 = INT32_MIN;
	static int8_t x312 = -1;
	volatile int32_t t77 = -21569;

	t77 = (((x309|x310)<x311)^x312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x315 = 36U;
	volatile int32_t t78 = -5636580;

	t78 = (((x313|x314)<x315)^x316);

	if (t78 != 20220) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x318 = INT32_MIN;
	int64_t x320 = -1LL;
	int64_t t79 = 1566703754239799LL;

	t79 = (((x317|x318)<x319)^x320);

	if (t79 != -2LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x322 = 29U;
	int32_t x323 = 13;
	int32_t x324 = 31588457;
	volatile int32_t t80 = 435628592;

	t80 = (((x321|x322)<x323)^x324);

	if (t80 != 31588457) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = -1;
	int8_t x327 = 0;
	uint32_t x328 = UINT32_MAX;
	uint32_t t81 = 391132117U;

	t81 = (((x325|x326)<x327)^x328);

	if (t81 != 4294967294U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 102U;
	int32_t x330 = -1;
	int64_t x332 = INT64_MIN;
	int64_t t82 = INT64_MIN;

	t82 = (((x329|x330)<x331)^x332);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 1U;
	int16_t x334 = -1;

	t83 = (((x333|x334)<x335)^x336);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x337 = 345U;
	uint64_t x338 = 114LLU;
	uint8_t x339 = 1U;
	uint32_t x340 = 1U;
	volatile uint32_t t84 = 176580127U;

	t84 = (((x337|x338)<x339)^x340);

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	int64_t x342 = INT64_MAX;
	volatile int16_t x343 = INT16_MIN;
	volatile uint64_t x344 = UINT64_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = (((x341|x342)<x343)^x344);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 0;
	int64_t x346 = -787850323041369LL;
	int64_t x347 = INT64_MIN;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (((x345|x346)<x347)^x348);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = UINT32_MAX;
	uint64_t x351 = 736434LLU;
	volatile uint32_t x352 = 1143787U;

	t87 = (((x349|x350)<x351)^x352);

	if (t87 != 1143787U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = INT64_MAX;
	int64_t x355 = -1LL;
	uint32_t x356 = UINT32_MAX;
	static volatile uint32_t t88 = UINT32_MAX;

	t88 = (((x353|x354)<x355)^x356);

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 71678011354749278LLU;
	static uint8_t x358 = UINT8_MAX;
	int32_t x360 = INT32_MAX;

	t89 = (((x357|x358)<x359)^x360);

	if (t89 != 2147483646) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 30359LLU;
	uint8_t x363 = UINT8_MAX;
	static int16_t x364 = 1;

	t90 = (((x361|x362)<x363)^x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = 1;
	volatile uint16_t x366 = UINT16_MAX;
	uint8_t x367 = 0U;
	static volatile uint8_t x368 = 3U;
	static int32_t t91 = 27024664;

	t91 = (((x365|x366)<x367)^x368);

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = -1666978793982794662LL;
	static uint32_t x370 = 86543U;
	int16_t x371 = INT16_MAX;
	uint16_t x372 = UINT16_MAX;
	int32_t t92 = -204;

	t92 = (((x369|x370)<x371)^x372);

	if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = -1;
	uint64_t x374 = UINT64_MAX;
	static int8_t x375 = 0;
	volatile int32_t t93 = 11158681;

	t93 = (((x373|x374)<x375)^x376);

	if (t93 != -353) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x378 = UINT16_MAX;
	int16_t x379 = INT16_MIN;

	t94 = (((x377|x378)<x379)^x380);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x382 = UINT8_MAX;
	static int8_t x383 = 63;
	volatile uint32_t x384 = 40818743U;
	volatile uint32_t t95 = 485380U;

	t95 = (((x381|x382)<x383)^x384);

	if (t95 != 40818742U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = 450;
	int64_t x386 = INT64_MIN;
	int64_t x387 = -1LL;
	volatile int8_t x388 = 6;

	t96 = (((x385|x386)<x387)^x388);

	if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -6341;
	uint16_t x391 = 7U;
	int16_t x392 = -1691;
	volatile int32_t t97 = 1;

	t97 = (((x389|x390)<x391)^x392);

	if (t97 != -1692) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MIN;
	static int16_t x395 = 5953;
	int32_t x396 = INT32_MAX;
	volatile int32_t t98 = 5;

	t98 = (((x393|x394)<x395)^x396);

	if (t98 != 2147483646) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	int64_t x398 = INT64_MIN;
	volatile uint64_t x399 = 37617808286924LLU;
	uint8_t x400 = 2U;
	int32_t t99 = 1412346;

	t99 = (((x397|x398)<x399)^x400);

	if (t99 != 2) { NG(); } else { ; }
	
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

