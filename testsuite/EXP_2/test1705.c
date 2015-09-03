#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t2 = 492117244000LLU;
int8_t x32 = -6;
static volatile uint8_t x35 = 5U;
uint8_t x43 = 19U;
volatile uint8_t x45 = 0U;
uint32_t x58 = 13U;
static uint32_t x69 = 6638354U;
int8_t x76 = INT8_MAX;
volatile int32_t x77 = -1;
static volatile uint64_t t15 = 455556164519LLU;
volatile uint32_t t16 = 47U;
volatile int64_t t17 = 76LL;
volatile uint32_t t18 = 66998800U;
uint64_t x98 = UINT64_MAX;
uint32_t x101 = UINT32_MAX;
static uint32_t x103 = UINT32_MAX;
int16_t x107 = -1;
static volatile int8_t x108 = -1;
int32_t x112 = INT32_MAX;
uint32_t x113 = 58U;
uint16_t x117 = 8305U;
int64_t x123 = INT64_MIN;
uint64_t t25 = 7439759705984LLU;
static uint8_t x125 = 17U;
int64_t x129 = INT64_MAX;
static volatile int8_t x130 = -1;
static int64_t x139 = 9835851051690LL;
static uint64_t x141 = 112363899493448528LLU;
uint64_t x144 = 2649458219350LLU;
static int64_t x151 = -1LL;
volatile uint64_t x152 = 4210665599324LLU;
uint64_t x181 = 86476535450983LLU;
int32_t x193 = -1;
int32_t x196 = INT32_MAX;
uint64_t t40 = 309460753142600156LLU;
volatile int8_t x202 = INT8_MIN;
int64_t x203 = 3670652814467LL;
int64_t x214 = INT64_MIN;
volatile int64_t t43 = -1386262736420LL;
int64_t x223 = INT64_MAX;
volatile int64_t t44 = -618LL;
int64_t x226 = INT64_MIN;
volatile int16_t x232 = INT16_MIN;
volatile uint64_t t46 = 364676LLU;
int32_t x234 = INT32_MAX;
int16_t x237 = 170;
int32_t x256 = INT32_MIN;
int8_t x259 = 1;
volatile int16_t x260 = INT16_MIN;
uint64_t t51 = 6852LLU;
volatile int32_t x267 = 47;
uint8_t x269 = UINT8_MAX;
volatile int8_t x272 = INT8_MIN;
int16_t x276 = INT16_MIN;
uint16_t x285 = 14U;
volatile uint8_t x287 = 10U;
int16_t x291 = 1;
uint32_t t59 = 912207U;
int64_t x303 = 408374934006271503LL;
uint32_t x305 = UINT32_MAX;
static int8_t x314 = INT8_MAX;
int64_t x315 = INT64_MIN;
static int32_t x318 = INT32_MIN;
int64_t x323 = -1LL;
static volatile uint8_t x330 = 17U;
volatile uint8_t x344 = 1U;
int8_t x347 = -1;
int32_t x357 = INT32_MAX;
uint64_t x359 = UINT64_MAX;
static int16_t x363 = INT16_MIN;
static uint32_t x364 = 6U;
int64_t x373 = INT64_MIN;
uint64_t x375 = 1972254998286308227LLU;
volatile uint64_t t78 = 25421727LLU;
int64_t t79 = 874LL;
uint32_t x385 = 31U;
uint32_t t80 = 12582U;
int64_t x392 = INT64_MIN;
int16_t x398 = -1;
volatile uint64_t t83 = 2134968543347392LLU;
uint16_t x403 = UINT16_MAX;
int32_t x407 = -1;
int16_t x415 = INT16_MIN;
volatile int32_t x418 = INT32_MIN;
volatile int16_t x423 = INT16_MIN;
static int32_t t89 = -204296;
static int16_t x426 = 73;
int64_t x427 = -1LL;
int32_t t91 = 1383;
uint32_t x442 = 22504U;
int8_t x445 = INT8_MIN;
volatile int64_t x448 = INT64_MIN;
uint8_t x449 = UINT8_MAX;
uint16_t x451 = 18319U;
uint16_t x453 = UINT16_MAX;
int64_t x455 = INT64_MAX;
volatile int32_t x456 = 64486537;
int64_t t97 = 7LL;
uint64_t x457 = UINT64_MAX;
static int16_t x458 = INT16_MIN;
int64_t x459 = 6947705421474LL;
static int16_t x461 = 0;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int16_t x2 = -1;
	uint64_t x3 = 4698447327560901LLU;
	int8_t x4 = -1;
	volatile uint64_t t0 = 1004229LLU;

	t0 = ((x1-(x2&x3))-x4);

	if (t0 != 18442045626381990588LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1U;
	int8_t x6 = INT8_MIN;
	uint64_t x7 = UINT64_MAX;
	volatile int32_t x8 = INT32_MIN;
	volatile uint64_t t1 = 2210942939963LLU;

	t1 = ((x5-(x6&x7))-x8);

	if (t1 != 2147483777LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x21 = 4604;
	uint64_t x22 = 93419051323276905LLU;
	volatile int64_t x23 = INT64_MAX;
	int16_t x24 = INT16_MIN;

	t2 = ((x21-(x22&x23))-x24);

	if (t2 != 18353325022386312083LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x25 = 91U;
	int64_t x26 = -5087907LL;
	uint16_t x27 = UINT16_MAX;
	int32_t x28 = INT32_MAX;
	int64_t t3 = -22925315499778935LL;

	t3 = ((x25-(x26&x27))-x28);

	if (t3 != -2147507457LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x29 = 1806U;
	static volatile int64_t x30 = 29680544LL;
	volatile uint32_t x31 = 3601895U;
	static int64_t t4 = -30858510925318LL;

	t4 = ((x29-(x30&x31))-x32);

	if (t4 != -318092LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x33 = 525819931U;
	static int32_t x34 = INT32_MIN;
	static int64_t x36 = 528490555279075863LL;
	int64_t t5 = -1306LL;

	t5 = ((x33-(x34&x35))-x36);

	if (t5 != -528490554753255932LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MIN;
	uint16_t x38 = 959U;
	static int8_t x39 = INT8_MIN;
	int8_t x40 = 19;
	int32_t t6 = 15453;

	t6 = ((x37-(x38&x39))-x40);

	if (t6 != -1043) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -9821LL;
	volatile int16_t x42 = INT16_MIN;
	int8_t x44 = -1;
	int64_t t7 = -202815596LL;

	t7 = ((x41-(x42&x43))-x44);

	if (t7 != -9820LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x46 = INT8_MIN;
	static int16_t x47 = INT16_MIN;
	volatile uint16_t x48 = 1U;
	volatile int32_t t8 = -84794253;

	t8 = ((x45-(x46&x47))-x48);

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = -1LL;
	int32_t x50 = -1;
	int32_t x51 = INT32_MIN;
	uint32_t x52 = 668054721U;
	int64_t t9 = 53573130060673LL;

	t9 = ((x49-(x50&x51))-x52);

	if (t9 != 1479428926LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x53 = 22;
	int16_t x54 = -1;
	int64_t x55 = -62LL;
	uint16_t x56 = 1U;
	int64_t t10 = -52421020161LL;

	t10 = ((x53-(x54&x55))-x56);

	if (t10 != 83LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x57 = INT8_MAX;
	int32_t x59 = INT32_MAX;
	int16_t x60 = -1;
	static uint32_t t11 = 215644386U;

	t11 = ((x57-(x58&x59))-x60);

	if (t11 != 115U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x65 = 2035232743654648184LL;
	volatile int8_t x66 = INT8_MIN;
	int64_t x67 = -48456LL;
	int16_t x68 = -150;
	static volatile int64_t t12 = -252272655357LL;

	t12 = ((x65-(x66&x67))-x68);

	if (t12 != 2035232743654696846LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x70 = -1;
	int32_t x71 = 201057364;
	int16_t x72 = -2;
	volatile uint32_t t13 = 151055U;

	t13 = ((x69-(x70&x71))-x72);

	if (t13 != 4100548288U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = -13;
	volatile uint8_t x74 = UINT8_MAX;
	int64_t x75 = INT64_MIN;
	static int64_t t14 = -493LL;

	t14 = ((x73-(x74&x75))-x76);

	if (t14 != -140LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x78 = 80735582LLU;
	volatile uint8_t x79 = 53U;
	volatile uint16_t x80 = UINT16_MAX;

	t15 = ((x77-(x78&x79))-x80);

	if (t15 != 18446744073709486060LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = UINT32_MAX;
	uint32_t x82 = UINT32_MAX;
	uint8_t x83 = UINT8_MAX;
	static uint8_t x84 = 70U;

	t16 = ((x81-(x82&x83))-x84);

	if (t16 != 4294966970U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = 1399LL;
	static int32_t x86 = -1;
	uint8_t x87 = 2U;
	volatile int32_t x88 = INT32_MIN;

	t17 = ((x85-(x86&x87))-x88);

	if (t17 != 2147485045LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MAX;
	volatile int32_t x90 = INT32_MIN;
	uint32_t x91 = UINT32_MAX;
	int32_t x92 = INT32_MIN;

	t18 = ((x89-(x90&x91))-x92);

	if (t18 != 32767U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x97 = INT16_MAX;
	int64_t x99 = -1LL;
	int8_t x100 = 0;
	uint64_t t19 = 411895461597024LLU;

	t19 = ((x97-(x98&x99))-x100);

	if (t19 != 32768LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x102 = 5576611860634698LLU;
	volatile int64_t x104 = -1LL;
	uint64_t t20 = 13795895547243LLU;

	t20 = ((x101-(x102&x103))-x104);

	if (t20 != 3741262774LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x105 = 25U;
	static int8_t x106 = INT8_MAX;
	uint32_t t21 = 54U;

	t21 = ((x105-(x106&x107))-x108);

	if (t21 != 4294967195U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = UINT32_MAX;
	int32_t x110 = 3;
	int8_t x111 = -41;
	uint32_t t22 = 402918U;

	t22 = ((x109-(x110&x111))-x112);

	if (t22 != 2147483645U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x114 = 20U;
	static int16_t x115 = INT16_MIN;
	int8_t x116 = 0;
	uint32_t t23 = 2780221U;

	t23 = ((x113-(x114&x115))-x116);

	if (t23 != 58U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x118 = INT64_MIN;
	int32_t x119 = 23635401;
	int8_t x120 = INT8_MIN;
	volatile int64_t t24 = -22637LL;

	t24 = ((x117-(x118&x119))-x120);

	if (t24 != 8433LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = INT8_MIN;
	uint64_t x122 = 260870LLU;
	int64_t x124 = -574LL;

	t25 = ((x121-(x122&x123))-x124);

	if (t25 != 446LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x126 = 11U;
	int16_t x127 = -1;
	volatile int32_t x128 = INT32_MAX;
	volatile uint32_t t26 = 947295197U;

	t26 = ((x125-(x126&x127))-x128);

	if (t26 != 2147483655U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x131 = 1478115885LLU;
	int64_t x132 = INT64_MAX;
	volatile uint64_t t27 = 461075LLU;

	t27 = ((x129-(x130&x131))-x132);

	if (t27 != 18446744072231435731LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x133 = INT64_MIN;
	static volatile int16_t x134 = INT16_MIN;
	static volatile uint8_t x135 = 3U;
	int16_t x136 = -14574;
	volatile int64_t t28 = 1076888008485432LL;

	t28 = ((x133-(x134&x135))-x136);

	if (t28 != -9223372036854761234LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	volatile int64_t t29 = 198LL;

	t29 = ((x137-(x138&x139))-x140);

	if (t29 != -9833703538816LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x142 = -3615733595LL;
	int8_t x143 = INT8_MAX;
	static volatile uint64_t t30 = 3112280827LLU;

	t30 = ((x141-(x142&x143))-x144);

	if (t30 != 112361250035229141LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x145 = 7839U;
	static uint64_t x146 = 6504637LLU;
	int16_t x147 = INT16_MIN;
	int32_t x148 = -1;
	uint64_t t31 = 6953579LLU;

	t31 = ((x145-(x146&x147))-x148);

	if (t31 != 18446744073703071392LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x149 = -1;
	int32_t x150 = INT32_MIN;
	volatile uint64_t t32 = 55LLU;

	t32 = ((x149-(x150&x151))-x152);

	if (t32 != 18446739865191435939LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x161 = UINT16_MAX;
	static uint64_t x162 = 17293390676LLU;
	int16_t x163 = INT16_MAX;
	uint64_t x164 = UINT64_MAX;
	uint64_t t33 = 552375632311LLU;

	t33 = ((x161-(x162&x163))-x164);

	if (t33 != 52396LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x169 = -1;
	uint64_t x170 = 3228092707LLU;
	static volatile uint64_t x171 = 479847562104389LLU;
	uint16_t x172 = 21453U;
	volatile uint64_t t34 = 17170672434294542LLU;

	t34 = ((x169-(x170&x171))-x172);

	if (t34 != 18446744073702695985LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x173 = UINT64_MAX;
	int8_t x174 = -1;
	static int32_t x175 = -1;
	volatile int8_t x176 = -1;
	static volatile uint64_t t35 = 5544222211074341981LLU;

	t35 = ((x173-(x174&x175))-x176);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = 1;
	static int16_t x178 = -1;
	static int8_t x179 = INT8_MIN;
	uint64_t x180 = 8LLU;
	volatile uint64_t t36 = 51739LLU;

	t36 = ((x177-(x178&x179))-x180);

	if (t36 != 121LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x182 = -8;
	static volatile int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MAX;
	static uint64_t t37 = 65880811477804148LLU;

	t37 = ((x181-(x182&x183))-x184);

	if (t37 != 9223458513390194024LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x189 = INT8_MAX;
	uint16_t x190 = UINT16_MAX;
	volatile int8_t x191 = INT8_MIN;
	uint32_t x192 = 361U;
	uint32_t t38 = 11U;

	t38 = ((x189-(x190&x191))-x192);

	if (t38 != 4294901654U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x194 = UINT32_MAX;
	volatile int32_t x195 = -1;
	volatile uint32_t t39 = 41057U;

	t39 = ((x193-(x194&x195))-x196);

	if (t39 != 2147483649U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x197 = -1LL;
	static uint64_t x198 = 2781614271538LLU;
	uint64_t x199 = 33521907LLU;
	volatile uint64_t x200 = 4698388317051923440LLU;

	t40 = ((x197-(x198&x199))-x200);

	if (t40 != 13748355756638688221LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x201 = -1;
	uint64_t x204 = UINT64_MAX;
	static volatile uint64_t t41 = 409215152324951LLU;

	t41 = ((x201-(x202&x203))-x204);

	if (t41 != 18446740403056737152LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x209 = 35469U;
	int64_t x210 = INT64_MIN;
	static uint16_t x211 = 1791U;
	uint16_t x212 = UINT16_MAX;
	static volatile int64_t t42 = -2946348LL;

	t42 = ((x209-(x210&x211))-x212);

	if (t42 != -30066LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x213 = -494089;
	uint8_t x215 = 125U;
	int8_t x216 = -1;

	t43 = ((x213-(x214&x215))-x216);

	if (t43 != -494088LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x221 = 1251;
	int8_t x222 = INT8_MIN;
	volatile int32_t x224 = INT32_MIN;

	t44 = ((x221-(x222&x223))-x224);

	if (t44 != -9223372034707290781LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x225 = INT8_MAX;
	volatile uint64_t x227 = 11228873878703675LLU;
	uint64_t x228 = 91330370LLU;
	volatile uint64_t t45 = 8944084358396715LLU;

	t45 = ((x225-(x226&x227))-x228);

	if (t45 != 18446744073618221373LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x229 = 9810700LLU;
	static int8_t x230 = INT8_MIN;
	int8_t x231 = -1;

	t46 = ((x229-(x230&x231))-x232);

	if (t46 != 9843596LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x233 = UINT64_MAX;
	int8_t x235 = INT8_MAX;
	volatile uint32_t x236 = 78U;
	volatile uint64_t t47 = 896682753053793LLU;

	t47 = ((x233-(x234&x235))-x236);

	if (t47 != 18446744073709551410LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x238 = 450108;
	volatile int32_t x239 = INT32_MAX;
	uint8_t x240 = 39U;
	static int32_t t48 = 0;

	t48 = ((x237-(x238&x239))-x240);

	if (t48 != -449977) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x249 = 415891260653823LL;
	uint32_t x250 = UINT32_MAX;
	uint64_t x251 = 111172278LLU;
	volatile int8_t x252 = INT8_MIN;
	uint64_t t49 = 8995679052120LLU;

	t49 = ((x249-(x250&x251))-x252);

	if (t49 != 415891149481673LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x253 = UINT64_MAX;
	int8_t x254 = -1;
	int16_t x255 = INT16_MAX;
	volatile uint64_t t50 = 6163LLU;

	t50 = ((x253-(x254&x255))-x256);

	if (t50 != 2147450880LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x257 = UINT64_MAX;
	uint16_t x258 = 698U;

	t51 = ((x257-(x258&x259))-x260);

	if (t51 != 32767LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x261 = 28U;
	int64_t x262 = INT64_MAX;
	int64_t x263 = INT64_MAX;
	int16_t x264 = 7;
	static int64_t t52 = 25323740752789344LL;

	t52 = ((x261-(x262&x263))-x264);

	if (t52 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x265 = 109665U;
	static uint64_t x266 = UINT64_MAX;
	int64_t x268 = INT64_MIN;
	volatile uint64_t t53 = 15900198LLU;

	t53 = ((x265-(x266&x267))-x268);

	if (t53 != 9223372036854885426LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x270 = 2U;
	uint8_t x271 = UINT8_MAX;
	volatile int32_t t54 = 51;

	t54 = ((x269-(x270&x271))-x272);

	if (t54 != 381) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x273 = 7U;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = INT8_MIN;
	volatile uint64_t t55 = 789029261565585LLU;

	t55 = ((x273-(x274&x275))-x276);

	if (t55 != 32903LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x277 = INT16_MAX;
	static int32_t x278 = INT32_MAX;
	uint8_t x279 = 2U;
	uint64_t x280 = UINT64_MAX;
	static uint64_t t56 = 68298257027016LLU;

	t56 = ((x277-(x278&x279))-x280);

	if (t56 != 32766LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x281 = -1;
	int8_t x282 = -3;
	uint32_t x283 = UINT32_MAX;
	volatile int16_t x284 = -1159;
	uint32_t t57 = 3765965U;

	t57 = ((x281-(x282&x283))-x284);

	if (t57 != 1161U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x286 = 3811U;
	int8_t x288 = INT8_MIN;
	int32_t t58 = -2022718;

	t58 = ((x285-(x286&x287))-x288);

	if (t58 != 140) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = 3;
	static int32_t x292 = INT32_MAX;

	t59 = ((x289-(x290&x291))-x292);

	if (t59 != 2147483647U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x293 = 6882U;
	static int16_t x294 = INT16_MIN;
	int32_t x295 = 5427;
	static uint64_t x296 = 34LLU;
	volatile uint64_t t60 = 7687LLU;

	t60 = ((x293-(x294&x295))-x296);

	if (t60 != 6848LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x301 = -1;
	uint64_t x302 = UINT64_MAX;
	uint16_t x304 = 49U;
	uint64_t t61 = 5606442927516750LLU;

	t61 = ((x301-(x302&x303))-x304);

	if (t61 != 18038369139703280063LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x306 = -1;
	int8_t x307 = 0;
	static volatile int32_t x308 = 72446;
	static uint32_t t62 = 458776U;

	t62 = ((x305-(x306&x307))-x308);

	if (t62 != 4294894849U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x309 = INT64_MAX;
	volatile int64_t x310 = INT64_MAX;
	int16_t x311 = INT16_MIN;
	uint16_t x312 = 135U;
	volatile int64_t t63 = 424LL;

	t63 = ((x309-(x310&x311))-x312);

	if (t63 != 32632LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x313 = 140349U;
	static int8_t x316 = INT8_MAX;
	volatile int64_t t64 = 755650580LL;

	t64 = ((x313-(x314&x315))-x316);

	if (t64 != 140222LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = -1;
	int16_t x319 = 110;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t65 = 89872;

	t65 = ((x317-(x318&x319))-x320);

	if (t65 != -256) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x321 = 25U;
	static int32_t x322 = -4793;
	uint16_t x324 = 103U;
	int64_t t66 = -8408859657LL;

	t66 = ((x321-(x322&x323))-x324);

	if (t66 != 4715LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x329 = -1;
	uint32_t x331 = UINT32_MAX;
	volatile uint32_t x332 = 26130651U;
	static volatile uint32_t t67 = 29865174U;

	t67 = ((x329-(x330&x331))-x332);

	if (t67 != 4268836627U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x333 = 9U;
	int32_t x334 = 0;
	int16_t x335 = INT16_MIN;
	uint32_t x336 = 0U;
	volatile uint32_t t68 = 35086U;

	t68 = ((x333-(x334&x335))-x336);

	if (t68 != 9U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x341 = 5395199LL;
	volatile int8_t x342 = 4;
	uint16_t x343 = UINT16_MAX;
	static volatile int64_t t69 = 191178013566LL;

	t69 = ((x341-(x342&x343))-x344);

	if (t69 != 5395194LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x345 = UINT32_MAX;
	int32_t x346 = -1;
	int64_t x348 = INT64_MAX;
	int64_t t70 = -113993789133234235LL;

	t70 = ((x345-(x346&x347))-x348);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x349 = INT8_MIN;
	volatile int16_t x350 = -1;
	uint32_t x351 = 6304U;
	static uint8_t x352 = 1U;
	uint32_t t71 = 156713U;

	t71 = ((x349-(x350&x351))-x352);

	if (t71 != 4294960863U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x353 = INT16_MIN;
	int32_t x354 = -1;
	static volatile uint16_t x355 = UINT16_MAX;
	static int32_t x356 = -1;
	static int32_t t72 = 3123;

	t72 = ((x353-(x354&x355))-x356);

	if (t72 != -98302) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x358 = UINT64_MAX;
	volatile int16_t x360 = -1531;
	static volatile uint64_t t73 = 4056307617509LLU;

	t73 = ((x357-(x358&x359))-x360);

	if (t73 != 2147485179LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x361 = UINT8_MAX;
	uint32_t x362 = 177836U;
	uint32_t t74 = 3385729U;

	t74 = ((x361-(x362&x363))-x364);

	if (t74 != 4294803705U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x365 = 3U;
	static int8_t x366 = -1;
	volatile uint64_t x367 = 8583315707540LLU;
	int64_t x368 = 1456282440371LL;
	volatile uint64_t t75 = 94232336920058LLU;

	t75 = ((x365-(x366&x367))-x368);

	if (t75 != 18446734034111403708LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MAX;
	volatile int8_t x371 = INT8_MIN;
	int8_t x372 = INT8_MAX;
	static volatile int32_t t76 = -30632;

	t76 = ((x369-(x370&x371))-x372);

	if (t76 != -32895) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x374 = INT16_MIN;
	volatile int8_t x376 = INT8_MIN;
	volatile uint64_t t77 = 123157228812LLU;

	t77 = ((x373-(x374&x375))-x376);

	if (t77 != 7251117038568472704LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x377 = 0;
	uint64_t x378 = 967272381449LLU;
	int32_t x379 = -9503;
	int16_t x380 = INT16_MIN;

	t78 = ((x377-(x378&x379))-x380);

	if (t78 != 18446743106437212159LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = -1LL;
	static uint8_t x383 = UINT8_MAX;
	uint16_t x384 = UINT16_MAX;

	t79 = ((x381-(x382&x383))-x384);

	if (t79 != -65918LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x386 = -1;
	int32_t x387 = -1;
	uint32_t x388 = 107U;

	t80 = ((x385-(x386&x387))-x388);

	if (t80 != 4294967221U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x389 = -120;
	uint64_t x390 = 314106150LLU;
	uint8_t x391 = UINT8_MAX;
	static uint64_t t81 = 26097471480126033LLU;

	t81 = ((x389-(x390&x391))-x392);

	if (t81 != 9223372036854775650LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x393 = -16;
	static int64_t x394 = INT64_MIN;
	int64_t x395 = INT64_MAX;
	uint32_t x396 = UINT32_MAX;
	static volatile int64_t t82 = -5494LL;

	t82 = ((x393-(x394&x395))-x396);

	if (t82 != -4294967311LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x397 = -6;
	volatile uint8_t x399 = 69U;
	uint64_t x400 = 0LLU;

	t83 = ((x397-(x398&x399))-x400);

	if (t83 != 18446744073709551541LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x401 = UINT64_MAX;
	uint32_t x402 = 20149821U;
	volatile int8_t x404 = INT8_MIN;
	volatile uint64_t t84 = 175LLU;

	t84 = ((x401-(x402&x403))-x404);

	if (t84 != 18446744073709521474LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x405 = 53;
	uint64_t x406 = 0LLU;
	static int32_t x408 = INT32_MIN;
	uint64_t t85 = 2LLU;

	t85 = ((x405-(x406&x407))-x408);

	if (t85 != 2147483701LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x409 = 3932;
	volatile uint64_t x410 = 3036LLU;
	uint32_t x411 = 98225932U;
	int8_t x412 = 1;
	static volatile uint64_t t86 = 3083LLU;

	t86 = ((x409-(x410&x411))-x412);

	if (t86 != 1103LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x413 = INT64_MAX;
	uint64_t x414 = 1757862075670560710LLU;
	int16_t x416 = 5182;
	uint64_t t87 = 14425507469LLU;

	t87 = ((x413-(x414&x415))-x416);

	if (t87 != 7465509961184242625LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x417 = 31741LLU;
	static int32_t x419 = 1512;
	int32_t x420 = -72;
	uint64_t t88 = 8871249984915191LLU;

	t88 = ((x417-(x418&x419))-x420);

	if (t88 != 31813LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x421 = INT8_MIN;
	static volatile int8_t x422 = INT8_MAX;
	int8_t x424 = -2;

	t89 = ((x421-(x422&x423))-x424);

	if (t89 != -126) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x425 = 105U;
	static volatile int32_t x428 = INT32_MAX;
	volatile int64_t t90 = 152591393LL;

	t90 = ((x425-(x426&x427))-x428);

	if (t90 != -2147483615LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x429 = 1U;
	int16_t x430 = INT16_MIN;
	uint8_t x431 = 2U;
	volatile int16_t x432 = INT16_MIN;

	t91 = ((x429-(x430&x431))-x432);

	if (t91 != 32769) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x433 = UINT8_MAX;
	int32_t x434 = -1;
	int8_t x435 = INT8_MIN;
	volatile int64_t x436 = 12952933520604957LL;
	volatile int64_t t92 = -1LL;

	t92 = ((x433-(x434&x435))-x436);

	if (t92 != -12952933520604574LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x437 = UINT8_MAX;
	int16_t x438 = INT16_MIN;
	uint8_t x439 = UINT8_MAX;
	int16_t x440 = INT16_MIN;
	int32_t t93 = -57255;

	t93 = ((x437-(x438&x439))-x440);

	if (t93 != 33023) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = -28;
	int8_t x443 = -12;
	static uint16_t x444 = UINT16_MAX;
	volatile uint32_t t94 = 467998U;

	t94 = ((x441-(x442&x443))-x444);

	if (t94 != 4294879237U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x446 = INT16_MIN;
	uint8_t x447 = 1U;
	static int64_t t95 = 1LL;

	t95 = ((x445-(x446&x447))-x448);

	if (t95 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x450 = INT16_MIN;
	static uint32_t x452 = UINT32_MAX;
	uint32_t t96 = 22U;

	t96 = ((x449-(x450&x451))-x452);

	if (t96 != 256U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x454 = 111U;

	t97 = ((x453-(x454&x455))-x456);

	if (t97 != -64421113LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x460 = -1LL;
	uint64_t t98 = 177145283097136307LLU;

	t98 = ((x457-(x458&x459))-x460);

	if (t98 != 18446737126004162560LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x462 = INT64_MAX;
	uint16_t x463 = 593U;
	uint32_t x464 = UINT32_MAX;
	static int64_t t99 = 530020LL;

	t99 = ((x461-(x462&x463))-x464);

	if (t99 != -4294967888LL) { NG(); } else { ; }
	
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

