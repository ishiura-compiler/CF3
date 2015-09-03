#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = 1;
volatile uint32_t x3 = 62467916U;
uint64_t x13 = UINT64_MAX;
uint8_t x22 = UINT8_MAX;
int64_t x23 = -1LL;
int32_t x27 = INT32_MAX;
uint8_t x30 = 8U;
int16_t x33 = INT16_MIN;
volatile int64_t t8 = 23616LL;
int8_t x39 = INT8_MIN;
uint32_t x42 = UINT32_MAX;
static volatile int8_t x43 = INT8_MAX;
static int32_t x47 = 382685363;
static int16_t x52 = 50;
uint64_t x57 = 22750241892LLU;
uint32_t x70 = 7400U;
volatile uint8_t x71 = UINT8_MAX;
uint64_t t16 = 560LLU;
uint16_t x77 = 87U;
int32_t t22 = -217;
int32_t x102 = -1;
int32_t x109 = 60666268;
int16_t x114 = INT16_MIN;
int16_t x125 = 1;
uint8_t x130 = UINT8_MAX;
static volatile int16_t x131 = 279;
int32_t x144 = 6;
uint8_t x147 = UINT8_MAX;
volatile int16_t x157 = INT16_MIN;
volatile uint16_t x160 = UINT16_MAX;
static volatile int32_t t38 = 9931431;
volatile int16_t x161 = 1;
static int8_t x174 = 1;
volatile int64_t x178 = -499669973064953LL;
int16_t x179 = -35;
int32_t x180 = 8688113;
int32_t x189 = -104487;
static int64_t t46 = 1815028921090885LL;
int16_t x196 = 110;
int8_t x198 = -1;
int64_t t48 = -23093LL;
int32_t x201 = INT32_MIN;
uint64_t x202 = 111106LLU;
volatile uint32_t t50 = 16U;
uint64_t x222 = 60298LLU;
int8_t x224 = INT8_MIN;
uint32_t x225 = 23570171U;
int8_t x227 = INT8_MAX;
static int64_t x239 = INT64_MIN;
uint16_t x251 = UINT16_MAX;
int32_t x255 = INT32_MIN;
uint16_t x256 = 3157U;
uint8_t x262 = UINT8_MAX;
static uint64_t t64 = 1391072843LLU;
int32_t x276 = INT32_MIN;
int32_t x277 = INT32_MIN;
uint8_t x278 = 124U;
int16_t x280 = -1;
uint32_t x283 = UINT32_MAX;
static int16_t x285 = -7;
volatile int64_t x295 = INT64_MAX;
static int8_t x297 = INT8_MAX;
uint64_t x303 = 12135047524316LLU;
uint32_t x306 = 29U;
int8_t x307 = 1;
int64_t x308 = INT64_MIN;
int64_t t76 = 5942899010LL;
uint8_t x317 = 3U;
int32_t x329 = -1;
volatile int32_t x331 = -1;
int16_t x343 = INT16_MIN;
int32_t t84 = INT32_MAX;
int8_t x346 = -1;
int32_t t85 = -39870406;
int8_t x350 = -12;
int8_t x351 = -21;
volatile int64_t x352 = -1LL;
int8_t x353 = -1;
volatile int8_t x355 = 1;
uint32_t x363 = UINT32_MAX;
volatile uint64_t x365 = 67545LLU;
static int16_t x368 = INT16_MAX;
volatile uint64_t t90 = 171LLU;
uint16_t x369 = UINT16_MAX;
int32_t x376 = -1;
int8_t x382 = INT8_MIN;
uint64_t t95 = 12405LLU;
int64_t x391 = 6544133742028LL;
volatile int64_t x395 = -498305899875258490LL;
static int64_t x401 = 15984561391LL;
int16_t x403 = -1;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int32_t x4 = INT32_MAX;
	uint32_t t0 = 10294U;

	t0 = (((x1&x2)/x3)^x4);

	if (t0 != 2147483647U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = -5176338LL;
	static volatile int64_t x7 = INT64_MIN;
	volatile uint64_t x8 = 160LLU;
	static uint64_t t1 = 64938LLU;

	t1 = (((x5&x6)/x7)^x8);

	if (t1 != 160LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int8_t x10 = -30;
	int64_t x11 = INT64_MIN;
	uint32_t x12 = 3U;
	int64_t t2 = -4013531939934634185LL;

	t2 = (((x9&x10)/x11)^x12);

	if (t2 != 3LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -1;
	uint16_t x15 = 1909U;
	uint8_t x16 = 0U;
	static uint64_t t3 = 9717768LLU;

	t3 = (((x13&x14)/x15)^x16);

	if (t3 != 9663040373865663LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 0;
	static int32_t x18 = INT32_MIN;
	uint64_t x19 = 5553727LLU;
	int64_t x20 = 40LL;
	uint64_t t4 = 17357739418LLU;

	t4 = (((x17&x18)/x19)^x20);

	if (t4 != 40LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	int64_t x24 = -619LL;
	int64_t t5 = -2175656LL;

	t5 = (((x21&x22)/x23)^x24);

	if (t5 != -619LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 3U;
	uint16_t x26 = 159U;
	volatile int64_t x28 = -1LL;
	volatile int64_t t6 = 23311828123644LL;

	t6 = (((x25&x26)/x27)^x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int8_t x31 = 1;
	static volatile uint64_t x32 = 8654824LLU;
	static uint64_t t7 = 1905068707458LLU;

	t7 = (((x29&x30)/x31)^x32);

	if (t7 != 8654824LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = 1;
	volatile int64_t x35 = -64133427352558LL;
	uint32_t x36 = 1571U;

	t8 = (((x33&x34)/x35)^x36);

	if (t8 != 1571LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 12644U;
	static volatile uint16_t x38 = 870U;
	static uint32_t x40 = 2859U;
	static volatile uint32_t t9 = 15035602U;

	t9 = (((x37&x38)/x39)^x40);

	if (t9 != 4294964437U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 6366938U;
	static uint16_t x44 = 52U;
	uint32_t t10 = 31175U;

	t10 = (((x41&x42)/x43)^x44);

	if (t10 != 50145U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int16_t x46 = INT16_MAX;
	int64_t x48 = INT64_MAX;
	volatile int64_t t11 = INT64_MAX;

	t11 = (((x45&x46)/x47)^x48);

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	static int32_t x50 = INT32_MAX;
	uint8_t x51 = 4U;
	volatile int64_t t12 = -16517124727313LL;

	t12 = (((x49&x50)/x51)^x52);

	if (t12 != 50LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	volatile uint32_t x54 = UINT32_MAX;
	static volatile uint32_t x55 = 1634377U;
	int16_t x56 = INT16_MIN;
	volatile uint32_t t13 = 173684348U;

	t13 = (((x53&x54)/x55)^x56);

	if (t13 != 4294937155U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x58 = INT32_MIN;
	volatile uint8_t x59 = UINT8_MAX;
	uint8_t x60 = 97U;
	uint64_t t14 = 130984313159983407LLU;

	t14 = (((x57&x58)/x59)^x60);

	if (t14 != 84215140LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 390;
	int64_t x62 = -1LL;
	int8_t x63 = -1;
	uint8_t x64 = 13U;
	int64_t t15 = 19224554297LL;

	t15 = (((x61&x62)/x63)^x64);

	if (t15 != -393LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 449409669U;
	volatile uint64_t x72 = 838LLU;

	t16 = (((x69&x70)/x71)^x72);

	if (t16 != 854LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = -1;
	static int16_t x74 = INT16_MIN;
	int8_t x75 = -1;
	int64_t x76 = -1LL;
	int64_t t17 = 16721108791LL;

	t17 = (((x73&x74)/x75)^x76);

	if (t17 != -32769LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = INT32_MIN;
	uint64_t x79 = UINT64_MAX;
	static int16_t x80 = -1;
	uint64_t t18 = UINT64_MAX;

	t18 = (((x77&x78)/x79)^x80);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -1;
	int8_t x82 = INT8_MIN;
	int64_t x83 = -159908100476874889LL;
	int8_t x84 = INT8_MAX;
	int64_t t19 = 1602LL;

	t19 = (((x81&x82)/x83)^x84);

	if (t19 != 127LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -50996716611422LL;
	static uint32_t x86 = UINT32_MAX;
	int16_t x87 = INT16_MIN;
	uint16_t x88 = UINT16_MAX;
	int64_t t20 = -16780862554746027LL;

	t20 = (((x85&x86)/x87)^x88);

	if (t20 != -12893LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	int64_t x90 = 71LL;
	int32_t x91 = INT32_MIN;
	int16_t x92 = -1;
	volatile int64_t t21 = -9229330119991817LL;

	t21 = (((x89&x90)/x91)^x92);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x93 = 2U;
	int16_t x94 = INT16_MAX;
	int16_t x95 = INT16_MAX;
	int32_t x96 = -1;

	t22 = (((x93&x94)/x95)^x96);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	int32_t x98 = INT32_MIN;
	volatile int32_t x99 = INT32_MIN;
	int8_t x100 = -1;
	int32_t t23 = -58390719;

	t23 = (((x97&x98)/x99)^x100);

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	int16_t x103 = INT16_MAX;
	int16_t x104 = INT16_MIN;
	static int32_t t24 = 20504;

	t24 = (((x101&x102)/x103)^x104);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 16U;
	static int16_t x106 = INT16_MIN;
	static volatile int16_t x107 = INT16_MIN;
	int16_t x108 = INT16_MAX;
	int32_t t25 = -22;

	t25 = (((x105&x106)/x107)^x108);

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x110 = 1U;
	static volatile int32_t x111 = INT32_MAX;
	int8_t x112 = 9;
	volatile int32_t t26 = 2296;

	t26 = (((x109&x110)/x111)^x112);

	if (t26 != 9) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = 347;
	volatile int64_t x115 = 5056LL;
	int16_t x116 = 128;
	int64_t t27 = 9LL;

	t27 = (((x113&x114)/x115)^x116);

	if (t27 != 128LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = -1;
	static uint16_t x118 = 118U;
	uint32_t x119 = 11U;
	static int16_t x120 = INT16_MAX;
	uint32_t t28 = 14U;

	t28 = (((x117&x118)/x119)^x120);

	if (t28 != 32757U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = INT64_MAX;
	uint16_t x122 = 0U;
	uint64_t x123 = UINT64_MAX;
	static uint16_t x124 = UINT16_MAX;
	volatile uint64_t t29 = 822349874187740LLU;

	t29 = (((x121&x122)/x123)^x124);

	if (t29 != 65535LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x126 = 1414377U;
	int64_t x127 = INT64_MAX;
	uint64_t x128 = 25LLU;
	volatile uint64_t t30 = 223LLU;

	t30 = (((x125&x126)/x127)^x128);

	if (t30 != 25LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 20U;
	int32_t x132 = 5106709;
	int32_t t31 = 9184686;

	t31 = (((x129&x130)/x131)^x132);

	if (t31 != 5106709) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MAX;
	int16_t x134 = -1;
	int16_t x135 = INT16_MIN;
	int32_t x136 = -1;
	volatile int64_t t32 = 8260314372054LL;

	t32 = (((x133&x134)/x135)^x136);

	if (t32 != 281474976710654LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MAX;
	volatile int32_t x138 = INT32_MIN;
	uint32_t x139 = 1U;
	uint8_t x140 = UINT8_MAX;
	uint32_t t33 = 445470868U;

	t33 = (((x137&x138)/x139)^x140);

	if (t33 != 255U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = 15;
	int8_t x142 = -1;
	int8_t x143 = INT8_MAX;
	int32_t t34 = -378;

	t34 = (((x141&x142)/x143)^x144);

	if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	int64_t x146 = -1LL;
	volatile uint32_t x148 = 718U;
	volatile int64_t t35 = -3918274676739402LL;

	t35 = (((x145&x146)/x147)^x148);

	if (t35 != -690LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 1405079514U;
	int64_t x150 = -42790LL;
	int8_t x151 = INT8_MAX;
	volatile int32_t x152 = INT32_MAX;
	volatile int64_t t36 = -1603978LL;

	t36 = (((x149&x150)/x151)^x152);

	if (t36 != 2136420301LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = UINT16_MAX;
	int64_t x154 = INT64_MIN;
	int16_t x155 = -1;
	int8_t x156 = INT8_MIN;
	volatile int64_t t37 = 1026919054477122LL;

	t37 = (((x153&x154)/x155)^x156);

	if (t37 != -128LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x158 = 17;
	volatile int8_t x159 = -8;

	t38 = (((x157&x158)/x159)^x160);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x162 = 5;
	uint16_t x163 = UINT16_MAX;
	volatile int32_t x164 = INT32_MAX;
	static int32_t t39 = INT32_MAX;

	t39 = (((x161&x162)/x163)^x164);

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = UINT64_MAX;
	uint32_t x166 = UINT32_MAX;
	volatile int8_t x167 = 2;
	volatile int8_t x168 = -20;
	volatile uint64_t t40 = 724580LLU;

	t40 = (((x165&x166)/x167)^x168);

	if (t40 != 18446744071562067987LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = -5;
	int64_t x170 = 136109800912929571LL;
	int16_t x171 = -1326;
	int8_t x172 = 23;
	int64_t t41 = -400303LL;

	t41 = (((x169&x170)/x171)^x172);

	if (t41 != -102646908682439LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x173 = 158592721142491931LLU;
	static int16_t x175 = 3;
	int8_t x176 = INT8_MIN;
	volatile uint64_t t42 = 2179564963090244LLU;

	t42 = (((x173&x174)/x175)^x176);

	if (t42 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = -95;
	volatile int64_t t43 = -2892224473588LL;

	t43 = (((x177&x178)/x179)^x180);

	if (t43 != 14276276256952LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x181 = -1;
	static int32_t x182 = -913548451;
	volatile int8_t x183 = -1;
	int32_t x184 = INT32_MIN;
	int32_t t44 = 18760891;

	t44 = (((x181&x182)/x183)^x184);

	if (t44 != -1233935197) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = -1;
	uint32_t x186 = 4632U;
	static int8_t x187 = INT8_MIN;
	static volatile int32_t x188 = INT32_MIN;
	uint32_t t45 = 3709U;

	t45 = (((x185&x186)/x187)^x188);

	if (t45 != 2147483648U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x190 = -2262;
	int64_t x191 = 19369234267LL;
	static int16_t x192 = -1070;

	t46 = (((x189&x190)/x191)^x192);

	if (t46 != -1070LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = 8;
	uint8_t x194 = UINT8_MAX;
	uint64_t x195 = UINT64_MAX;
	uint64_t t47 = 50LLU;

	t47 = (((x193&x194)/x195)^x196);

	if (t47 != 110LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x197 = 5320233LL;
	int16_t x199 = INT16_MAX;
	int8_t x200 = INT8_MIN;

	t48 = (((x197&x198)/x199)^x200);

	if (t48 != -222LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x203 = INT32_MIN;
	uint16_t x204 = 188U;
	volatile uint64_t t49 = 33485813292927LLU;

	t49 = (((x201&x202)/x203)^x204);

	if (t49 != 188LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x205 = INT8_MAX;
	volatile uint32_t x206 = UINT32_MAX;
	int8_t x207 = INT8_MIN;
	uint8_t x208 = 35U;

	t50 = (((x205&x206)/x207)^x208);

	if (t50 != 35U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = UINT16_MAX;
	volatile uint32_t x210 = 18564630U;
	static volatile int16_t x211 = INT16_MAX;
	uint8_t x212 = 0U;
	uint32_t t51 = 28782266U;

	t51 = (((x209&x210)/x211)^x212);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x213 = -1;
	int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MIN;
	int8_t x216 = -7;
	static int32_t t52 = 0;

	t52 = (((x213&x214)/x215)^x216);

	if (t52 != -8) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = INT64_MAX;
	uint8_t x218 = UINT8_MAX;
	static volatile int64_t x219 = INT64_MAX;
	int16_t x220 = -27;
	volatile int64_t t53 = 738578532267LL;

	t53 = (((x217&x218)/x219)^x220);

	if (t53 != -27LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 61U;
	int32_t x223 = INT32_MIN;
	static volatile uint64_t t54 = 19619616632221674LLU;

	t54 = (((x221&x222)/x223)^x224);

	if (t54 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x226 = 33U;
	int16_t x228 = INT16_MIN;
	uint32_t t55 = 4U;

	t55 = (((x225&x226)/x227)^x228);

	if (t55 != 4294934528U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MAX;
	volatile uint32_t x230 = 1347U;
	int8_t x231 = 18;
	volatile uint64_t x232 = 4367216047487LLU;
	volatile uint64_t t56 = 2128435311849907888LLU;

	t56 = (((x229&x230)/x231)^x232);

	if (t56 != 4367216047413LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = UINT64_MAX;
	int8_t x234 = -1;
	static uint32_t x235 = 1855U;
	volatile uint8_t x236 = 38U;
	static volatile uint64_t t57 = 7487LLU;

	t57 = (((x233&x234)/x235)^x236);

	if (t57 != 9944336427875743LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x237 = 52839;
	static volatile int32_t x238 = -486600;
	volatile int64_t x240 = -535886LL;
	int64_t t58 = -864671967072138097LL;

	t58 = (((x237&x238)/x239)^x240);

	if (t58 != -535886LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x241 = 0U;
	int64_t x242 = 1179697649519528676LL;
	int8_t x243 = INT8_MIN;
	volatile uint64_t x244 = 155100LLU;
	volatile uint64_t t59 = 373294358348LLU;

	t59 = (((x241&x242)/x243)^x244);

	if (t59 != 155100LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x245 = UINT16_MAX;
	int16_t x246 = INT16_MIN;
	volatile int32_t x247 = -174;
	int16_t x248 = INT16_MIN;
	static int32_t t60 = -292724900;

	t60 = (((x245&x246)/x247)^x248);

	if (t60 != 32580) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MIN;
	uint64_t x252 = 1964462LLU;
	uint64_t t61 = 11872578LLU;

	t61 = (((x249&x250)/x251)^x252);

	if (t61 != 1964462LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = INT64_MIN;
	uint32_t x254 = UINT32_MAX;
	volatile int64_t t62 = 1159535533LL;

	t62 = (((x253&x254)/x255)^x256);

	if (t62 != 3157LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = INT16_MIN;
	volatile uint64_t x258 = 90LLU;
	int8_t x259 = -9;
	static int8_t x260 = -14;
	volatile uint64_t t63 = 668514574300019589LLU;

	t63 = (((x257&x258)/x259)^x260);

	if (t63 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 38018LLU;
	volatile int16_t x263 = INT16_MIN;
	static int32_t x264 = 72;

	t64 = (((x261&x262)/x263)^x264);

	if (t64 != 72LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -1;
	int8_t x266 = INT8_MIN;
	uint64_t x267 = 460462388589LLU;
	int32_t x268 = -1;
	volatile uint64_t t65 = 92948604805955571LLU;

	t65 = (((x265&x266)/x267)^x268);

	if (t65 != 18446744073669490267LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MIN;
	volatile int64_t x270 = 21308941898LL;
	int64_t x271 = 1LL;
	int16_t x272 = INT16_MIN;
	static int64_t t66 = 18647812274LL;

	t66 = (((x269&x270)/x271)^x272);

	if (t66 != -19327385600LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = -2;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = -1;
	volatile uint64_t t67 = 2728788317156479LLU;

	t67 = (((x273&x274)/x275)^x276);

	if (t67 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x279 = 1148;
	volatile int32_t t68 = -98945376;

	t68 = (((x277&x278)/x279)^x280);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x281 = UINT16_MAX;
	static uint8_t x282 = UINT8_MAX;
	int16_t x284 = INT16_MIN;
	volatile uint32_t t69 = 4U;

	t69 = (((x281&x282)/x283)^x284);

	if (t69 != 4294934528U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x286 = -43938940LL;
	volatile uint32_t x287 = UINT32_MAX;
	static volatile int8_t x288 = -1;
	int64_t t70 = 0LL;

	t70 = (((x285&x286)/x287)^x288);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = 0U;
	int16_t x290 = INT16_MIN;
	static int8_t x291 = -1;
	int64_t x292 = 25990789227LL;
	int64_t t71 = 1028089LL;

	t71 = (((x289&x290)/x291)^x292);

	if (t71 != 25990789227LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x293 = -5;
	int16_t x294 = -13;
	volatile int64_t x296 = INT64_MIN;
	int64_t t72 = INT64_MIN;

	t72 = (((x293&x294)/x295)^x296);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x298 = 192815331;
	int16_t x299 = -1;
	int32_t x300 = -117;
	int32_t t73 = -1815;

	t73 = (((x297&x298)/x299)^x300);

	if (t73 != 22) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MIN;
	uint16_t x302 = UINT16_MAX;
	int8_t x304 = INT8_MAX;
	volatile uint64_t t74 = 211LLU;

	t74 = (((x301&x302)/x303)^x304);

	if (t74 != 127LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = 2LL;
	volatile int64_t t75 = INT64_MIN;

	t75 = (((x305&x306)/x307)^x308);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MIN;
	uint16_t x310 = 20U;
	int8_t x311 = INT8_MIN;
	int8_t x312 = INT8_MIN;

	t76 = (((x309&x310)/x311)^x312);

	if (t76 != -128LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = INT32_MIN;
	static int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = 123U;
	int32_t t77 = -133;

	t77 = (((x313&x314)/x315)^x316);

	if (t77 != 65659) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x318 = 4U;
	uint64_t x319 = UINT64_MAX;
	int8_t x320 = -39;
	volatile uint64_t t78 = 200298705318822LLU;

	t78 = (((x317&x318)/x319)^x320);

	if (t78 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x321 = INT64_MAX;
	int32_t x322 = INT32_MAX;
	uint64_t x323 = UINT64_MAX;
	uint32_t x324 = 110U;
	volatile uint64_t t79 = 212817121405719310LLU;

	t79 = (((x321&x322)/x323)^x324);

	if (t79 != 110LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = 261649056888354170LLU;
	int8_t x326 = -18;
	int8_t x327 = 30;
	int32_t x328 = 425;
	uint64_t t80 = 228LLU;

	t80 = (((x325&x326)/x327)^x328);

	if (t80 != 8721635229611700LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x330 = UINT32_MAX;
	uint16_t x332 = UINT16_MAX;
	uint32_t t81 = 407U;

	t81 = (((x329&x330)/x331)^x332);

	if (t81 != 65534U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x333 = 0U;
	volatile int16_t x334 = INT16_MIN;
	volatile int32_t x335 = INT32_MIN;
	int64_t x336 = -1LL;
	int64_t t82 = -1LL;

	t82 = (((x333&x334)/x335)^x336);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = 524;
	uint16_t x338 = 889U;
	int32_t x339 = -27207898;
	uint64_t x340 = 9775LLU;
	uint64_t t83 = 193451221LLU;

	t83 = (((x337&x338)/x339)^x340);

	if (t83 != 9775LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x341 = UINT16_MAX;
	int32_t x342 = 5092;
	int32_t x344 = INT32_MAX;

	t84 = (((x341&x342)/x343)^x344);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = 39;
	int8_t x347 = INT8_MIN;
	static uint16_t x348 = 1402U;

	t85 = (((x345&x346)/x347)^x348);

	if (t85 != 1402) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = INT32_MIN;
	int64_t t86 = -635463328LL;

	t86 = (((x349&x350)/x351)^x352);

	if (t86 != -102261127LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x354 = UINT64_MAX;
	uint8_t x356 = 123U;
	static uint64_t t87 = 1LLU;

	t87 = (((x353&x354)/x355)^x356);

	if (t87 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x357 = 2U;
	int8_t x358 = 0;
	uint8_t x359 = 40U;
	uint64_t x360 = 355886526580LLU;
	volatile uint64_t t88 = 378142765LLU;

	t88 = (((x357&x358)/x359)^x360);

	if (t88 != 355886526580LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x361 = INT8_MAX;
	int8_t x362 = INT8_MIN;
	int32_t x364 = INT32_MAX;
	uint32_t t89 = 56601U;

	t89 = (((x361&x362)/x363)^x364);

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x366 = UINT64_MAX;
	static int32_t x367 = INT32_MIN;

	t90 = (((x365&x366)/x367)^x368);

	if (t90 != 32767LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x370 = 407765U;
	uint8_t x371 = UINT8_MAX;
	static int8_t x372 = -1;
	uint32_t t91 = 2U;

	t91 = (((x369&x370)/x371)^x372);

	if (t91 != 4294967238U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x373 = 2247687LLU;
	static int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MIN;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (((x373&x374)/x375)^x376);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MIN;
	int32_t x380 = -1;
	volatile int64_t t93 = 4LL;

	t93 = (((x377&x378)/x379)^x380);

	if (t93 != -281474976710657LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x381 = 12306819U;
	static int8_t x383 = -1;
	uint8_t x384 = 9U;
	volatile uint32_t t94 = 262858634U;

	t94 = (((x381&x382)/x383)^x384);

	if (t94 != 9U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x385 = 834430025LLU;
	uint32_t x386 = UINT32_MAX;
	static int32_t x387 = -6874;
	static int16_t x388 = INT16_MIN;

	t95 = (((x385&x386)/x387)^x388);

	if (t95 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x389 = UINT8_MAX;
	int64_t x390 = INT64_MAX;
	uint32_t x392 = UINT32_MAX;
	volatile int64_t t96 = 4658LL;

	t96 = (((x389&x390)/x391)^x392);

	if (t96 != 4294967295LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x393 = INT16_MIN;
	int64_t x394 = INT64_MIN;
	uint64_t x396 = UINT64_MAX;
	static uint64_t t97 = 121358614LLU;

	t97 = (((x393&x394)/x395)^x396);

	if (t97 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x397 = 32399;
	uint16_t x398 = 496U;
	int8_t x399 = -4;
	int16_t x400 = -1;
	volatile int32_t t98 = 37737164;

	t98 = (((x397&x398)/x399)^x400);

	if (t98 != 31) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x402 = INT16_MAX;
	int32_t x404 = 1022340;
	static int64_t t99 = -21251426183LL;

	t99 = (((x401&x402)/x403)^x404);

	if (t99 != -1021291LL) { NG(); } else { ; }
	
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

