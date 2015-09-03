#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = UINT32_MAX;
volatile int64_t x18 = 201276326549386LL;
static uint8_t x20 = 2U;
volatile int8_t x24 = 0;
uint64_t t5 = 54615801531LLU;
static int32_t x27 = INT32_MAX;
int64_t t8 = 72LL;
volatile int32_t t9 = -28;
uint8_t x41 = 2U;
uint64_t x45 = 112399199438LLU;
uint8_t x53 = 98U;
int32_t x72 = -1;
volatile int8_t x74 = -22;
int32_t x87 = INT32_MIN;
int32_t x89 = -626414012;
int64_t x92 = 938150663LL;
int32_t x103 = INT32_MAX;
int64_t x108 = INT64_MAX;
volatile int64_t x115 = 1702942810828614LL;
volatile uint64_t t28 = UINT64_MAX;
volatile int8_t x118 = INT8_MIN;
int64_t x119 = INT64_MAX;
static int16_t x121 = INT16_MAX;
static int8_t x123 = INT8_MIN;
int8_t x127 = 0;
volatile int32_t t32 = 16222823;
static int64_t x137 = -155307119691517673LL;
static int16_t x139 = INT16_MAX;
int32_t x140 = 81039803;
volatile int16_t x142 = INT16_MIN;
uint64_t x149 = 1LLU;
volatile uint64_t x150 = 0LLU;
uint16_t x155 = 43U;
int64_t x156 = 19375LL;
int16_t x157 = -1;
int64_t x158 = INT64_MIN;
int8_t x163 = INT8_MIN;
static volatile uint32_t t40 = 164640U;
uint16_t x165 = 3522U;
int64_t t41 = 5435689294LL;
volatile int64_t t42 = -493842942LL;
uint32_t t43 = 3268U;
volatile int32_t x178 = 3355;
volatile int64_t x181 = INT64_MIN;
int8_t x184 = 0;
int64_t x200 = INT64_MIN;
int64_t x203 = INT64_MIN;
volatile int16_t x212 = INT16_MIN;
static volatile int8_t x214 = INT8_MIN;
static int8_t x216 = INT8_MAX;
volatile uint64_t t57 = UINT64_MAX;
uint8_t x237 = UINT8_MAX;
uint32_t x245 = UINT32_MAX;
uint16_t x264 = 2U;
static int32_t x271 = INT32_MIN;
int16_t x276 = -3426;
volatile int16_t x280 = INT16_MAX;
int64_t t69 = 268012257412LL;
static int16_t x287 = 0;
int64_t x291 = -752220412130734615LL;
static uint8_t x298 = UINT8_MAX;
static int16_t x299 = INT16_MIN;
int8_t x306 = -7;
int16_t x310 = 110;
volatile int32_t x320 = INT32_MAX;
uint8_t x324 = UINT8_MAX;
volatile uint64_t t80 = UINT64_MAX;
int8_t x329 = INT8_MIN;
uint32_t x336 = 690647U;
uint64_t x338 = 4338LLU;
int64_t x343 = INT64_MIN;
uint32_t x347 = 651318U;
volatile int64_t t86 = 255013832066054LL;
int8_t x352 = INT8_MAX;
int16_t x369 = INT16_MIN;
volatile int64_t t92 = -331LL;
uint32_t t94 = 26U;
int8_t x386 = 47;
int8_t x389 = 14;
int8_t x393 = -1;
static int8_t x397 = -51;


