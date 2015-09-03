#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
static int16_t x4 = -7955;
uint8_t x9 = 63U;
static volatile uint64_t t3 = 167613LLU;
int64_t x22 = INT64_MIN;
int16_t x25 = 1;
uint64_t x28 = 2722988175759583143LLU;
int16_t x36 = -1;
int16_t x37 = INT16_MIN;
int64_t x38 = INT64_MIN;
volatile int64_t t8 = -1813479701803153LL;
int32_t t10 = -468756335;
int64_t t11 = 36091649884840954LL;
int16_t x53 = 0;
int32_t x54 = INT32_MIN;
uint32_t x55 = 223280U;
uint32_t x66 = UINT32_MAX;
uint32_t t15 = 12829U;
uint64_t t17 = 4602657451161LLU;
uint64_t x80 = 234LLU;
int64_t x93 = INT64_MIN;
static int64_t x94 = INT64_MIN;
static volatile uint16_t x99 = 1U;
int16_t x104 = 4;
uint64_t t24 = 1LLU;
uint32_t t25 = 33U;
int16_t x116 = INT16_MAX;
int16_t x127 = 2;
static int32_t x130 = INT32_MIN;
uint16_t x132 = UINT16_MAX;
volatile uint32_t t30 = 53U;
uint16_t x133 = 3U;
int64_t x135 = INT64_MAX;
volatile int16_t x140 = -1;
int64_t x142 = -11955998LL;
int8_t x144 = INT8_MIN;
volatile int32_t x146 = -1;
volatile uint64_t t34 = 420911702496255437LLU;
int32_t x156 = INT32_MIN;
int32_t x157 = INT32_MIN;
int16_t x161 = -4;
uint32_t x169 = 2268011U;
int32_t x172 = INT32_MIN;
static uint8_t x182 = UINT8_MAX;
uint32_t x187 = 55U;
int8_t x190 = INT8_MAX;
static uint16_t x192 = 271U;
volatile int64_t x197 = INT64_MIN;
int64_t x200 = INT64_MIN;
uint32_t x205 = UINT32_MAX;
int8_t x210 = INT8_MIN;
volatile int32_t x211 = INT32_MAX;
volatile int64_t x219 = 1073321162210083768LL;
volatile int64_t t50 = -195885160442902979LL;
int32_t t51 = 8115;
int8_t x232 = INT8_MIN;
uint16_t x236 = 2646U;
int32_t x238 = -1;
uint8_t x244 = UINT8_MAX;
uint16_t x253 = 22131U;
int8_t x254 = -5;
static int32_t x256 = -1;
static int64_t x266 = INT64_MAX;
static int64_t x267 = INT64_MIN;
static int16_t x283 = INT16_MAX;
int64_t x289 = INT64_MIN;
int16_t x304 = -1;
uint32_t t68 = 10916995U;
uint8_t x312 = UINT8_MAX;
static volatile uint64_t t70 = 323LLU;
int16_t x313 = 55;
volatile int16_t x317 = INT16_MIN;
static volatile int32_t x321 = -1;
volatile int16_t x326 = -1;
int16_t x330 = INT16_MAX;
int32_t x342 = 109;
static int16_t x345 = INT16_MIN;
int8_t x356 = INT8_MIN;
int16_t x357 = 290;
volatile uint64_t x358 = 5795940LLU;
int64_t x360 = INT64_MIN;
volatile int32_t t82 = -439;
static int64_t x373 = 187998418078621LL;
static int32_t x374 = INT32_MIN;
int64_t t83 = -11843004836763LL;
int8_t x384 = INT8_MAX;
int32_t t84 = 112909594;
uint16_t x386 = 0U;
static volatile int32_t t85 = -5937;
uint16_t x392 = UINT16_MAX;
uint32_t x406 = UINT32_MAX;
static int16_t x408 = INT16_MIN;
volatile int32_t t91 = -824100089;
volatile uint16_t x419 = 0U;
int64_t x421 = -5817037064LL;
int64_t x422 = -1LL;
int32_t x426 = INT32_MAX;
int64_t x427 = INT64_MIN;
volatile int64_t x428 = INT64_MIN;
int32_t x431 = INT32_MIN;
int8_t x432 = -5;
int8_t x438 = INT8_MIN;
uint64_t x439 = UINT64_MAX;
uint64_t x442 = 6LLU;
volatile int16_t x446 = INT16_MIN;


