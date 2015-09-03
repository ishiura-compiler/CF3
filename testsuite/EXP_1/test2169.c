#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
volatile uint16_t x16 = UINT16_MAX;
int8_t x23 = -1;
uint16_t x27 = 16U;
static int64_t t7 = -4590000997888827890LL;
int32_t x39 = -48;
int64_t x40 = INT64_MIN;
uint64_t x46 = 407532680732LLU;
int32_t x47 = INT32_MIN;
uint8_t x48 = 52U;
static int32_t x52 = INT32_MIN;
static uint32_t x62 = 516U;
volatile int64_t t15 = 21832008LL;
int8_t x65 = 0;
static int64_t x78 = 167103626080861LL;
volatile int32_t t20 = -3195429;
int16_t x87 = -1;
volatile int8_t x88 = INT8_MIN;
static int16_t x89 = 122;
int32_t x91 = -1;
uint32_t t24 = 12148897U;
int32_t x102 = 439;
static int8_t x108 = INT8_MAX;
int8_t x121 = INT8_MIN;
int16_t x131 = 1;
int32_t t32 = -10;
static int32_t x134 = -1;
uint8_t x135 = 5U;
static uint16_t x138 = 3316U;
volatile int64_t x140 = -85244LL;
int64_t t34 = 1046858494LL;
int8_t x144 = INT8_MIN;
static volatile int32_t x159 = INT32_MAX;
static volatile int8_t x164 = INT8_MIN;
uint8_t x168 = 1U;
volatile uint64_t t41 = 429492LLU;
volatile int64_t t42 = -1181881LL;
static int32_t x174 = INT32_MAX;
static uint32_t x182 = UINT32_MAX;
static int16_t x192 = INT16_MAX;
int32_t t47 = -130829639;
volatile uint32_t t48 = 938433389U;
volatile uint64_t x201 = 55480185820LLU;
volatile uint8_t x207 = 11U;
uint16_t x208 = UINT16_MAX;
volatile uint32_t t51 = 57829U;
int64_t x209 = INT64_MAX;
volatile int8_t x210 = INT8_MIN;
int8_t x220 = -1;
static volatile int32_t t55 = -1;
static int64_t x234 = -1LL;
int8_t x236 = INT8_MAX;
static volatile uint8_t x241 = 26U;
int32_t t60 = -117333965;
static int32_t x250 = INT32_MIN;
volatile uint64_t t62 = 307233LLU;
volatile uint16_t x253 = 65U;
volatile int32_t t63 = 114336752;
static volatile int32_t t64 = 3645520;
int8_t x261 = -3;
int8_t x275 = 0;
static uint8_t x277 = 81U;
volatile uint32_t x284 = 11364600U;
int64_t t72 = INT64_MIN;
int64_t x294 = INT64_MAX;
static int8_t x295 = INT8_MIN;
int64_t x297 = -1LL;
volatile uint64_t x303 = 1367936654148207LLU;
uint64_t x304 = UINT64_MAX;
uint8_t x305 = UINT8_MAX;
uint8_t x307 = UINT8_MAX;
uint32_t x312 = 58501653U;
volatile int32_t x318 = -74949;
int16_t x326 = -1;
int32_t x337 = INT32_MIN;
int32_t x338 = INT32_MAX;
int16_t x354 = -1;
volatile int16_t x356 = INT16_MAX;
static volatile int32_t t88 = 15508;
int16_t x360 = INT16_MAX;
uint32_t x363 = 11U;
int64_t x366 = INT64_MIN;
uint16_t x369 = 5U;
int32_t x373 = 23772;
uint8_t x375 = 2U;
static volatile uint64_t t93 = 7358848346098726032LLU;
volatile uint64_t x379 = 5858707677657LLU;
int16_t x380 = 0;
static volatile uint64_t t94 = 1LLU;
int64_t x382 = 20LL;
static uint64_t t95 = 21645573LLU;
int16_t x394 = 5;
static int64_t x396 = -1LL;
int16_t x398 = -3538;


