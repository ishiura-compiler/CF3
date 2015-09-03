#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = INT64_MAX;
int8_t x10 = INT8_MIN;
static uint8_t x12 = 2U;
int8_t x16 = -1;
volatile uint64_t t8 = 74128449250746LLU;
int32_t x42 = 0;
int8_t x44 = INT8_MIN;
static int8_t x46 = INT8_MIN;
int32_t t13 = INT32_MAX;
static int8_t x60 = -1;
volatile int64_t t16 = -211181065972LL;
int32_t x70 = INT32_MAX;
int8_t x72 = 7;
static int16_t x74 = -1;
static int32_t x85 = -1;
static uint8_t x86 = 0U;
int16_t x90 = INT16_MIN;
uint8_t x91 = 43U;
int32_t t22 = 0;
volatile uint64_t x95 = 819420LLU;
int64_t x96 = INT64_MIN;
uint64_t t23 = 77236LLU;
int32_t x100 = -1;
static uint32_t x103 = 573U;
uint16_t x106 = 3429U;
int8_t x112 = 14;
uint64_t x116 = UINT64_MAX;
uint64_t x117 = 65760162LLU;
static uint8_t x120 = 10U;
uint64_t t29 = 787364618779342LLU;
int16_t x122 = INT16_MIN;
volatile int64_t t31 = -2133LL;
int16_t x129 = INT16_MIN;
int8_t x130 = -1;
uint32_t x131 = UINT32_MAX;
uint8_t x137 = 18U;
static int8_t x140 = -1;
volatile int32_t t34 = -1;
volatile uint8_t x141 = UINT8_MAX;
uint64_t x159 = UINT64_MAX;
int8_t x164 = 30;
int32_t x169 = INT32_MIN;
uint64_t t42 = 150027269492LLU;
static volatile uint32_t x174 = 1U;
static volatile int8_t x177 = -1;
int8_t x178 = -1;
int8_t x186 = 21;
int32_t x187 = INT32_MIN;
uint8_t x193 = UINT8_MAX;
static uint8_t x198 = 1U;
int64_t x216 = -1LL;
static int16_t x226 = -1;
volatile int64_t t56 = -19394263462316174LL;
volatile int64_t x229 = INT64_MIN;
uint8_t x231 = 24U;
static int64_t x233 = 285960LL;
int64_t t58 = -421077840775553LL;
static uint32_t t59 = 1750U;
static int64_t x247 = -82876899097409LL;
volatile int64_t x249 = -1LL;
int64_t x257 = 64758232629LL;
int8_t x258 = -12;
static int16_t x264 = -1;
int16_t x265 = INT16_MIN;
int8_t x273 = -1;
static int64_t x275 = INT64_MIN;
int64_t t68 = 384199472171303LL;
int32_t x278 = 392;
uint32_t x282 = 555532314U;
volatile uint32_t t70 = 310164870U;
volatile int64_t x293 = 451014LL;
int16_t x305 = -1;
int8_t x307 = 9;
static volatile int16_t x308 = INT16_MIN;
int16_t x309 = INT16_MIN;
uint32_t x315 = 6U;
volatile uint32_t t78 = 1U;
int64_t x317 = 44452878616773LL;
uint8_t x328 = 44U;
uint8_t x347 = 11U;
volatile int64_t x355 = 13531LL;
uint32_t x362 = 94863U;
int64_t x365 = INT64_MAX;
uint32_t x368 = 204U;
volatile int64_t t91 = -2334317LL;
int64_t x370 = -4460002260783LL;
volatile int64_t t92 = -781325735244321LL;
uint64_t x378 = UINT64_MAX;
uint64_t t94 = 819656678LLU;
int8_t x389 = INT8_MIN;
int64_t x391 = INT64_MAX;
volatile uint16_t x392 = 3111U;
volatile int64_t t97 = 13LL;
int16_t x393 = -3663;
int64_t x399 = INT64_MAX;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	static uint32_t x2 = 37990133U;
	static int64_t x3 = INT64_MAX;
	static int64_t x4 = INT64_MIN;
	static int64_t t0 = 57296962677LL;

	t0 = ((x1&(x2^x3))^x4);

	if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 40U;
	int8_t x6 = 15;
	volatile int32_t x7 = INT32_MAX;
	volatile uint16_t x8 = 1903U;
	static volatile int32_t t1 = 214191;

	t1 = ((x5&(x6^x7))^x8);

	if (t1 != 1871) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x11 = UINT16_MAX;
	static int64_t t2 = 2163221156845LL;

	t2 = ((x9&(x10^x11))^x12);

	if (t2 != 9223372036854710397LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	uint32_t x14 = 3778009U;
	uint8_t x15 = UINT8_MAX;
	volatile uint64_t t3 = 31575LLU;

	t3 = ((x13&(x14^x15))^x16);

	if (t3 != 18446744073705773785LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 2U;
	uint32_t x18 = UINT32_MAX;
	int8_t x19 = INT8_MIN;
	volatile int8_t x20 = 0;
	uint32_t t4 = 32254642U;

	t4 = ((x17&(x18^x19))^x20);

	if (t4 != 2U) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	int32_t x22 = INT32_MIN;
	static int32_t x23 = INT32_MAX;
	static uint64_t x24 = UINT64_MAX;
	volatile uint64_t t5 = 8259255438494LLU;

	t5 = ((x21&(x22^x23))^x24);

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 1156766LL;
	int64_t x26 = -1026255800LL;
	static int8_t x27 = -49;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = -31772297914039441LL;

	t6 = ((x25&(x26^x27))^x28);

	if (t6 != -9223372036854701434LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = 10988462873387007LL;
	int8_t x30 = 15;
	int32_t x31 = INT32_MAX;
	uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 847210688125387LLU;

	t7 = ((x29&(x30^x31))^x32);

	if (t7 != 18446744072062099471LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int32_t x34 = -17;
	uint64_t x35 = 3521671363022745344LLU;
	int64_t x36 = -31797LL;

	t8 = ((x33&(x34^x35))^x36);

	if (t8 != 9223372036854744011LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 31U;
	int8_t x38 = -1;
	volatile int32_t x39 = INT32_MIN;
	uint8_t x40 = 23U;
	volatile int32_t t9 = 6029;

	t9 = ((x37&(x38^x39))^x40);

	if (t9 != 8) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	volatile int32_t x43 = -1;
	int32_t t10 = -222034177;

	t10 = ((x41&(x42^x43))^x44);

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 5U;
	int32_t x47 = -26828520;
	int64_t x48 = INT64_MAX;
	int64_t t11 = INT64_MAX;

	t11 = ((x45&(x46^x47))^x48);

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	volatile uint16_t x50 = 225U;
	static int32_t x51 = INT32_MAX;
	volatile uint8_t x52 = 2U;
	volatile int32_t t12 = 1;

	t12 = ((x49&(x50^x51))^x52);

	if (t12 != 65308) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 21472U;
	int32_t x54 = -1;
	static int32_t x55 = INT32_MAX;
	int32_t x56 = INT32_MAX;

	t13 = ((x53&(x54^x55))^x56);

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 4;
	int8_t x58 = -1;
	int32_t x59 = -1;
	int32_t t14 = 87909879;

	t14 = ((x57&(x58^x59))^x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	int8_t x62 = INT8_MIN;
	volatile uint32_t x63 = 25574U;
	int8_t x64 = INT8_MIN;
	uint32_t t15 = 5U;

	t15 = ((x61&(x62^x63))^x64);

	if (t15 != 2147483520U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	uint16_t x66 = 27U;
	uint16_t x67 = 604U;
	static int32_t x68 = -1;

	t16 = ((x65&(x66^x67))^x68);

	if (t16 != -584LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 104U;
	volatile int64_t x71 = INT64_MIN;
	static volatile int64_t t17 = 19010665LL;

	t17 = ((x69&(x70^x71))^x72);

	if (t17 != 111LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	static int32_t x75 = 0;
	volatile uint16_t x76 = UINT16_MAX;
	int32_t t18 = 86;

	t18 = ((x73&(x74^x75))^x76);

	if (t18 != -65536) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x77 = 1;
	static int64_t x78 = INT64_MAX;
	int16_t x79 = INT16_MAX;
	int32_t x80 = INT32_MIN;
	int64_t t19 = -1003741684629LL;

	t19 = ((x77&(x78^x79))^x80);

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	uint16_t x82 = UINT16_MAX;
	static int8_t x83 = INT8_MIN;
	int8_t x84 = -13;
	static volatile int32_t t20 = -27349379;

	t20 = ((x81&(x82^x83))^x84);

	if (t20 != 65420) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x87 = 6851430LLU;
	uint64_t x88 = UINT64_MAX;
	uint64_t t21 = 215552LLU;

	t21 = ((x85&(x86^x87))^x88);

	if (t21 != 18446744073702700185LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = 5192;
	int16_t x92 = INT16_MIN;

	t22 = ((x89&(x90^x91))^x92);

	if (t22 != -32760) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MAX;

	t23 = ((x93&(x94^x95))^x96);

	if (t23 != 18446744073708732195LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	int64_t x98 = INT64_MIN;
	static uint16_t x99 = 10342U;
	volatile int64_t t24 = -621926699295939LL;

	t24 = ((x97&(x98^x99))^x100);

	if (t24 != -10343LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -5726;
	uint16_t x102 = 3U;
	volatile uint16_t x104 = 13308U;
	uint32_t t25 = 7U;

	t25 = ((x101&(x102^x103))^x104);

	if (t25 != 13278U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 1U;
	int16_t x107 = -6;
	int64_t x108 = -1LL;
	volatile int64_t t26 = 216617117977000LL;

	t26 = ((x105&(x106^x107))^x108);

	if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MIN;
	uint32_t x110 = 0U;
	int8_t x111 = 6;
	uint32_t t27 = 492196U;

	t27 = ((x109&(x110^x111))^x112);

	if (t27 != 14U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint16_t x114 = 653U;
	static int8_t x115 = INT8_MAX;
	uint64_t t28 = 69394795960423LLU;

	t28 = ((x113&(x114^x115))^x116);

	if (t28 != 18446744073709550975LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = 1262025;
	volatile int16_t x119 = INT16_MAX;

	t29 = ((x117&(x118^x119))^x120);

	if (t29 != 207400LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	static int64_t x123 = 12LL;
	uint32_t x124 = 3358U;
	volatile int64_t t30 = 80181934647853819LL;

	t30 = ((x121&(x122^x123))^x124);

	if (t30 != 2147454226LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	static volatile uint16_t x126 = UINT16_MAX;
	volatile uint16_t x127 = UINT16_MAX;
	int16_t x128 = INT16_MAX;

	t31 = ((x125&(x126^x127))^x128);

	if (t31 != 32767LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x132 = 724684LLU;
	uint64_t t32 = 29LLU;

	t32 = ((x129&(x130^x131))^x132);

	if (t32 != 724684LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MAX;
	int8_t x135 = -1;
	uint16_t x136 = 3U;
	static volatile int64_t t33 = 16014824364442LL;

	t33 = ((x133&(x134^x135))^x136);

	if (t33 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = UINT8_MAX;
	uint16_t x139 = 5U;

	t34 = ((x137&(x138^x139))^x140);

	if (t34 != -19) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x142 = INT32_MIN;
	uint64_t x143 = 1493675013LLU;
	static int32_t x144 = -5332586;
	uint64_t t35 = 16236370059753024LLU;

	t35 = ((x141&(x142^x143))^x144);

	if (t35 != 18446744073704219027LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 3LLU;
	volatile uint32_t x146 = 607356U;
	volatile int8_t x147 = -1;
	uint16_t x148 = 17020U;
	uint64_t t36 = 746110036041967LLU;

	t36 = ((x145&(x146^x147))^x148);

	if (t36 != 17023LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x149 = 165805247U;
	uint32_t x150 = 556471U;
	int16_t x151 = -1;
	int64_t x152 = -3526LL;
	int64_t t37 = 10139240656472060LL;

	t37 = ((x149&(x150^x151))^x152);

	if (t37 != -165776846LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int8_t x154 = -1;
	uint64_t x155 = UINT64_MAX;
	uint32_t x156 = UINT32_MAX;
	volatile uint64_t t38 = 1112500000685323546LLU;

	t38 = ((x153&(x154^x155))^x156);

	if (t38 != 4294967295LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int8_t x158 = -27;
	int8_t x160 = -1;
	uint64_t t39 = UINT64_MAX;

	t39 = ((x157&(x158^x159))^x160);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = -3;
	int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MIN;
	int32_t t40 = 80520058;

	t40 = ((x161&(x162^x163))^x164);

	if (t40 != 2147483550) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = 12U;
	volatile int64_t x166 = INT64_MIN;
	volatile uint32_t x167 = 46U;
	uint64_t x168 = 106828623412LLU;
	uint64_t t41 = 2090798718496173540LLU;

	t41 = ((x165&(x166^x167))^x168);

	if (t41 != 106828623416LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x170 = -861;
	uint64_t x171 = 1595LLU;
	int32_t x172 = INT32_MIN;

	t42 = ((x169&(x170^x171))^x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MAX;
	int16_t x175 = INT16_MAX;
	static volatile int64_t x176 = INT64_MIN;
	int64_t t43 = 3027400844533880LL;

	t43 = ((x173&(x174^x175))^x176);

	if (t43 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x179 = -1;
	volatile int64_t x180 = -197016592802980LL;
	int64_t t44 = -479016987235LL;

	t44 = ((x177&(x178^x179))^x180);

	if (t44 != -197016592802980LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 0LLU;
	uint64_t x182 = 96290352858415895LLU;
	volatile uint32_t x183 = 4U;
	int8_t x184 = 17;
	static uint64_t t45 = 86253LLU;

	t45 = ((x181&(x182^x183))^x184);

	if (t45 != 17LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	int32_t x188 = INT32_MIN;
	static volatile int32_t t46 = -961632575;

	t46 = ((x185&(x186^x187))^x188);

	if (t46 != -2147483627) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 36277226407141692LL;
	volatile int8_t x190 = INT8_MIN;
	uint16_t x191 = UINT16_MAX;
	uint32_t x192 = UINT32_MAX;
	volatile int64_t t47 = 618612421735LL;

	t47 = ((x189&(x190^x191))^x192);

	if (t47 != 36277222332497859LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = INT8_MIN;
	volatile int32_t x195 = 21;
	uint8_t x196 = 11U;
	static volatile int32_t t48 = -234;

	t48 = ((x193&(x194^x195))^x196);

	if (t48 != 158) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 0U;
	uint8_t x199 = 25U;
	uint16_t x200 = 0U;
	static int32_t t49 = 251402;

	t49 = ((x197&(x198^x199))^x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x201 = UINT64_MAX;
	int32_t x202 = INT32_MIN;
	static int8_t x203 = -35;
	uint32_t x204 = 5U;
	uint64_t t50 = 1886973231235150272LLU;

	t50 = ((x201&(x202^x203))^x204);

	if (t50 != 2147483608LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	static uint8_t x206 = 15U;
	uint64_t x207 = UINT64_MAX;
	volatile int16_t x208 = INT16_MAX;
	static uint64_t t51 = 2823662260574031LLU;

	t51 = ((x205&(x206^x207))^x208);

	if (t51 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -2391320548LL;
	int8_t x210 = 1;
	volatile int32_t x211 = INT32_MAX;
	uint32_t x212 = 513501U;
	int64_t t52 = -1084149LL;

	t52 = ((x209&(x210^x211))^x212);

	if (t52 != 1903201729LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	int32_t x214 = INT32_MAX;
	int64_t x215 = INT64_MAX;
	volatile int64_t t53 = 36356692159LL;

	t53 = ((x213&(x214^x215))^x216);

	if (t53 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = -1;
	uint64_t x218 = 0LLU;
	volatile uint32_t x219 = 247887570U;
	volatile uint8_t x220 = 6U;
	uint64_t t54 = 2811978LLU;

	t54 = ((x217&(x218^x219))^x220);

	if (t54 != 247887572LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x221 = -1;
	int16_t x222 = -12;
	static int8_t x223 = -15;
	static uint64_t x224 = UINT64_MAX;
	volatile uint64_t t55 = 3LLU;

	t55 = ((x221&(x222^x223))^x224);

	if (t55 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	uint8_t x227 = UINT8_MAX;
	int8_t x228 = INT8_MIN;

	t56 = ((x225&(x226^x227))^x228);

	if (t56 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = UINT64_MAX;
	uint32_t x232 = UINT32_MAX;
	volatile uint64_t t57 = 6LLU;

	t57 = ((x229&(x230^x231))^x232);

	if (t57 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x234 = INT32_MIN;
	int16_t x235 = 1007;
	int16_t x236 = 895;

	t58 = ((x233&(x234^x235))^x236);

	if (t58 != 631LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 38U;
	static uint32_t x238 = 0U;
	int16_t x239 = 156;
	int8_t x240 = -2;

	t59 = ((x237&(x238^x239))^x240);

	if (t59 != 4294967290U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = 1;
	volatile int8_t x242 = INT8_MAX;
	int64_t x243 = INT64_MAX;
	volatile int16_t x244 = INT16_MIN;
	int64_t t60 = 1558249233595697346LL;

	t60 = ((x241&(x242^x243))^x244);

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -47;
	uint8_t x246 = 7U;
	uint32_t x248 = UINT32_MAX;
	volatile int64_t t61 = -7LL;

	t61 = ((x245&(x246^x247))^x248);

	if (t61 != -82878773757073LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x250 = INT8_MAX;
	static int8_t x251 = INT8_MIN;
	int64_t x252 = -1LL;
	volatile int64_t t62 = -31162935LL;

	t62 = ((x249&(x250^x251))^x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	static int64_t x254 = 42LL;
	int32_t x255 = INT32_MIN;
	int16_t x256 = -1;
	volatile int64_t t63 = -2403LL;

	t63 = ((x253&(x254^x255))^x256);

	if (t63 != 2147483647LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x259 = INT64_MIN;
	static int8_t x260 = INT8_MAX;
	static volatile int64_t t64 = -1234411664374611LL;

	t64 = ((x257&(x258^x259))^x260);

	if (t64 != 64758232651LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 73;
	uint32_t x262 = UINT32_MAX;
	int16_t x263 = INT16_MAX;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = ((x261&(x262^x263))^x264);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = -1;
	uint8_t x267 = 1U;
	uint16_t x268 = UINT16_MAX;
	int32_t t66 = -522339059;

	t66 = ((x265&(x266^x267))^x268);

	if (t66 != -32769) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x269 = 15330065040LLU;
	uint64_t x270 = 33439055691LLU;
	int32_t x271 = 15234721;
	int16_t x272 = INT16_MIN;
	uint64_t t67 = 1522547181564LLU;

	t67 = ((x269&(x270^x271))^x272);

	if (t67 != 18446744058648430720LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MAX;
	uint16_t x276 = 452U;

	t68 = ((x273&(x274^x275))^x276);

	if (t68 != -9223372034707292613LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = -476;
	static uint64_t x279 = 1012LLU;
	volatile uint64_t x280 = 50454935LLU;
	static uint64_t t69 = 288157675339218LLU;

	t69 = ((x277&(x278^x279))^x280);

	if (t69 != 50455475LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MIN;

	t70 = ((x281&(x282^x283))^x284);

	if (t70 != 4294967194U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	uint8_t x286 = 1U;
	int16_t x287 = INT16_MIN;
	uint32_t x288 = 4U;
	volatile int64_t t71 = 2LL;

	t71 = ((x285&(x286^x287))^x288);

	if (t71 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 20;
	volatile uint16_t x290 = 56U;
	uint16_t x291 = UINT16_MAX;
	int16_t x292 = INT16_MIN;
	int32_t t72 = 88;

	t72 = ((x289&(x290^x291))^x292);

	if (t72 != -32764) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MIN;
	int16_t x295 = INT16_MAX;
	int16_t x296 = INT16_MIN;
	static volatile int64_t t73 = 2371LL;

	t73 = ((x293&(x294^x295))^x296);

	if (t73 != -7738LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	static uint32_t x298 = 112U;
	int32_t x299 = INT32_MIN;
	int8_t x300 = INT8_MIN;
	int64_t t74 = -8672121613776LL;

	t74 = ((x297&(x298^x299))^x300);

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = -10;
	uint16_t x302 = UINT16_MAX;
	static uint8_t x303 = 31U;
	volatile int8_t x304 = -2;
	volatile int32_t t75 = 237479;

	t75 = ((x301&(x302^x303))^x304);

	if (t75 != -65506) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x306 = INT32_MAX;
	volatile int32_t t76 = -825307;

	t76 = ((x305&(x306^x307))^x308);

	if (t76 != -2147450890) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = 1208030614162974LL;
	int32_t x311 = -1;
	static volatile int64_t x312 = INT64_MIN;
	volatile int64_t t77 = -1469375204LL;

	t77 = ((x309&(x310^x311))^x312);

	if (t77 != 9222164006240583680LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	uint32_t x314 = 89974U;
	int32_t x316 = INT32_MIN;

	t78 = ((x313&(x314^x315))^x316);

	if (t78 != 2147483648U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = INT16_MAX;
	volatile uint16_t x319 = UINT16_MAX;
	int8_t x320 = INT8_MAX;
	int64_t t79 = -13LL;

	t79 = ((x317&(x318^x319))^x320);

	if (t79 != 127LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MAX;
	int16_t x322 = INT16_MAX;
	static volatile int32_t x323 = INT32_MAX;
	int64_t x324 = -444807230186136401LL;
	volatile int64_t t80 = 106381553007789LL;

	t80 = ((x321&(x322^x323))^x324);

	if (t80 != -444807230186136401LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = -1;
	volatile int16_t x326 = INT16_MAX;
	static int8_t x327 = 0;
	volatile int32_t t81 = -2838137;

	t81 = ((x325&(x326^x327))^x328);

	if (t81 != 32723) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	int32_t x330 = INT32_MIN;
	static int64_t x331 = -1LL;
	uint64_t x332 = 12603243255LLU;
	static uint64_t t82 = 830526668LLU;

	t82 = ((x329&(x330^x331))^x332);

	if (t82 != 12603243144LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -4568943963173215430LL;
	int16_t x334 = INT16_MIN;
	volatile int16_t x335 = INT16_MAX;
	int32_t x336 = INT32_MIN;
	volatile int64_t t83 = 391915648LL;

	t83 = ((x333&(x334^x335))^x336);

	if (t83 != 4568943963052254010LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MAX;
	int64_t x338 = -1LL;
	int8_t x339 = -4;
	static volatile int16_t x340 = INT16_MAX;
	int64_t t84 = -30770497451293957LL;

	t84 = ((x337&(x338^x339))^x340);

	if (t84 != 32764LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int64_t x342 = -1LL;
	static int8_t x343 = INT8_MAX;
	int64_t x344 = INT64_MAX;
	int64_t t85 = 2789090569021747LL;

	t85 = ((x341&(x342^x343))^x344);

	if (t85 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = 92344;
	uint64_t x346 = 2223160635415962LLU;
	volatile int16_t x348 = -1;
	volatile uint64_t t86 = 3679012848894LLU;

	t86 = ((x345&(x346^x347))^x348);

	if (t86 != 18446744073709467503LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 2438927070LLU;
	static int32_t x350 = -1;
	uint16_t x351 = 2599U;
	uint64_t x352 = 4702490719LLU;
	static volatile uint64_t t87 = 612907186705684154LLU;

	t87 = ((x349&(x350^x351))^x352);

	if (t87 != 6594838663LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MIN;
	uint32_t x356 = 876U;
	volatile int64_t t88 = 514227706062365LL;

	t88 = ((x353&(x354^x355))^x356);

	if (t88 != -18452LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 479U;
	volatile int32_t x358 = INT32_MIN;
	static volatile int16_t x359 = INT16_MIN;
	uint8_t x360 = 4U;
	int32_t t89 = 3;

	t89 = ((x357&(x358^x359))^x360);

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -4;
	int8_t x363 = 27;
	static int64_t x364 = INT64_MIN;
	volatile int64_t t90 = 1157735075694LL;

	t90 = ((x361&(x362^x363))^x364);

	if (t90 != -9223372036854680940LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = 28;
	int32_t x367 = -33164576;

	t91 = ((x365&(x366^x367))^x368);

	if (t91 != 9223372036821611056LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x369 = UINT16_MAX;
	static uint8_t x371 = 9U;
	volatile int32_t x372 = INT32_MAX;

	t92 = ((x369&(x370^x371))^x372);

	if (t92 != 2147464999LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	int16_t x374 = INT16_MIN;
	static int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MIN;
	int32_t t93 = -12756988;

	t93 = ((x373&(x374^x375))^x376);

	if (t93 != -65536) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	int64_t x379 = -14024506272LL;
	int8_t x380 = INT8_MIN;

	t94 = ((x377&(x378^x379))^x380);

	if (t94 != 18446744073709487135LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 83886LLU;
	static int16_t x382 = INT16_MIN;
	int8_t x383 = INT8_MAX;
	int64_t x384 = -128011763250LL;
	uint64_t t95 = 11188LLU;

	t95 = ((x381&(x382^x383))^x384);

	if (t95 != 18446743945697722848LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	uint16_t x386 = UINT16_MAX;
	int8_t x387 = -13;
	uint64_t x388 = 1969832778067497658LLU;
	uint64_t t96 = 121284811830640894LLU;

	t96 = ((x385&(x386^x387))^x388);

	if (t96 != 1969832777140228790LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = -11221634;

	t97 = ((x389&(x390^x391))^x392);

	if (t97 != -9223372036843555161LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = -1;
	volatile int16_t x395 = INT16_MIN;
	static uint8_t x396 = UINT8_MAX;
	static volatile int32_t t98 = 227545473;

	t98 = ((x393&(x394^x395))^x396);

	if (t98 != 29006) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = -1;
	uint32_t x398 = UINT32_MAX;
	int8_t x400 = INT8_MAX;
	static int64_t t99 = 47342268496095LL;

	t99 = ((x397&(x398^x399))^x400);

	if (t99 != 9223372032559808639LL) { NG(); } else { ; }
	
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