void f0(void) {
	static int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MAX;
	uint16_t x4 = 37U;
	static volatile uint32_t t0 = UINT32_MAX;

	t0 = ((x1&(x2|x3))|x4);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int8_t x6 = -1;
	volatile int8_t x7 = -3;
	static uint8_t x8 = 126U;
	volatile int64_t t1 = -9LL;

	t1 = ((x5&(x6|x7))|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 572104U;
	int16_t x10 = -3;
	int64_t x11 = INT64_MAX;
	static int8_t x12 = -1;
	volatile int64_t t2 = -5LL;

	t2 = ((x9&(x10|x11))|x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int16_t x14 = -1;
	uint8_t x15 = UINT8_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = -106;

	t3 = ((x13&(x14|x15))|x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -22;
	int8_t x19 = INT8_MIN;
	int64_t t4 = 0LL;

	t4 = ((x17&(x18|x19))|x20);

	if (t4 != -118LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 1;
	uint64_t x22 = 6884523936LLU;
	volatile int32_t x23 = -6523;

	t5 = ((x21&(x22|x23))|x24);

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 780U;
	static int16_t x26 = INT16_MIN;
	int64_t x28 = 219072159606LL;
	volatile int64_t t6 = 16970742236LL;

	t6 = ((x25&(x26|x27))|x28);

	if (t6 != 219072159614LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int16_t x30 = INT16_MAX;
	int64_t x31 = 1LL;
	int8_t x32 = INT8_MAX;
	int64_t t7 = -513691986113LL;

	t7 = ((x29&(x30|x31))|x32);

	if (t7 != 32767LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	uint32_t x34 = 396772U;
	int64_t x35 = -1LL;
	int64_t x36 = -1LL;

	t8 = ((x33&(x34|x35))|x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -963811092;
	static int8_t x38 = INT8_MAX;
	static int16_t x39 = INT16_MIN;
	static volatile int16_t x40 = INT16_MIN;

	t9 = ((x37&(x38|x39))|x40);

	if (t9 != -32660) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = 381420616LL;
	volatile int64_t x43 = 14LL;
	volatile int16_t x44 = INT16_MAX;
	volatile int64_t t10 = 3224978953748248538LL;

	t10 = ((x41&(x42|x43))|x44);

	if (t10 != 32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = -1LL;
	int64_t x47 = INT64_MAX;
	static int64_t x48 = -957LL;
	uint64_t t11 = 248135301082685331LLU;

	t11 = ((x45&(x46|x47))|x48);

	if (t11 != 18446744073709550799LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -54;
	int16_t x50 = 2;
	uint16_t x51 = UINT16_MAX;
	int64_t x52 = -93512582LL;
	volatile int64_t t12 = 528838191993787LL;

	t12 = ((x49&(x50|x51))|x52);

	if (t12 != -93454342LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MAX;
	volatile int8_t x56 = INT8_MIN;
	int64_t t13 = 1LL;

	t13 = ((x53&(x54|x55))|x56);

	if (t13 != -30LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -431;
	uint16_t x58 = 28816U;
	volatile int16_t x59 = -29;
	static uint64_t x60 = 623531LLU;
	static volatile uint64_t t14 = 83LLU;

	t14 = ((x57&(x58|x59))|x60);

	if (t14 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -12;
	static volatile uint16_t x62 = 20U;
	uint64_t x63 = 5702140539LLU;
	static int64_t x64 = INT64_MIN;
	uint64_t t15 = 3034445760636055402LLU;

	t15 = ((x61&(x62|x63))|x64);

	if (t15 != 9223372042556916340LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 862824118LL;
	volatile int16_t x66 = INT16_MIN;
	int16_t x67 = INT16_MIN;
	uint16_t x68 = 3223U;
	static volatile int64_t t16 = 146519469009LL;

	t16 = ((x65&(x66|x67))|x68);

	if (t16 != 862817431LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = 481075739213923LL;
	int8_t x70 = -1;
	volatile int64_t x71 = INT64_MIN;
	volatile int64_t t17 = -195LL;

	t17 = ((x69&(x70|x71))|x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	volatile uint16_t x75 = UINT16_MAX;
	int32_t x76 = INT32_MIN;
	static volatile uint64_t t18 = UINT64_MAX;

	t18 = ((x73&(x74|x75))|x76);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	uint16_t x78 = UINT16_MAX;
	int8_t x79 = -1;
	static volatile int8_t x80 = 1;
	int32_t t19 = -136705372;

	t19 = ((x77&(x78|x79))|x80);

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 4421826LL;
	int32_t x82 = INT32_MIN;
	static int16_t x83 = -1;
	uint32_t x84 = 166U;
	static volatile int64_t t20 = -1LL;

	t20 = ((x81&(x82|x83))|x84);

	if (t20 != 4421862LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -278972437LL;
	volatile int16_t x86 = -19;
	int16_t x88 = INT16_MIN;
	volatile int64_t t21 = -72499532370676LL;

	t21 = ((x85&(x86|x87))|x88);

	if (t21 != -18455LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = UINT8_MAX;
	static volatile uint64_t x91 = 55951842LLU;
	volatile uint64_t t22 = 95137783LLU;

	t22 = ((x89&(x90|x91))|x92);

	if (t22 != 938183495LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = 12;
	int64_t x94 = 2LL;
	int64_t x95 = 495643134LL;
	uint32_t x96 = 726773403U;
	volatile int64_t t23 = -176139409LL;

	t23 = ((x93&(x94|x95))|x96);

	if (t23 != 726773407LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = 11;
	uint16_t x98 = UINT16_MAX;
	static int64_t x99 = INT64_MIN;
	int8_t x100 = -4;
	static volatile int64_t t24 = -3200187229725LL;

	t24 = ((x97&(x98|x99))|x100);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	volatile int8_t x102 = INT8_MIN;
	static int16_t x104 = -1;
	volatile int32_t t25 = -9351;

	t25 = ((x101&(x102|x103))|x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -16606538812557839LL;
	uint16_t x106 = UINT16_MAX;
	int16_t x107 = INT16_MIN;
	volatile int64_t t26 = 124LL;

	t26 = ((x105&(x106|x107))|x108);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MAX;
	uint8_t x111 = 3U;
	int16_t x112 = INT16_MIN;
	int32_t t27 = 1176;

	t27 = ((x109&(x110|x111))|x112);

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint64_t x114 = UINT64_MAX;
	volatile uint64_t x116 = UINT64_MAX;

	t28 = ((x113&(x114|x115))|x116);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	static int32_t x120 = INT32_MAX;
	int64_t t29 = -6415783071050LL;

	t29 = ((x117&(x118|x119))|x120);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x122 = UINT16_MAX;
	int32_t x124 = -3;
	static int32_t t30 = 39143;

	t30 = ((x121&(x122|x123))|x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = 9;
	static int32_t x126 = INT32_MIN;
	volatile int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 1904388;

	t31 = ((x125&(x126|x127))|x128);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static int8_t x130 = INT8_MAX;
	static int8_t x131 = INT8_MIN;
	uint8_t x132 = UINT8_MAX;

	t32 = ((x129&(x130|x131))|x132);

	if (t32 != -2147483393) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MAX;
	int16_t x134 = INT16_MIN;
	static int64_t x135 = -2LL;
	static int8_t x136 = -1;
	int64_t t33 = 1407LL;

	t33 = ((x133&(x134|x135))|x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x138 = 14365803LL;
	volatile int64_t t34 = 14826314532757LL;

	t34 = ((x137&(x138|x139))|x140);

	if (t34 != 81179071LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -2;
	volatile int32_t x143 = -1;
	int64_t x144 = INT64_MIN;
	volatile int64_t t35 = 355805733846227041LL;

	t35 = ((x141&(x142|x143))|x144);

	if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MAX;
	static int8_t x148 = -1;
	static volatile int64_t t36 = 2761701386998273978LL;

	t36 = ((x145&(x146|x147))|x148);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x151 = 350181345LL;
	volatile int32_t x152 = -1;
	uint64_t t37 = UINT64_MAX;

	t37 = ((x149&(x150|x151))|x152);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MAX;
	int32_t x154 = 901490855;
	volatile int64_t t38 = -115050650LL;

	t38 = ((x153&(x154|x155))|x156);

	if (t38 != 27567LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x159 = UINT32_MAX;
	int32_t x160 = INT32_MIN;
	volatile int64_t t39 = 44298207320LL;

	t39 = ((x157&(x158|x159))|x160);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	uint32_t x162 = 205U;
	static int8_t x164 = 37;

	t40 = ((x161&(x162|x163))|x164);

	if (t40 != 32749U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x166 = INT16_MIN;
	int64_t x167 = -2LL;
	int8_t x168 = -1;

	t41 = ((x165&(x166|x167))|x168);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MAX;
	int16_t x170 = -113;
	uint32_t x171 = 13576U;
	static volatile uint16_t x172 = 7274U;

	t42 = ((x169&(x170|x171))|x172);

	if (t42 != 4294967279LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x173 = INT32_MAX;
	static uint32_t x174 = 100U;
	static uint16_t x175 = 911U;
	int16_t x176 = 0;

	t43 = ((x173&(x174|x175))|x176);

	if (t43 != 1007U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -8192;
	static int16_t x179 = -2;
	static volatile int32_t x180 = 387879;
	volatile int32_t t44 = -479817;

	t44 = ((x177&(x178|x179))|x180);

	if (t44 != -5337) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = -84;
	static int8_t x183 = 1;
	volatile int64_t t45 = INT64_MIN;

	t45 = ((x181&(x182|x183))|x184);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 445820;
	static int32_t x186 = 59063;
	static int8_t x187 = -42;
	volatile int16_t x188 = INT16_MIN;
	static int32_t t46 = 46221;

	t46 = ((x185&(x186|x187))|x188);

	if (t46 != -12940) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x189 = UINT16_MAX;
	int16_t x190 = -1;
	volatile int16_t x191 = -1;
	uint8_t x192 = 10U;
	volatile int32_t t47 = -3;

	t47 = ((x189&(x190|x191))|x192);

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 1U;
	static volatile int32_t x194 = 19518;
	static int16_t x195 = 269;
	int32_t x196 = INT32_MIN;
	static volatile int32_t t48 = -15;

	t48 = ((x193&(x194|x195))|x196);

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = 4;
	uint64_t x198 = 173483732740185LLU;
	int64_t x199 = INT64_MAX;
	volatile uint64_t t49 = 440730844LLU;

	t49 = ((x197&(x198|x199))|x200);

	if (t49 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	int32_t x202 = INT32_MIN;
	int16_t x204 = -685;
	int64_t t50 = 150324LL;

	t50 = ((x201&(x202|x203))|x204);

	if (t50 != -685LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 2032;
	static int64_t x206 = -1LL;
	int16_t x207 = INT16_MIN;
	int32_t x208 = 8;
	volatile int64_t t51 = -81779692LL;

	t51 = ((x205&(x206|x207))|x208);

	if (t51 != 2040LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 6752;
	int64_t x210 = -287648691524995334LL;
	int16_t x211 = INT16_MIN;
	volatile int64_t t52 = 3560230853086723LL;

	t52 = ((x209&(x210|x211))|x212);

	if (t52 != -28064LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x213 = 368U;
	int64_t x215 = INT64_MIN;
	volatile int64_t t53 = 1693610186LL;

	t53 = ((x213&(x214|x215))|x216);

	if (t53 != 383LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x217 = 13U;
	static volatile int64_t x218 = 12260124285688268LL;
	int8_t x219 = INT8_MIN;
	static uint16_t x220 = 2561U;
	int64_t t54 = -57339LL;

	t54 = ((x217&(x218|x219))|x220);

	if (t54 != 2573LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 2904U;
	int8_t x222 = INT8_MIN;
	uint32_t x223 = 33U;
	volatile int32_t x224 = INT32_MIN;
	volatile uint32_t t55 = 4503U;

	t55 = ((x221&(x222|x223))|x224);

	if (t55 != 2147486464U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 2265U;
	static volatile uint32_t x226 = 241403433U;
	int64_t x227 = 75021613614274066LL;
	int16_t x228 = INT16_MIN;
	volatile int64_t t56 = -8389LL;

	t56 = ((x225&(x226|x227))|x228);

	if (t56 != -32743LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	volatile uint64_t x230 = 36LLU;
	int64_t x231 = 17576108509611147LL;
	int16_t x232 = -1;

	t57 = ((x229&(x230|x231))|x232);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	volatile int16_t x234 = 23;
	uint64_t x235 = UINT64_MAX;
	int32_t x236 = INT32_MIN;
	uint64_t t58 = 420776366LLU;

	t58 = ((x233&(x234|x235))|x236);

	if (t58 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = 1211;
	int8_t x239 = -12;
	int16_t x240 = -3173;
	int32_t t59 = -752;

	t59 = ((x237&(x238|x239))|x240);

	if (t59 != -3073) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = -17;
	uint32_t x243 = 596549329U;
	static int32_t x244 = -1;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = ((x241&(x242|x243))|x244);

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x246 = 244943767U;
	int64_t x247 = INT64_MAX;
	volatile uint8_t x248 = 1U;
	int64_t t61 = -907916901592779LL;

	t61 = ((x245&(x246|x247))|x248);

	if (t61 != 4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = INT8_MIN;
	static volatile uint16_t x250 = 71U;
	static uint8_t x251 = UINT8_MAX;
	int8_t x252 = -37;
	volatile int32_t t62 = 893;

	t62 = ((x249&(x250|x251))|x252);

	if (t62 != -37) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	uint64_t x254 = UINT64_MAX;
	uint32_t x255 = UINT32_MAX;
	int64_t x256 = INT64_MIN;
	volatile uint64_t t63 = 106654919652321LLU;

	t63 = ((x253&(x254|x255))|x256);

	if (t63 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = INT8_MIN;
	uint16_t x258 = 38U;
	int32_t x259 = INT32_MAX;
	volatile uint64_t x260 = UINT64_MAX;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = ((x257&(x258|x259))|x260);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = INT64_MIN;
	static volatile uint16_t x263 = 4U;
	volatile int64_t t65 = -174764405LL;

	t65 = ((x261&(x262|x263))|x264);

	if (t65 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = INT64_MIN;
	int32_t x266 = INT32_MIN;
	int64_t x267 = -1LL;
	volatile uint32_t x268 = 403061U;
	static int64_t t66 = -5328597328785571LL;

	t66 = ((x265&(x266|x267))|x268);

	if (t66 != -9223372036854372747LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	static int64_t x270 = INT64_MIN;
	uint16_t x272 = 4033U;
	int64_t t67 = -170814586298LL;

	t67 = ((x269&(x270|x271))|x272);

	if (t67 != -2147479615LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = 32598187;
	int64_t x274 = -3600362558922390281LL;
	uint16_t x275 = UINT16_MAX;
	int64_t t68 = -319627113LL;

	t68 = ((x273&(x274|x275))|x276);

	if (t68 != -1345LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 112U;
	int64_t x278 = INT64_MAX;
	static int8_t x279 = -1;

	t69 = ((x277&(x278|x279))|x280);

	if (t69 != 32767LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MIN;
	int8_t x282 = -1;
	int16_t x283 = INT16_MIN;
	int64_t x284 = 565319031083886911LL;
	static volatile int64_t t70 = 1674336LL;

	t70 = ((x281&(x282|x283))|x284);

	if (t70 != -8658053005770888897LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 94767054946756862LLU;
	int8_t x286 = -1;
	uint32_t x288 = UINT32_MAX;
	volatile uint64_t t71 = 74991665974LLU;

	t71 = ((x285&(x286|x287))|x288);

	if (t71 != 94767057521868799LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = 93340735;
	static int32_t x290 = 2291;
	int64_t x292 = INT64_MAX;
	int64_t t72 = INT64_MAX;

	t72 = ((x289&(x290|x291))|x292);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = -1;
	volatile int8_t x294 = INT8_MIN;
	volatile int64_t x295 = INT64_MAX;
	int64_t x296 = -1LL;
	int64_t t73 = 9722213410483008LL;

	t73 = ((x293&(x294|x295))|x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 1478749577U;
	int64_t x300 = -764LL;
	static volatile int64_t t74 = 907027662396620LL;

	t74 = ((x297&(x298|x299))|x300);

	if (t74 != -627LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 1046035630U;
	uint16_t x302 = UINT16_MAX;
	int8_t x303 = INT8_MIN;
	uint32_t x304 = 7U;
	volatile uint32_t t75 = 0U;

	t75 = ((x301&(x302|x303))|x304);

	if (t75 != 1046035631U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	uint32_t x307 = 204152199U;
	volatile int8_t x308 = -1;
	volatile int64_t t76 = -22812775421LL;

	t76 = ((x305&(x306|x307))|x308);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x309 = -1;
	static uint8_t x311 = UINT8_MAX;
	volatile int64_t x312 = INT64_MIN;
	volatile int64_t t77 = -31026LL;

	t77 = ((x309&(x310|x311))|x312);

	if (t77 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	static uint16_t x314 = 460U;
	int8_t x315 = 0;
	volatile uint32_t x316 = UINT32_MAX;
	static uint32_t t78 = UINT32_MAX;

	t78 = ((x313&(x314|x315))|x316);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	uint32_t x318 = UINT32_MAX;
	uint8_t x319 = UINT8_MAX;
	volatile int64_t t79 = 396LL;

	t79 = ((x317&(x318|x319))|x320);

	if (t79 != 2147483647LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MIN;

	t80 = ((x321&(x322|x323))|x324);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -2;
	int32_t x326 = 1182;
	int8_t x327 = INT8_MIN;
	static int32_t x328 = INT32_MIN;
	volatile int32_t t81 = 250077;

	t81 = ((x325&(x326|x327))|x328);

	if (t81 != -98) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = 9480;
	int8_t x331 = INT8_MAX;
	int32_t x332 = -8;
	int32_t t82 = -19;

	t82 = ((x329&(x330|x331))|x332);

	if (t82 != -8) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	volatile int8_t x335 = 15;
	uint32_t t83 = 55878U;

	t83 = ((x333&(x334|x335))|x336);

	if (t83 != 2148174295U) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = 13137;
	uint32_t x339 = 131360525U;
	int16_t x340 = INT16_MAX;
	static uint64_t t84 = 820LLU;

	t84 = ((x337&(x338|x339))|x340);

	if (t84 != 32767LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	static int32_t x342 = 748125344;
	int16_t x344 = -1;
	volatile int64_t t85 = -50LL;

	t85 = ((x341&(x342|x343))|x344);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	volatile int64_t x346 = INT64_MAX;
	volatile int32_t x348 = 11940;

	t86 = ((x345&(x346|x347))|x348);

	if (t86 != 32767LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 88110;
	int64_t x350 = INT64_MIN;
	uint8_t x351 = UINT8_MAX;
	volatile int64_t t87 = 141529038230477LL;

	t87 = ((x349&(x350|x351))|x352);

	if (t87 != 127LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	int32_t x354 = -6112390;
	volatile int16_t x355 = INT16_MAX;
	int8_t x356 = 1;
	int32_t t88 = -968000;

	t88 = ((x353&(x354|x355))|x356);

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int32_t x358 = 21871;
	int16_t x359 = -401;
	int16_t x360 = -13;
	volatile int64_t t89 = 233306LL;

	t89 = ((x357&(x358|x359))|x360);

	if (t89 != -13LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 131U;
	static uint16_t x362 = UINT16_MAX;
	static volatile uint16_t x363 = UINT16_MAX;
	uint32_t x364 = 4U;
	static uint32_t t90 = 2578U;

	t90 = ((x361&(x362|x363))|x364);

	if (t90 != 135U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	uint8_t x366 = UINT8_MAX;
	static int64_t x367 = 4700LL;
	static volatile int8_t x368 = -1;
	static int64_t t91 = -172922727231495691LL;

	t91 = ((x365&(x366|x367))|x368);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x370 = INT32_MAX;
	int64_t x371 = 18LL;
	static int16_t x372 = INT16_MIN;

	t92 = ((x369&(x370|x371))|x372);

	if (t92 != -32768LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x373 = 1620022480303989LLU;
	static int16_t x374 = INT16_MAX;
	int32_t x375 = 181;
	int32_t x376 = -1988;
	static volatile uint64_t t93 = 64806LLU;

	t93 = ((x373&(x374|x375))|x376);

	if (t93 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = 0;
	int8_t x378 = INT8_MIN;
	uint32_t x379 = UINT32_MAX;
	static int8_t x380 = -58;

	t94 = ((x377&(x378|x379))|x380);

	if (t94 != 4294967238U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x381 = 56U;
	volatile int16_t x382 = INT16_MIN;
	uint32_t x383 = UINT32_MAX;
	static int64_t x384 = -1LL;
	static volatile int64_t t95 = -4LL;

	t95 = ((x381&(x382|x383))|x384);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x385 = 25896127595333LLU;
	int32_t x387 = -837099893;
	int8_t x388 = 0;
	uint64_t t96 = 21273727592145172LLU;

	t96 = ((x385&(x386|x387))|x388);

	if (t96 != 25895567393285LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = 138;
	int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MIN;
	volatile int64_t t97 = 242LL;

	t97 = ((x389&(x390|x391))|x392);

	if (t97 != -2147483638LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MIN;
	int64_t x395 = INT64_MIN;
	uint32_t x396 = 234U;
	volatile int64_t t98 = -1764639168905937321LL;

	t98 = ((x393&(x394|x395))|x396);

	if (t98 != -9223372036854775574LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = -1;
	static int32_t x399 = INT32_MAX;
	static volatile uint8_t x400 = UINT8_MAX;
	volatile int32_t t99 = 517506065;

	t99 = ((x397&(x398|x399))|x400);

	if (t99 != -1) { NG(); } else { ; }
	
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