void f0(void) {
	uint8_t x1 = 9U;
	int64_t x2 = INT64_MIN;
	int16_t x3 = INT16_MIN;
	volatile int16_t x4 = INT16_MIN;
	static int64_t t0 = INT64_MIN;

	t0 = (((x1^x2)&x3)&x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -2;
	volatile int64_t x7 = -1LL;
	uint8_t x8 = 3U;
	int64_t t1 = -4158579LL;

	t1 = (((x5^x6)&x7)&x8);

	if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = -1LL;
	int32_t x11 = -1;
	uint8_t x12 = 4U;
	static int64_t t2 = 366113653LL;

	t2 = (((x9^x10)&x11)&x12);

	if (t2 != 4LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int32_t x14 = -1;
	int32_t x15 = -1;
	volatile int32_t t3 = -426;

	t3 = (((x13^x14)&x15)&x16);

	if (t3 != 65408) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int8_t x18 = 8;
	int32_t x19 = -1489;
	volatile int8_t x20 = -1;
	static int32_t t4 = 109515638;

	t4 = (((x17^x18)&x19)&x20);

	if (t4 != -32760) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	int16_t x22 = INT16_MAX;
	int8_t x24 = -3;
	volatile int32_t t5 = -24;

	t5 = (((x21^x22)&x23)&x24);

	if (t5 != 32640) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int64_t x26 = INT64_MAX;
	uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 8336165527647LLU;

	t6 = (((x25^x26)&x27)&x28);

	if (t6 != 16LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = UINT16_MAX;
	int8_t x30 = INT8_MIN;
	int32_t x31 = INT32_MAX;
	static volatile int64_t x32 = -1LL;

	t7 = (((x29^x30)&x31)&x32);

	if (t7 != 2147418239LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 990U;
	static int8_t x34 = INT8_MIN;
	static volatile int64_t x35 = INT64_MAX;
	uint32_t x36 = UINT32_MAX;
	volatile int64_t t8 = 7LL;

	t8 = (((x33^x34)&x35)&x36);

	if (t8 != 4294966366LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = 3;
	uint8_t x38 = UINT8_MAX;
	int64_t t9 = 1725074993282315LL;

	t9 = (((x37^x38)&x39)&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	int32_t x42 = INT32_MIN;
	volatile int8_t x43 = 1;
	uint16_t x44 = UINT16_MAX;
	int32_t t10 = -106287512;

	t10 = (((x41^x42)&x43)&x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = INT16_MIN;
	uint64_t t11 = 16469586976LLU;

	t11 = (((x45^x46)&x47)&x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = -1;
	static int64_t x51 = 91006570389LL;
	volatile int64_t t12 = -1LL;

	t12 = (((x49^x50)&x51)&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	static volatile int64_t x54 = -30596LL;
	int16_t x55 = INT16_MAX;
	int64_t x56 = -1699196695LL;
	int64_t t13 = 8143845131125LL;

	t13 = (((x53^x54)&x55)&x56);

	if (t13 != 20609LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -11LL;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = -1LL;
	uint8_t x60 = UINT8_MAX;
	int64_t t14 = 263439492893430416LL;

	t14 = (((x57^x58)&x59)&x60);

	if (t14 != 10LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -7436;
	int32_t x63 = INT32_MIN;
	static int64_t x64 = -1LL;

	t15 = (((x61^x62)&x63)&x64);

	if (t15 != 2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 4U;
	volatile int32_t x67 = -869883;
	int16_t x68 = INT16_MAX;
	int32_t t16 = -318491;

	t16 = (((x65^x66)&x67)&x68);

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	uint16_t x70 = UINT16_MAX;
	uint64_t x71 = UINT64_MAX;
	uint8_t x72 = UINT8_MAX;
	uint64_t t17 = 330LLU;

	t17 = (((x69^x70)&x71)&x72);

	if (t17 != 255LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -2;
	int64_t x74 = 72591086984643LL;
	int8_t x75 = 0;
	int32_t x76 = INT32_MAX;
	volatile int64_t t18 = 14LL;

	t18 = (((x73^x74)&x75)&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 2642;
	int16_t x79 = 683;
	int32_t x80 = 11798434;
	int64_t t19 = -1984988995714872LL;

	t19 = (((x77^x78)&x79)&x80);

	if (t19 != 2LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	uint8_t x82 = 3U;
	static int32_t x83 = -1;
	static int32_t x84 = -1;

	t20 = (((x81^x82)&x83)&x84);

	if (t20 != -125) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 457;
	int32_t x86 = -4;
	volatile int32_t t21 = -351584156;

	t21 = (((x85^x86)&x87)&x88);

	if (t21 != -512) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = -1LL;
	int64_t x92 = INT64_MIN;
	int64_t t22 = INT64_MIN;

	t22 = (((x89^x90)&x91)&x92);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MAX;
	int64_t x95 = -1LL;
	volatile uint32_t x96 = 52428888U;
	static int64_t t23 = -13094461LL;

	t23 = (((x93^x94)&x95)&x96);

	if (t23 != 88LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	int16_t x98 = -3;
	static uint8_t x99 = 2U;
	int8_t x100 = INT8_MAX;

	t24 = (((x97^x98)&x99)&x100);

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -23369;
	static uint16_t x103 = 7U;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 171521;

	t25 = (((x101^x102)&x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = -1508;
	static int16_t x106 = 1342;
	int32_t x107 = INT32_MAX;
	static int32_t t26 = -22085307;

	t26 = (((x105^x106)&x107)&x108);

	if (t26 != 34) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 397810;
	volatile int16_t x110 = INT16_MIN;
	uint8_t x111 = UINT8_MAX;
	uint8_t x112 = 1U;
	volatile int32_t t27 = 32071;

	t27 = (((x109^x110)&x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MAX;
	int8_t x115 = INT8_MAX;
	volatile int8_t x116 = -14;
	volatile int32_t t28 = 0;

	t28 = (((x113^x114)&x115)&x116);

	if (t28 != 114) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 0U;
	int16_t x118 = 610;
	uint16_t x119 = UINT16_MAX;
	int8_t x120 = INT8_MAX;
	static int32_t t29 = -34;

	t29 = (((x117^x118)&x119)&x120);

	if (t29 != 98) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -6307;
	int16_t x123 = -1;
	static int32_t x124 = INT32_MIN;
	volatile int32_t t30 = 85766;

	t30 = (((x121^x122)&x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	int8_t x126 = -1;
	static volatile uint64_t x127 = UINT64_MAX;
	static volatile uint8_t x128 = 1U;
	uint64_t t31 = 787324627497987317LLU;

	t31 = (((x125^x126)&x127)&x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	int8_t x130 = -1;
	uint8_t x132 = 58U;

	t32 = (((x129^x130)&x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	static volatile int32_t x136 = -1;
	volatile int64_t t33 = -114LL;

	t33 = (((x133^x134)&x135)&x136);

	if (t33 != 5LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -353;
	static int16_t x139 = INT16_MAX;

	t34 = (((x137^x138)&x139)&x140);

	if (t34 != 12800LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	volatile int32_t x142 = -395;
	volatile uint16_t x143 = UINT16_MAX;
	volatile int32_t t35 = 1;

	t35 = (((x141^x142)&x143)&x144);

	if (t35 != 384) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = INT32_MAX;
	volatile uint32_t x146 = UINT32_MAX;
	uint32_t x147 = 1473127U;
	uint64_t x148 = 257167301915333LLU;
	uint64_t t36 = 27842LLU;

	t36 = (((x145^x146)&x147)&x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = UINT32_MAX;
	int16_t x150 = INT16_MIN;
	int8_t x151 = 0;
	uint16_t x152 = 27265U;
	volatile uint32_t t37 = 335194U;

	t37 = (((x149^x150)&x151)&x152);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = 124934627;
	volatile uint32_t x154 = UINT32_MAX;
	int64_t x155 = 4052341256748LL;
	static int16_t x156 = -6266;
	int64_t t38 = -1755759706069192817LL;

	t38 = (((x153^x154)&x155)&x156);

	if (t38 != 2148278788LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	static int8_t x158 = 47;
	static volatile int16_t x160 = 1;
	volatile int32_t t39 = 1;

	t39 = (((x157^x158)&x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = 0;
	int32_t x162 = INT32_MIN;
	int64_t x163 = -4959LL;
	int64_t t40 = 998181687LL;

	t40 = (((x161^x162)&x163)&x164);

	if (t40 != -2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	int16_t x166 = -1;
	volatile uint32_t x167 = UINT32_MAX;

	t41 = (((x165^x166)&x167)&x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 0;
	int8_t x170 = INT8_MIN;
	int64_t x171 = INT64_MIN;
	uint16_t x172 = 162U;

	t42 = (((x169^x170)&x171)&x172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 5U;
	uint8_t x175 = 3U;
	static volatile int16_t x176 = INT16_MAX;
	int32_t t43 = 352472;

	t43 = (((x173^x174)&x175)&x176);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 52;
	uint32_t x178 = 117561061U;
	volatile int32_t x179 = INT32_MIN;
	uint8_t x180 = 64U;
	volatile uint32_t t44 = 10596003U;

	t44 = (((x177^x178)&x179)&x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x181 = 15342U;
	int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MIN;
	volatile uint32_t t45 = 73888U;

	t45 = (((x181^x182)&x183)&x184);

	if (t45 != 2147483648U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MIN;
	static volatile uint8_t x186 = UINT8_MAX;
	int64_t x187 = -161601244226LL;
	static int16_t x188 = INT16_MIN;
	int64_t t46 = -2874967302168986LL;

	t46 = (((x185^x186)&x187)&x188);

	if (t46 != -161601257472LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;

	t47 = (((x189^x190)&x191)&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 75973285U;
	int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MAX;
	volatile uint16_t x196 = 106U;

	t48 = (((x193^x194)&x195)&x196);

	if (t48 != 32U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	int16_t x198 = 12;
	int8_t x199 = -1;
	static int32_t x200 = -1;
	int32_t t49 = 0;

	t49 = (((x197^x198)&x199)&x200);

	if (t49 != -2147483636) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = 500;
	int8_t x203 = -1;
	volatile uint16_t x204 = 841U;
	volatile uint64_t t50 = 25214LLU;

	t50 = (((x201^x202)&x203)&x204);

	if (t50 != 520LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 236623724U;
	volatile int32_t x206 = -1;

	t51 = (((x205^x206)&x207)&x208);

	if (t51 != 3U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x211 = INT64_MIN;
	volatile int8_t x212 = INT8_MIN;
	static int64_t t52 = INT64_MIN;

	t52 = (((x209^x210)&x211)&x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = INT32_MIN;
	int64_t x214 = INT64_MIN;
	int8_t x215 = 9;
	uint32_t x216 = 4006297U;
	int64_t t53 = 5419952LL;

	t53 = (((x213^x214)&x215)&x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	static uint8_t x218 = UINT8_MAX;
	volatile uint8_t x219 = 0U;
	int32_t t54 = 21794;

	t54 = (((x217^x218)&x219)&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -4;
	int8_t x222 = -2;
	int16_t x223 = INT16_MAX;
	int8_t x224 = -27;

	t55 = (((x221^x222)&x223)&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MIN;
	static volatile int16_t x226 = -1585;
	int32_t x227 = 874140115;
	uint32_t x228 = 248U;
	volatile uint32_t t56 = 350107559U;

	t56 = (((x225^x226)&x227)&x228);

	if (t56 != 64U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MAX;
	static uint32_t x230 = UINT32_MAX;
	uint8_t x231 = UINT8_MAX;
	static uint32_t x232 = 451640U;
	volatile uint32_t t57 = 346315U;

	t57 = (((x229^x230)&x231)&x232);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x233 = UINT64_MAX;
	volatile uint64_t x235 = 3LLU;
	volatile uint64_t t58 = 141LLU;

	t58 = (((x233^x234)&x235)&x236);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -4700058;
	uint16_t x238 = 174U;
	int64_t x239 = -1LL;
	volatile uint64_t x240 = UINT64_MAX;
	uint64_t t59 = 1252606560LLU;

	t59 = (((x237^x238)&x239)&x240);

	if (t59 != 18446744073704851656LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x242 = 43U;
	int16_t x243 = 257;
	volatile uint16_t x244 = 51U;

	t60 = (((x241^x242)&x243)&x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	static int32_t x246 = INT32_MAX;
	int32_t x247 = -1;
	uint8_t x248 = 40U;
	static int32_t t61 = 21319550;

	t61 = (((x245^x246)&x247)&x248);

	if (t61 != 40) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	uint32_t x251 = 3U;
	volatile uint64_t x252 = UINT64_MAX;

	t62 = (((x249^x250)&x251)&x252);

	if (t62 != 3LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x254 = 62U;
	uint8_t x255 = 102U;
	int32_t x256 = INT32_MAX;

	t63 = (((x253^x254)&x255)&x256);

	if (t63 != 102) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	uint8_t x258 = 2U;
	int8_t x259 = -1;
	static volatile uint8_t x260 = 0U;

	t64 = (((x257^x258)&x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	volatile uint32_t x264 = UINT32_MAX;
	uint32_t t65 = 116244056U;

	t65 = (((x261^x262)&x263)&x264);

	if (t65 != 2U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -2927412087505043LL;
	uint16_t x266 = 15272U;
	int32_t x267 = -1391917;
	volatile int8_t x268 = INT8_MAX;
	volatile int64_t t66 = -8260019LL;

	t66 = (((x265^x266)&x267)&x268);

	if (t66 != 65LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	int64_t x270 = -387260LL;
	int64_t x271 = INT64_MIN;
	int8_t x272 = -8;
	int64_t t67 = 100929399085627267LL;

	t67 = (((x269^x270)&x271)&x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	static int32_t x274 = 44657;
	static uint32_t x276 = 63U;
	static volatile int64_t t68 = -46743027070352054LL;

	t68 = (((x273^x274)&x275)&x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x278 = -1843292493360103017LL;
	int64_t x279 = -1LL;
	static int8_t x280 = INT8_MIN;
	int64_t t69 = -4714819LL;

	t69 = (((x277^x278)&x279)&x280);

	if (t69 != -1843292493360103040LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 2829348304664LLU;
	uint16_t x282 = 7742U;
	int8_t x283 = -1;
	uint64_t t70 = 500594971539713371LLU;

	t70 = (((x281^x282)&x283)&x284);

	if (t70 != 813088LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -111;
	int8_t x286 = -1;
	int64_t x287 = INT64_MIN;
	static int16_t x288 = INT16_MIN;
	int64_t t71 = 2189432795075355LL;

	t71 = (((x285^x286)&x287)&x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	volatile int32_t x290 = -3583;
	int64_t x291 = INT64_MIN;
	int16_t x292 = INT16_MIN;

	t72 = (((x289^x290)&x291)&x292);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x293 = -1;
	volatile int64_t x296 = 1739653789383335LL;
	int64_t t73 = -5174644LL;

	t73 = (((x293^x294)&x295)&x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x298 = 20U;
	static volatile int64_t x299 = INT64_MIN;
	static int8_t x300 = -1;
	volatile int64_t t74 = INT64_MIN;

	t74 = (((x297^x298)&x299)&x300);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = -1;
	static uint64_t t75 = 5963972LLU;

	t75 = (((x301^x302)&x303)&x304);

	if (t75 != 1367936654148207LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = 1;
	static int16_t x308 = INT16_MAX;
	volatile int32_t t76 = -351476866;

	t76 = (((x305^x306)&x307)&x308);

	if (t76 != 254) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -558832;
	uint64_t x310 = 2668519LLU;
	int8_t x311 = INT8_MIN;
	uint64_t t77 = 229571900404LLU;

	t77 = (((x309^x310)&x311)&x312);

	if (t77 != 56396288LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	volatile int16_t x314 = INT16_MIN;
	uint32_t x315 = 20900U;
	int32_t x316 = -185458;
	volatile uint32_t t78 = 541U;

	t78 = (((x313^x314)&x315)&x316);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 6884938329007112581LLU;
	int8_t x319 = INT8_MIN;
	volatile int32_t x320 = INT32_MIN;
	volatile uint64_t t79 = 972LLU;

	t79 = (((x317^x318)&x319)&x320);

	if (t79 != 11561805743241822208LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 21258743426879905LL;
	uint8_t x322 = UINT8_MAX;
	static volatile int64_t x323 = INT64_MIN;
	volatile int8_t x324 = -1;
	int64_t t80 = 1LL;

	t80 = (((x321^x322)&x323)&x324);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	uint16_t x327 = 17U;
	uint16_t x328 = 4U;
	volatile int32_t t81 = -14306780;

	t81 = (((x325^x326)&x327)&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = 171461U;
	int16_t x330 = 29;
	static int64_t x331 = INT64_MIN;
	int32_t x332 = INT32_MAX;
	static int64_t t82 = -359LL;

	t82 = (((x329^x330)&x331)&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	int16_t x334 = 123;
	volatile uint64_t x335 = 25226246748360LLU;
	int16_t x336 = -1;
	uint64_t t83 = 38717945LLU;

	t83 = (((x333^x334)&x335)&x336);

	if (t83 != 30848LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -253394;

	t84 = (((x337^x338)&x339)&x340);

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int64_t x342 = -1LL;
	int8_t x343 = INT8_MIN;
	volatile int32_t x344 = -64;
	int64_t t85 = -1LL;

	t85 = (((x341^x342)&x343)&x344);

	if (t85 != 2147483520LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -2411704;
	static uint64_t x346 = UINT64_MAX;
	volatile int16_t x347 = INT16_MIN;
	static volatile int8_t x348 = INT8_MAX;
	static uint64_t t86 = 393342432733315LLU;

	t86 = (((x345^x346)&x347)&x348);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MIN;
	uint8_t x351 = 5U;
	int8_t x352 = 0;
	volatile int32_t t87 = 2586;

	t87 = (((x349^x350)&x351)&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int8_t x355 = INT8_MIN;

	t88 = (((x353^x354)&x355)&x356);

	if (t88 != 32640) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	volatile uint8_t x358 = UINT8_MAX;
	volatile int8_t x359 = INT8_MIN;
	static int32_t t89 = -434;

	t89 = (((x357^x358)&x359)&x360);

	if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1;
	static int64_t x362 = INT64_MIN;
	static volatile uint8_t x364 = 21U;
	volatile int64_t t90 = -27692958654665988LL;

	t90 = (((x361^x362)&x363)&x364);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x365 = -1;
	int8_t x367 = INT8_MAX;
	int64_t x368 = -7428975109903LL;
	int64_t t91 = -232479277992804LL;

	t91 = (((x365^x366)&x367)&x368);

	if (t91 != 113LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x370 = 1;
	int16_t x371 = INT16_MIN;
	int32_t x372 = -1;
	volatile int32_t t92 = 4823;

	t92 = (((x369^x370)&x371)&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = -1;
	uint64_t x376 = 351993065LLU;

	t93 = (((x373^x374)&x375)&x376);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 185593128298024727LLU;
	volatile int8_t x378 = INT8_MIN;

	t94 = (((x377^x378)&x379)&x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x381 = -1;
	volatile int32_t x383 = INT32_MIN;
	uint64_t x384 = 376526LLU;

	t95 = (((x381^x382)&x383)&x384);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	int8_t x386 = INT8_MIN;
	volatile uint32_t x387 = UINT32_MAX;
	static uint64_t x388 = UINT64_MAX;
	volatile uint64_t t96 = 88010534460LLU;

	t96 = (((x385^x386)&x387)&x388);

	if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int32_t x390 = -63;
	static uint8_t x391 = 2U;
	uint32_t x392 = 42084765U;
	volatile int64_t t97 = -2677980326081307LL;

	t97 = (((x389^x390)&x391)&x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	int16_t x395 = INT16_MAX;
	int64_t t98 = 3458438415LL;

	t98 = (((x393^x394)&x395)&x396);

	if (t98 != 32762LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = 1270;
	int8_t x399 = -1;
	uint8_t x400 = 18U;
	volatile int32_t t99 = 1;

	t99 = (((x397^x398)&x399)&x400);

	if (t99 != 16) { NG(); } else { ; }
	
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