void f0(void) {
	volatile int8_t x2 = INT8_MIN;
	volatile int16_t x3 = INT16_MAX;
	int64_t t0 = -29115520LL;

	t0 = ((x1%(x2^x3))%x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint32_t x6 = 2U;
	int32_t x7 = INT32_MIN;
	static volatile uint8_t x8 = 1U;
	uint32_t t1 = 127604774U;

	t1 = ((x5%(x6^x7))%x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 66U;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = 1;

	t2 = ((x9%(x10^x11))%x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	uint64_t x18 = 41186336687935LLU;
	static int64_t x19 = INT64_MAX;
	int32_t x20 = INT32_MAX;

	t3 = ((x17%(x18^x19))%x20);

	if (t3 != 1643127892LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MAX;
	static int16_t x23 = -620;
	volatile int16_t x24 = INT16_MIN;
	int64_t t4 = 815699726464654LL;

	t4 = ((x21%(x22^x23))%x24);

	if (t4 != 127LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = -1775;
	static int16_t x27 = INT16_MIN;
	uint64_t t5 = 18150685115759699LLU;

	t5 = ((x25%(x26^x27))%x28);

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = INT32_MAX;
	int8_t x30 = INT8_MAX;
	volatile int64_t x31 = INT64_MIN;
	int32_t x32 = INT32_MIN;
	int64_t t6 = 42950369LL;

	t6 = ((x29%(x30^x31))%x32);

	if (t6 != 2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	int16_t x35 = INT16_MIN;
	static volatile int32_t t7 = 786;

	t7 = ((x33%(x34^x35))%x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x39 = 47;
	uint32_t x40 = 7577U;

	t8 = ((x37%(x38^x39))%x40);

	if (t8 != -2460LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 58U;
	int32_t x42 = -1;
	static int8_t x43 = INT8_MAX;
	int8_t x44 = INT8_MIN;
	volatile int32_t t9 = 0;

	t9 = ((x41%(x42^x43))%x44);

	if (t9 != 58) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x45 = -1901;
	uint16_t x46 = 1031U;
	int16_t x47 = INT16_MAX;
	int16_t x48 = INT16_MAX;

	t10 = ((x45%(x46^x47))%x48);

	if (t10 != -1901) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	volatile uint32_t x50 = 49U;
	uint8_t x51 = UINT8_MAX;
	int8_t x52 = -1;

	t11 = ((x49%(x50^x51))%x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x56 = -1LL;
	volatile int64_t t12 = 173276537097LL;

	t12 = ((x53%(x54^x55))%x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1;
	static uint16_t x58 = UINT16_MAX;
	int8_t x59 = INT8_MIN;
	static int64_t x60 = -1LL;
	volatile int64_t t13 = -1LL;

	t13 = ((x57%(x58^x59))%x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int64_t x62 = INT64_MAX;
	volatile uint32_t x63 = 15U;
	int64_t x64 = INT64_MIN;
	volatile int64_t t14 = 97LL;

	t14 = ((x61%(x62^x63))%x64);

	if (t14 != -16LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x65 = 1U;
	static volatile int32_t x67 = -3481;
	static volatile int32_t x68 = 10311215;

	t15 = ((x65%(x66^x67))%x68);

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 1U;
	int64_t x70 = INT64_MAX;
	int8_t x71 = INT8_MIN;
	static uint16_t x72 = UINT16_MAX;
	int64_t t16 = -179219174507959798LL;

	t16 = ((x69%(x70^x71))%x72);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x73 = UINT64_MAX;
	volatile int32_t x74 = -1;
	volatile uint16_t x75 = 57U;
	static uint64_t x76 = 4989741609531755475LLU;

	t17 = ((x73%(x74^x75))%x76);

	if (t17 != 57LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x77 = 1U;
	uint8_t x78 = 3U;
	int16_t x79 = 10678;
	uint64_t t18 = 14742734555673LLU;

	t18 = ((x77%(x78^x79))%x80);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MAX;
	static volatile int64_t x82 = INT64_MIN;
	static volatile uint16_t x83 = UINT16_MAX;
	uint16_t x84 = 8U;
	static volatile int64_t t19 = -44LL;

	t19 = ((x81%(x82^x83))%x84);

	if (t19 != 7LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x89 = UINT32_MAX;
	int8_t x90 = INT8_MIN;
	uint16_t x91 = UINT16_MAX;
	int32_t x92 = 931174720;
	volatile uint32_t t20 = 21782244U;

	t20 = ((x89%(x90^x91))%x92);

	if (t20 != 65408U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x95 = INT64_MAX;
	int16_t x96 = -1;
	volatile int64_t t21 = -392835LL;

	t21 = ((x93%(x94^x95))%x96);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MAX;
	volatile int16_t x98 = INT16_MIN;
	uint16_t x100 = 15U;
	volatile int32_t t22 = -1;

	t22 = ((x97%(x98^x99))%x100);

	if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	static int16_t x102 = 3321;
	volatile int32_t x103 = -23;
	static int32_t t23 = -23580;

	t23 = ((x101%(x102^x103))%x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = -37;
	volatile int16_t x106 = -65;
	uint64_t x107 = 2519288357LLU;
	int8_t x108 = INT8_MAX;

	t24 = ((x105%(x106^x107))%x108);

	if (t24 != 53LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	volatile int32_t x110 = 2;
	volatile uint32_t x111 = UINT32_MAX;
	int32_t x112 = 29;

	t25 = ((x109%(x110^x111))%x112);

	if (t25 != 4U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = -1;
	int8_t x114 = INT8_MIN;
	int32_t x115 = INT32_MIN;
	volatile int32_t t26 = -6980286;

	t26 = ((x113%(x114^x115))%x116);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 9U;
	int16_t x118 = -12401;
	int32_t x119 = INT32_MIN;
	int8_t x120 = -2;
	volatile int32_t t27 = 232;

	t27 = ((x117%(x118^x119))%x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -1;
	int32_t x122 = 12;
	int64_t x123 = INT64_MAX;
	uint64_t x124 = UINT64_MAX;
	static uint64_t t28 = 70053809673241LLU;

	t28 = ((x121%(x122^x123))%x124);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 1854659LLU;
	int32_t x126 = -2642;
	volatile int32_t x128 = -119;
	volatile uint64_t t29 = 1573412562LLU;

	t29 = ((x125%(x126^x127))%x128);

	if (t29 != 1854659LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -1;
	static uint32_t x131 = 936U;

	t30 = ((x129%(x130^x131))%x132);

	if (t30 != 31831U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x134 = -1;
	static int32_t x136 = INT32_MIN;
	int64_t t31 = -464280393241003LL;

	t31 = ((x133%(x134^x135))%x136);

	if (t31 != 3LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = 96U;
	static uint64_t x138 = 1913926931662893335LLU;
	static int32_t x139 = 14;
	uint64_t t32 = 204241844LLU;

	t32 = ((x137%(x138^x139))%x140);

	if (t32 != 96LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = 48;
	uint32_t x143 = 173513U;
	int64_t t33 = -4977707LL;

	t33 = ((x141%(x142^x143))%x144);

	if (t33 != 48LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	static int32_t x147 = -91;
	uint64_t x148 = UINT64_MAX;

	t34 = ((x145%(x146^x147))%x148);

	if (t34 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x149 = INT64_MAX;
	volatile int64_t x150 = INT64_MAX;
	int8_t x151 = 1;
	uint32_t x152 = 986184U;
	static int64_t t35 = -8091188670394LL;

	t35 = ((x149%(x150^x151))%x152);

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	static int8_t x154 = 1;
	int8_t x155 = -1;
	volatile int32_t t36 = 195146226;

	t36 = ((x153%(x154^x155))%x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x158 = -1;
	int16_t x159 = 841;
	int32_t x160 = INT32_MIN;
	static int32_t t37 = 8978758;

	t37 = ((x157%(x158^x159))%x160);

	if (t37 != -538) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x162 = 991705411239LLU;
	uint32_t x163 = 6U;
	int8_t x164 = -29;
	uint64_t t38 = 145799929LLU;

	t38 = ((x161%(x162^x163))%x164);

	if (t38 != 976496770389LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x165 = -3;
	int8_t x166 = 0;
	static volatile int8_t x167 = INT8_MIN;
	uint64_t x168 = 1760113014996243LLU;
	static uint64_t t39 = 2877LLU;

	t39 = ((x165%(x166^x167))%x168);

	if (t39 != 759676548924973LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x170 = 4;
	static volatile uint8_t x171 = 16U;
	static uint32_t t40 = 903001U;

	t40 = ((x169%(x170^x171))%x172);

	if (t40 != 11U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x173 = 1;
	volatile uint32_t x174 = 6300U;
	uint8_t x175 = UINT8_MAX;
	uint8_t x176 = UINT8_MAX;
	static uint32_t t41 = 8761U;

	t41 = ((x173%(x174^x175))%x176);

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x181 = 1656875U;
	volatile int64_t x183 = 7949203887LL;
	int16_t x184 = INT16_MIN;
	volatile int64_t t42 = -2187672LL;

	t42 = ((x181%(x182^x183))%x184);

	if (t42 != 18475LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = INT16_MAX;
	static int8_t x186 = -1;
	int32_t x188 = 3;
	static volatile uint32_t t43 = 22U;

	t43 = ((x185%(x186^x187))%x188);

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 52047LLU;
	int64_t x191 = INT64_MAX;
	volatile uint64_t t44 = 5LLU;

	t44 = ((x189%(x190^x191))%x192);

	if (t44 != 15LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x193 = INT64_MIN;
	volatile int16_t x194 = INT16_MAX;
	int16_t x195 = INT16_MIN;
	int8_t x196 = -1;
	static int64_t t45 = 1199364LL;

	t45 = ((x193%(x194^x195))%x196);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x198 = 30384910LL;
	int16_t x199 = INT16_MAX;
	volatile int64_t t46 = -1910898020760975LL;

	t46 = ((x197%(x198^x199))%x200);

	if (t46 != -3845996LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = 5204970;
	int32_t x202 = INT32_MAX;
	int8_t x203 = -1;
	uint32_t x204 = 52U;
	volatile uint32_t t47 = 19563U;

	t47 = ((x201%(x202^x203))%x204);

	if (t47 != 30U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x206 = INT64_MAX;
	uint64_t x207 = 450527200065LLU;
	static int64_t x208 = INT64_MIN;
	volatile uint64_t t48 = 13938602896936LLU;

	t48 = ((x205%(x206^x207))%x208);

	if (t48 != 4294967295LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x209 = 4U;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t49 = 54455142LLU;

	t49 = ((x209%(x210^x211))%x212);

	if (t49 != 4LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	volatile int16_t x218 = INT16_MIN;
	int16_t x220 = -983;

	t50 = ((x217%(x218^x219))%x220);

	if (t50 != -329LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = -3;
	int32_t x222 = INT32_MIN;
	int16_t x223 = 457;
	int8_t x224 = -1;

	t51 = ((x221%(x222^x223))%x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = INT32_MAX;
	volatile int8_t x226 = INT8_MIN;
	int32_t x227 = -342481;
	volatile int8_t x228 = -21;
	static volatile int32_t t52 = 89;

	t52 = ((x225%(x226^x227))%x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = -1;
	static int32_t x230 = -1;
	int64_t x231 = INT64_MIN;
	int64_t t53 = -4970046472711LL;

	t53 = ((x229%(x230^x231))%x232);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = INT32_MAX;
	int8_t x234 = INT8_MAX;
	int8_t x235 = 2;
	static volatile int32_t t54 = 293656165;

	t54 = ((x233%(x234^x235))%x236);

	if (t54 != 22) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x237 = 4718U;
	volatile int8_t x239 = 61;
	uint8_t x240 = UINT8_MAX;
	int32_t t55 = -185;

	t55 = ((x237%(x238^x239))%x240);

	if (t55 != 6) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x241 = 25663U;
	static volatile int32_t x242 = INT32_MAX;
	int32_t x243 = INT32_MIN;
	int32_t t56 = -9;

	t56 = ((x241%(x242^x243))%x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = INT32_MIN;
	static uint32_t x250 = UINT32_MAX;
	static uint32_t x251 = 8496U;
	static volatile int16_t x252 = INT16_MIN;
	uint32_t t57 = 53U;

	t57 = ((x249%(x250^x251))%x252);

	if (t57 != 2147483648U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x255 = INT64_MIN;
	volatile int64_t t58 = -3LL;

	t58 = ((x253%(x254^x255))%x256);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x257 = UINT32_MAX;
	volatile uint64_t x258 = 4463627054239907331LLU;
	static uint8_t x259 = 0U;
	static volatile uint64_t x260 = 786471326LLU;
	uint64_t t59 = 38LLU;

	t59 = ((x257%(x258^x259))%x260);

	if (t59 != 362610665LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = 1;
	int64_t x262 = INT64_MAX;
	int64_t x263 = INT64_MIN;
	static int32_t x264 = 3;
	int64_t t60 = 16057LL;

	t60 = ((x261%(x262^x263))%x264);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = 1;
	int16_t x268 = 30;
	volatile int64_t t61 = -598445580LL;

	t61 = ((x265%(x266^x267))%x268);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = INT64_MAX;
	int8_t x270 = INT8_MIN;
	volatile int64_t x271 = INT64_MAX;
	int32_t x272 = 74487;
	static volatile int64_t t62 = 1LL;

	t62 = ((x269%(x270^x271))%x272);

	if (t62 != 126LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = -1;
	int16_t x279 = INT16_MIN;
	int32_t x280 = 4;
	static volatile int32_t t63 = -4315982;

	t63 = ((x277%(x278^x279))%x280);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = 5;
	int8_t x282 = INT8_MIN;
	int64_t x284 = INT64_MIN;
	static volatile int64_t t64 = 69LL;

	t64 = ((x281%(x282^x283))%x284);

	if (t64 != 5LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x290 = -784105LL;
	static int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	volatile int64_t t65 = 2036881LL;

	t65 = ((x289%(x290^x291))%x292);

	if (t65 != -78LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = -1LL;
	volatile uint32_t x294 = 33126227U;
	static int64_t x295 = INT64_MIN;
	uint32_t x296 = UINT32_MAX;
	volatile int64_t t66 = 49718LL;

	t66 = ((x293%(x294^x295))%x296);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = INT8_MIN;
	int64_t x298 = -1LL;
	uint32_t x299 = 350U;
	int8_t x300 = -1;
	static volatile int64_t t67 = 106792237390330821LL;

	t67 = ((x297%(x298^x299))%x300);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = INT32_MIN;
	uint32_t x302 = 12009U;
	static volatile int8_t x303 = INT8_MIN;

	t68 = ((x301%(x302^x303))%x304);

	if (t68 != 2147483648U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = -1;
	int64_t x307 = -4LL;
	volatile uint64_t x308 = 3354187201479LLU;
	volatile uint64_t t69 = 7404645135208961LLU;

	t69 = ((x305%(x306^x307))%x308);

	if (t69 != 2473460419550LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x309 = UINT64_MAX;
	int16_t x310 = INT16_MIN;
	static int8_t x311 = INT8_MIN;

	t70 = ((x309%(x310^x311))%x312);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x314 = UINT64_MAX;
	volatile int32_t x315 = -72;
	uint16_t x316 = 1U;
	uint64_t t71 = 24LLU;

	t71 = ((x313%(x314^x315))%x316);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x318 = 1406;
	static uint16_t x319 = UINT16_MAX;
	uint8_t x320 = UINT8_MAX;
	int32_t t72 = 485331;

	t72 = ((x317%(x318^x319))%x320);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x322 = -14394476614181248LL;
	volatile int16_t x323 = -1606;
	volatile int16_t x324 = -1;
	volatile int64_t t73 = -272794854901LL;

	t73 = ((x321%(x322^x323))%x324);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = 198;
	volatile int16_t x327 = INT16_MIN;
	static int32_t x328 = INT32_MIN;
	int32_t t74 = 3753;

	t74 = ((x325%(x326^x327))%x328);

	if (t74 != 198) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = -1;
	static int64_t x331 = 117729869107LL;
	volatile int32_t x332 = INT32_MIN;
	int64_t t75 = 131882934818LL;

	t75 = ((x329%(x330^x331))%x332);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x333 = 0U;
	int32_t x334 = 1968;
	static int16_t x335 = 2;
	int32_t x336 = INT32_MAX;
	int32_t t76 = -12;

	t76 = ((x333%(x334^x335))%x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x337 = INT64_MIN;
	uint8_t x338 = 25U;
	int64_t x339 = -20844875235LL;
	uint32_t x340 = UINT32_MAX;
	int64_t t77 = 360793LL;

	t77 = ((x337%(x338^x339))%x340);

	if (t77 != -3000828608LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x341 = -1;
	int32_t x343 = -6;
	uint64_t x344 = 1497375LLU;
	uint64_t t78 = 249360LLU;

	t78 = ((x341%(x342^x343))%x344);

	if (t78 != 101490LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x346 = 58;
	int16_t x347 = 35;
	static int64_t x348 = 1113429LL;
	int64_t t79 = 951972102318734805LL;

	t79 = ((x345%(x346^x347))%x348);

	if (t79 != -18LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = -1LL;
	uint8_t x354 = UINT8_MAX;
	static volatile uint16_t x355 = 1U;
	volatile int64_t t80 = -147963LL;

	t80 = ((x353%(x354^x355))%x356);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x359 = UINT8_MAX;
	volatile uint64_t t81 = 78639327381LLU;

	t81 = ((x357%(x358^x359))%x360);

	if (t81 != 290LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = -1;
	uint8_t x362 = UINT8_MAX;
	int32_t x363 = -17091073;
	uint8_t x364 = UINT8_MAX;

	t82 = ((x361%(x362^x363))%x364);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x375 = INT64_MAX;
	uint16_t x376 = UINT16_MAX;

	t83 = ((x373%(x374^x375))%x376);

	if (t83 != 391LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x381 = INT32_MIN;
	volatile uint16_t x382 = 641U;
	int32_t x383 = 754520416;

	t84 = ((x381%(x382^x383))%x384);

	if (t84 != -88) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x385 = -1;
	int16_t x387 = -1;
	uint8_t x388 = UINT8_MAX;

	t85 = ((x385%(x386^x387))%x388);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x389 = 19759U;
	int32_t x390 = INT32_MAX;
	static int64_t x391 = -3097LL;
	static volatile int64_t t86 = -429535LL;

	t86 = ((x389%(x390^x391))%x392);

	if (t86 != 19759LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x393 = UINT64_MAX;
	int64_t x394 = 6761230LL;
	static uint32_t x395 = 423410894U;
	static int16_t x396 = INT16_MIN;
	volatile uint64_t t87 = 127LLU;

	t87 = ((x393%(x394^x395))%x396);

	if (t87 != 134862207LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x397 = 43U;
	static int32_t x398 = INT32_MAX;
	static uint8_t x399 = 79U;
	int16_t x400 = -1;
	static volatile uint32_t t88 = 12U;

	t88 = ((x397%(x398^x399))%x400);

	if (t88 != 43U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x401 = UINT8_MAX;
	int16_t x402 = INT16_MIN;
	volatile uint8_t x403 = UINT8_MAX;
	volatile int8_t x404 = INT8_MAX;
	volatile int32_t t89 = 0;

	t89 = ((x401%(x402^x403))%x404);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x405 = 7U;
	uint8_t x407 = 77U;
	volatile uint32_t t90 = 33108463U;

	t90 = ((x405%(x406^x407))%x408);

	if (t90 != 7U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x409 = -1;
	int8_t x410 = -1;
	uint8_t x411 = 97U;
	static int16_t x412 = INT16_MIN;

	t91 = ((x409%(x410^x411))%x412);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x413 = UINT8_MAX;
	int32_t x414 = INT32_MIN;
	static int32_t x415 = 917791;
	int32_t x416 = -12934070;
	int32_t t92 = 1;

	t92 = ((x413%(x414^x415))%x416);

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x417 = INT8_MIN;
	static int16_t x418 = INT16_MAX;
	int16_t x420 = INT16_MAX;
	volatile int32_t t93 = 0;

	t93 = ((x417%(x418^x419))%x420);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x423 = 2;
	uint16_t x424 = 23074U;
	volatile int64_t t94 = -8178325883LL;

	t94 = ((x421%(x422^x423))%x424);

	if (t94 != -2LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x425 = -1;
	int64_t t95 = -2482900138604813984LL;

	t95 = ((x425%(x426^x427))%x428);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x429 = 9U;
	int8_t x430 = 43;
	volatile int32_t t96 = -881783;

	t96 = ((x429%(x430^x431))%x432);

	if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x437 = 755U;
	int32_t x440 = INT32_MIN;
	volatile uint64_t t97 = 1LLU;

	t97 = ((x437%(x438^x439))%x440);

	if (t97 != 120LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x441 = INT64_MIN;
	uint16_t x443 = 3U;
	int32_t x444 = 31876;
	uint64_t t98 = 400788LLU;

	t98 = ((x441%(x442^x443))%x444);

	if (t98 != 3LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x445 = INT8_MIN;
	int8_t x447 = -1;
	int32_t x448 = INT32_MIN;
	int32_t t99 = -30609472;

	t99 = ((x445%(x446^x447))%x448);

	if (t99 != -128) { NG(); } else { ; }
	
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

