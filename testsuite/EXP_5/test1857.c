#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
volatile int32_t x4 = -1;
int16_t x8 = -1;
volatile int32_t x11 = INT32_MAX;
static volatile int32_t t2 = 20;
uint32_t x16 = UINT32_MAX;
static int64_t t5 = -19LL;
static uint64_t t6 = 124739408LLU;
uint32_t x29 = 135425975U;
int16_t x41 = 366;
int8_t x47 = INT8_MIN;
int32_t t12 = -700132;
static int32_t x55 = INT32_MIN;
volatile int64_t t13 = -252LL;
int8_t x58 = INT8_MIN;
static volatile int32_t t14 = -16124497;
int64_t x61 = INT64_MIN;
int8_t x64 = -1;
static volatile uint64_t t18 = 199415356LLU;
int16_t x80 = -1;
volatile uint64_t x82 = UINT64_MAX;
int16_t x83 = INT16_MIN;
uint16_t x86 = 169U;
static int64_t x87 = -134974269844338236LL;
uint32_t x90 = UINT32_MAX;
int8_t x92 = -17;
volatile uint32_t t22 = 3630455U;
volatile int32_t x93 = -1;
int64_t x96 = INT64_MAX;
uint8_t x97 = 6U;
volatile uint64_t t24 = 4785069898315623LLU;
volatile uint32_t t25 = 4135254U;
int32_t x106 = INT32_MAX;
volatile int64_t t26 = -782086542LL;
int32_t x111 = -1;
int32_t x115 = -1;
int8_t x116 = 5;
int32_t t28 = 56774629;
volatile uint8_t x119 = 4U;
static uint32_t x120 = 265161115U;
uint32_t x121 = UINT32_MAX;
volatile uint16_t x125 = UINT16_MAX;
static int8_t x127 = INT8_MIN;
int64_t x128 = -1LL;
uint32_t x136 = 3U;
int16_t x142 = -1;
volatile int32_t t35 = -38;
int32_t x146 = -62722;
volatile uint64_t t36 = 21LLU;
static int8_t x149 = -1;
int64_t x155 = 25LL;
static volatile int64_t t40 = 4LL;
int8_t x167 = INT8_MAX;
int16_t x169 = -1;
static int8_t x170 = INT8_MAX;
int64_t t42 = 1646596LL;
int8_t x176 = 54;
static int16_t x186 = 1;
volatile int64_t t47 = INT64_MIN;
uint8_t x196 = UINT8_MAX;
volatile int64_t t48 = -1028766LL;
static int32_t t51 = -13;
uint8_t x209 = UINT8_MAX;
int32_t x210 = -1;
static uint16_t x216 = 1885U;
int8_t x218 = INT8_MIN;
int16_t x227 = INT16_MAX;
uint16_t x229 = 63U;
volatile int32_t x237 = INT32_MIN;
volatile int64_t x247 = -1LL;
int8_t x256 = 1;
int32_t x263 = 183784;
static uint64_t x265 = 1LLU;
int64_t x268 = 8367134200154279LL;
int32_t x276 = 44;
int8_t x279 = -13;
int64_t x280 = INT64_MIN;
uint64_t t69 = 35233LLU;
int32_t x282 = 2994;
uint64_t t71 = 668580513009964LLU;
int64_t x292 = INT64_MIN;
int64_t x294 = 7233603156LL;
static int32_t x297 = INT32_MAX;
volatile int32_t t74 = -24;
int32_t x306 = -1;
uint64_t x312 = UINT64_MAX;
uint64_t x314 = UINT64_MAX;
static int16_t x315 = -4;
int32_t t79 = 4;
volatile uint32_t x323 = UINT32_MAX;
int32_t x324 = -22;
volatile uint16_t x331 = UINT16_MAX;
int64_t x335 = INT64_MIN;
int32_t x350 = 76267;
int64_t t87 = -54997859LL;
volatile uint32_t x357 = 206706707U;
int64_t x361 = INT64_MAX;
int16_t x368 = 27;
int32_t x372 = INT32_MIN;
int64_t t94 = 28694688556LL;
static int16_t x381 = INT16_MIN;
static int32_t x383 = -1;
volatile int64_t x384 = -3515645039122135247LL;
static int64_t x392 = -1LL;
int16_t x396 = INT16_MIN;
int16_t x398 = -1;


void f0(void) {
	volatile int16_t x1 = -1;
	int32_t x2 = -65840;
	volatile int32_t t0 = 155;

	t0 = (x1&((x2&x3)^x4));

	if (t0 != -32465) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	uint64_t x6 = UINT64_MAX;
	uint64_t x7 = UINT64_MAX;
	uint64_t t1 = 49LLU;

	t1 = (x5&((x6&x7)^x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = INT8_MAX;
	int32_t x12 = -29995305;

	t2 = (x9&((x10&x11)^x12));

	if (t2 != -30015488) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = UINT8_MAX;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = (x13&((x14&x15)^x16));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x17 = -14;
	int32_t x18 = 80582;
	int64_t x19 = INT64_MAX;
	uint16_t x20 = 19659U;
	static int64_t t4 = -11804815LL;

	t4 = (x17&((x18&x19)^x20));

	if (t4 != 95744LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	int64_t x22 = INT64_MIN;
	int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MAX;

	t5 = (x21&((x22&x23)^x24));

	if (t5 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int32_t x26 = -1;
	uint16_t x27 = 474U;
	volatile uint64_t x28 = 10654093LLU;

	t6 = (x25&((x26&x27)^x28));

	if (t6 != 10653783LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = 123;
	static volatile uint16_t x31 = 6155U;
	int16_t x32 = INT16_MIN;
	static uint32_t t7 = 693393630U;

	t7 = (x29&((x30&x31)^x32));

	if (t7 != 135397379U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 1U;
	int16_t x34 = INT16_MIN;
	volatile int32_t x35 = INT32_MIN;
	static uint32_t x36 = UINT32_MAX;
	uint32_t t8 = 1U;

	t8 = (x33&((x34&x35)^x36));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int64_t x38 = INT64_MIN;
	uint64_t x39 = 23195359815283135LLU;
	uint16_t x40 = 7U;
	volatile uint64_t t9 = 45102421840380357LLU;

	t9 = (x37&((x38&x39)^x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = UINT16_MAX;
	static int64_t x43 = -1LL;
	int32_t x44 = -6022;
	volatile int64_t t10 = 2120950LL;

	t10 = (x41&((x42&x43)^x44));

	if (t10 != 260LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x45 = 1837LLU;
	int8_t x46 = INT8_MIN;
	int32_t x48 = -1;
	uint64_t t11 = 4799520850726LLU;

	t11 = (x45&((x46&x47)^x48));

	if (t11 != 45LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 13;
	int16_t x50 = INT16_MIN;
	int8_t x51 = -1;
	static volatile int8_t x52 = INT8_MAX;

	t12 = (x49&((x50&x51)^x52));

	if (t12 != 13) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	static uint16_t x54 = UINT16_MAX;
	int64_t x56 = -1LL;

	t13 = (x53&((x54&x55)^x56));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static int32_t x59 = INT32_MIN;
	int16_t x60 = INT16_MIN;

	t14 = (x57&((x58&x59)^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = 1581;
	int8_t x63 = INT8_MAX;
	static volatile int64_t t15 = INT64_MIN;

	t15 = (x61&((x62&x63)^x64));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 1711U;
	volatile uint8_t x66 = 1U;
	int8_t x67 = -1;
	static uint64_t x68 = UINT64_MAX;
	static volatile uint64_t t16 = 15LLU;

	t16 = (x65&((x66&x67)^x68));

	if (t16 != 1710LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -1;
	volatile int16_t x70 = INT16_MIN;
	int64_t x71 = 19595LL;
	uint16_t x72 = UINT16_MAX;
	volatile int64_t t17 = 564571924LL;

	t17 = (x69&((x70&x71)^x72));

	if (t17 != 65535LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 7716706270LLU;
	int32_t x74 = INT32_MAX;
	int64_t x75 = 5532242447273921LL;
	uint32_t x76 = UINT32_MAX;

	t18 = (x73&((x74&x75)^x76));

	if (t18 != 3390181406LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 1;
	int32_t x78 = -1;
	volatile int64_t x79 = INT64_MAX;
	static int64_t t19 = 10079104619LL;

	t19 = (x77&((x78&x79)^x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	uint64_t x84 = 13320757422LLU;
	static uint64_t t20 = 182537341895274858LLU;

	t20 = (x81&((x82&x83)^x84));

	if (t20 != 3859095726LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 2U;
	int64_t x88 = INT64_MIN;
	int64_t t21 = 835716397LL;

	t21 = (x85&((x86&x87)^x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int32_t x91 = INT32_MIN;

	t22 = (x89&((x90&x91)^x92));

	if (t22 != 2147450880U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	volatile int64_t t23 = 21105693345066051LL;

	t23 = (x93&((x94&x95)^x96));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x98 = INT16_MIN;
	uint16_t x99 = 1U;
	uint64_t x100 = 1409532015LLU;

	t24 = (x97&((x98&x99)^x100));

	if (t24 != 6LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 611620813U;
	int8_t x102 = INT8_MIN;
	uint8_t x103 = 8U;
	static int32_t x104 = INT32_MIN;

	t25 = (x101&((x102&x103)^x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = 55U;
	volatile int64_t x107 = INT64_MAX;
	volatile int8_t x108 = INT8_MAX;

	t26 = (x105&((x106&x107)^x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	static int16_t x110 = 3;
	int32_t x112 = INT32_MIN;
	static int32_t t27 = INT32_MIN;

	t27 = (x109&((x110&x111)^x112));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	uint8_t x114 = 3U;

	t28 = (x113&((x114&x115)^x116));

	if (t28 != 6) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = UINT8_MAX;
	static volatile int64_t x118 = INT64_MIN;
	static int64_t t29 = -63100167607LL;

	t29 = (x117&((x118&x119)^x120));

	if (t29 != 155LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x122 = -55397LL;
	static int8_t x123 = -2;
	volatile int64_t x124 = INT64_MIN;
	static int64_t t30 = -21597275LL;

	t30 = (x121&((x122&x123)^x124));

	if (t30 != 4294911898LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = UINT64_MAX;
	volatile uint64_t t31 = 450576512LLU;

	t31 = (x125&((x126&x127)^x128));

	if (t31 != 127LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	int64_t x130 = -4104631136776507LL;
	volatile int32_t x131 = INT32_MAX;
	uint64_t x132 = UINT64_MAX;
	uint64_t t32 = 4163544822LLU;

	t32 = (x129&((x130&x131)^x132));

	if (t32 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = 11973;
	volatile int32_t x134 = -1;
	int16_t x135 = -4964;
	static uint32_t t33 = 2U;

	t33 = (x133&((x134&x135)^x136));

	if (t33 != 11397U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = -1;
	int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MAX;
	int32_t x140 = INT32_MAX;
	int64_t t34 = 1218586981505785LL;

	t34 = (x137&((x138&x139)^x140));

	if (t34 != 2147483647LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	uint8_t x143 = UINT8_MAX;
	volatile int16_t x144 = INT16_MIN;

	t35 = (x141&((x142&x143)^x144));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	int32_t x147 = -178;
	uint64_t x148 = 57337LLU;

	t36 = (x145&((x146&x147)^x148));

	if (t36 != 2147472823LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x150 = -8784LL;
	volatile uint64_t x151 = 217500113327LLU;
	volatile uint32_t x152 = 85705962U;
	uint64_t t37 = 1924978378LLU;

	t37 = (x149&((x150&x151)^x152));

	if (t37 != 217451568458LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -3;
	static int64_t x154 = INT64_MAX;
	int32_t x156 = INT32_MAX;
	static volatile int64_t t38 = -101LL;

	t38 = (x153&((x154&x155)^x156));

	if (t38 != 2147483620LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 798821U;
	uint8_t x158 = 59U;
	volatile int64_t x159 = INT64_MIN;
	int32_t x160 = INT32_MIN;
	int64_t t39 = 90309LL;

	t39 = (x157&((x158&x159)^x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 1;
	int16_t x162 = -1;
	int64_t x163 = 33493245077410LL;
	int8_t x164 = INT8_MIN;

	t40 = (x161&((x162&x163)^x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	volatile uint32_t x166 = 96U;
	static int32_t x168 = INT32_MAX;
	volatile int64_t t41 = 267LL;

	t41 = (x165&((x166&x167)^x168));

	if (t41 != 2147483551LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x171 = -1;
	int64_t x172 = -31228931415637LL;

	t42 = (x169&((x170&x171)^x172));

	if (t42 != -31228931415596LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x173 = 1732U;
	int64_t x174 = INT64_MAX;
	static volatile uint64_t x175 = 6855307773LLU;
	uint64_t t43 = 0LLU;

	t43 = (x173&((x174&x175)^x176));

	if (t43 != 192LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	static int64_t x178 = INT64_MIN;
	uint8_t x179 = 0U;
	int64_t x180 = -1LL;
	static volatile int64_t t44 = -10078554LL;

	t44 = (x177&((x178&x179)^x180));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 16228768LLU;
	int16_t x182 = 15982;
	int16_t x183 = -1;
	static int16_t x184 = -1;
	volatile uint64_t t45 = 13062LLU;

	t45 = (x181&((x182&x183)^x184));

	if (t45 != 16220544LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	int8_t x188 = 1;
	volatile int32_t t46 = -1;

	t46 = (x185&((x186&x187)^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MIN;
	int16_t x190 = INT16_MIN;
	int64_t x191 = INT64_MAX;
	int16_t x192 = INT16_MIN;

	t47 = (x189&((x190&x191)^x192));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	static int64_t x194 = INT64_MIN;
	int8_t x195 = -1;

	t48 = (x193&((x194&x195)^x196));

	if (t48 != 255LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x197 = 58155808LL;
	int16_t x198 = 1405;
	volatile int8_t x199 = 1;
	static int64_t x200 = INT64_MIN;
	int64_t t49 = 871LL;

	t49 = (x197&((x198&x199)^x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -1;
	static uint16_t x202 = UINT16_MAX;
	static int32_t x203 = INT32_MIN;
	int8_t x204 = -1;
	volatile int32_t t50 = 20;

	t50 = (x201&((x202&x203)^x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 0U;
	int32_t x206 = INT32_MAX;
	uint8_t x207 = 2U;
	volatile int32_t x208 = -338189;

	t51 = (x205&((x206&x207)^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x211 = INT8_MIN;
	static int32_t x212 = INT32_MIN;
	int32_t t52 = 1032;

	t52 = (x209&((x210&x211)^x212));

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x213 = -1LL;
	uint64_t x214 = 301LLU;
	uint64_t x215 = 1LLU;
	uint64_t t53 = 467295LLU;

	t53 = (x213&((x214&x215)^x216));

	if (t53 != 1884LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MAX;
	int16_t x219 = INT16_MIN;
	uint32_t x220 = 65U;
	volatile uint32_t t54 = 898949U;

	t54 = (x217&((x218&x219)^x220));

	if (t54 != 65U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	volatile uint8_t x222 = 4U;
	static int64_t x223 = INT64_MIN;
	static int16_t x224 = INT16_MAX;
	int64_t t55 = -1872749841083LL;

	t55 = (x221&((x222&x223)^x224));

	if (t55 != 32767LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = 25862LL;
	uint8_t x226 = 4U;
	int16_t x228 = -1;
	volatile int64_t t56 = 227461LL;

	t56 = (x225&((x226&x227)^x228));

	if (t56 != 25858LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = 4U;
	int8_t x231 = 1;
	int32_t x232 = -1;
	volatile uint32_t t57 = 29956U;

	t57 = (x229&((x230&x231)^x232));

	if (t57 != 63U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = 1U;
	static int8_t x234 = INT8_MIN;
	int8_t x235 = -1;
	int32_t x236 = INT32_MIN;
	int32_t t58 = -263651871;

	t58 = (x233&((x234&x235)^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = -399;
	volatile int8_t x239 = INT8_MIN;
	int32_t x240 = INT32_MAX;
	static int32_t t59 = INT32_MIN;

	t59 = (x237&((x238&x239)^x240));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	static int8_t x242 = INT8_MAX;
	static int32_t x243 = -1;
	int32_t x244 = INT32_MIN;
	int32_t t60 = INT32_MIN;

	t60 = (x241&((x242&x243)^x244));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	int64_t x246 = -140919LL;
	uint16_t x248 = 400U;
	int64_t t61 = 5235302563528LL;

	t61 = (x245&((x246&x247)^x248));

	if (t61 != 2147342361LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x250 = -1;
	int16_t x251 = INT16_MIN;
	volatile int16_t x252 = -64;
	volatile uint32_t t62 = 10U;

	t62 = (x249&((x250&x251)^x252));

	if (t62 != 32704U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x253 = 54466U;
	uint8_t x254 = 1U;
	uint32_t x255 = 38122U;
	static volatile uint32_t t63 = 262194123U;

	t63 = (x253&((x254&x255)^x256));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	uint16_t x258 = 1U;
	static int16_t x259 = -7;
	volatile int32_t x260 = INT32_MIN;
	static volatile int32_t t64 = INT32_MIN;

	t64 = (x257&((x258&x259)^x260));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = -1;
	static uint32_t x262 = 946U;
	static int64_t x264 = INT64_MAX;
	int64_t t65 = -114675LL;

	t65 = (x261&((x262&x263)^x264));

	if (t65 != 9223372036854775391LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x266 = 8U;
	int64_t x267 = INT64_MIN;
	volatile uint64_t t66 = 289984551017LLU;

	t66 = (x265&((x266&x267)^x268));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MAX;
	int32_t x270 = INT32_MIN;
	uint32_t x271 = UINT32_MAX;
	static volatile int16_t x272 = 6;
	uint32_t t67 = 13804086U;

	t67 = (x269&((x270&x271)^x272));

	if (t67 != 6U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 577U;
	uint32_t x274 = UINT32_MAX;
	int8_t x275 = INT8_MIN;
	uint32_t t68 = 500833U;

	t68 = (x273&((x274&x275)^x276));

	if (t68 != 512U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	uint64_t x278 = 3813183729507LLU;

	t69 = (x277&((x278&x279)^x280));

	if (t69 != 9223375850038505315LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = UINT8_MAX;
	int16_t x283 = -1;
	int8_t x284 = 1;
	int32_t t70 = -1;

	t70 = (x281&((x282&x283)^x284));

	if (t70 != 179) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	int8_t x286 = 2;
	int32_t x287 = 14;
	int8_t x288 = INT8_MIN;

	t71 = (x285&((x286&x287)^x288));

	if (t71 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -39;
	static int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MAX;
	int64_t t72 = INT64_MIN;

	t72 = (x289&((x290&x291)^x292));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	uint16_t x295 = 123U;
	int64_t x296 = 147482039350LL;
	int64_t t73 = 23225LL;

	t73 = (x293&((x294&x295)^x296));

	if (t73 != 1453151334LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x298 = INT16_MAX;
	int16_t x299 = -2557;
	int16_t x300 = INT16_MIN;

	t74 = (x297&((x298&x299)^x300));

	if (t74 != 2147481091) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	uint8_t x302 = UINT8_MAX;
	uint8_t x303 = 1U;
	volatile int8_t x304 = INT8_MIN;
	int64_t t75 = INT64_MIN;

	t75 = (x301&((x302&x303)^x304));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	int8_t x307 = INT8_MAX;
	int64_t x308 = INT64_MAX;
	static volatile int64_t t76 = -165096950620LL;

	t76 = (x305&((x306&x307)^x308));

	if (t76 != 4294967168LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = UINT64_MAX;
	volatile int8_t x310 = INT8_MAX;
	volatile int32_t x311 = 228231589;
	volatile uint64_t t77 = 11013407LLU;

	t77 = (x309&((x310&x311)^x312));

	if (t77 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = 85299100;
	static int64_t x316 = -1LL;
	uint64_t t78 = 76LLU;

	t78 = (x313&((x314&x315)^x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -28;
	int8_t x318 = INT8_MIN;
	volatile int32_t x319 = INT32_MIN;
	uint8_t x320 = UINT8_MAX;

	t79 = (x317&((x318&x319)^x320));

	if (t79 != -2147483420) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 316692233249962104LL;
	int32_t x322 = -145427;
	int64_t t80 = 825969LL;

	t80 = (x321&((x322&x323)^x324));

	if (t80 != 14336LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = -1184287;
	static int32_t x326 = 308;
	int16_t x327 = INT16_MAX;
	uint32_t x328 = 106520U;
	uint32_t t81 = 5U;

	t81 = (x325&((x326&x327)^x328));

	if (t81 != 106784U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = UINT32_MAX;
	int8_t x330 = INT8_MAX;
	static uint64_t x332 = UINT64_MAX;
	uint64_t t82 = 168682891341067LLU;

	t82 = (x329&((x330&x331)^x332));

	if (t82 != 4294967168LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	int32_t x334 = 7948;
	volatile int64_t x336 = -1421LL;
	volatile int64_t t83 = -32LL;

	t83 = (x333&((x334&x335)^x336));

	if (t83 != 2147482227LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	static int8_t x338 = INT8_MIN;
	int64_t x339 = -32046395997LL;
	int64_t x340 = INT64_MIN;
	int64_t t84 = -44309869LL;

	t84 = (x337&((x338&x339)^x340));

	if (t84 != 2313342336LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	uint32_t x342 = 1401130835U;
	uint16_t x343 = 0U;
	int16_t x344 = -1;
	static uint32_t t85 = 4U;

	t85 = (x341&((x342&x343)^x344));

	if (t85 != 2147483647U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = 4287302520LL;
	volatile uint32_t x346 = UINT32_MAX;
	static uint64_t x347 = 4552404LLU;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t86 = 5125234516651LLU;

	t86 = (x345&((x346&x347)^x348));

	if (t86 != 4287236392LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	int64_t x351 = -1LL;
	int32_t x352 = INT32_MIN;

	t87 = (x349&((x350&x351)^x352));

	if (t87 != 107LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	uint16_t x354 = 30591U;
	static int16_t x355 = INT16_MAX;
	volatile int32_t x356 = INT32_MIN;
	static volatile int32_t t88 = 1;

	t88 = (x353&((x354&x355)^x356));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = 2;
	int64_t x359 = INT64_MIN;
	int64_t x360 = -1LL;
	volatile int64_t t89 = 44157LL;

	t89 = (x357&((x358&x359)^x360));

	if (t89 != 206706707LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x362 = -38706;
	volatile int64_t x363 = INT64_MIN;
	volatile int32_t x364 = INT32_MIN;
	volatile int64_t t90 = 4LL;

	t90 = (x361&((x362&x363)^x364));

	if (t90 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x365 = 34813795U;
	volatile int64_t x366 = INT64_MIN;
	volatile int32_t x367 = INT32_MIN;
	int64_t t91 = 57042031001079123LL;

	t91 = (x365&((x366&x367)^x368));

	if (t91 != 3LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = 1264838;
	int16_t x370 = -1;
	int64_t x371 = INT64_MIN;
	int64_t t92 = 59368LL;

	t92 = (x369&((x370&x371)^x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x373 = 850782897119873LLU;
	int16_t x374 = INT16_MIN;
	int32_t x375 = -1;
	volatile int8_t x376 = INT8_MAX;
	volatile uint64_t t93 = 3053LLU;

	t93 = (x373&((x374&x375)^x376));

	if (t93 != 850782897111041LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MAX;
	volatile int8_t x378 = -4;
	int64_t x379 = -68461131241LL;
	int64_t x380 = INT64_MIN;

	t94 = (x377&((x378&x379)^x380));

	if (t94 != 258345492LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x382 = -1;
	int64_t t95 = 67394031585203LL;

	t95 = (x381&((x382&x383)^x384));

	if (t95 != 3515645039122120704LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -225707LL;
	int32_t x386 = INT32_MAX;
	int64_t x387 = INT64_MAX;
	static int32_t x388 = 119;
	volatile int64_t t96 = -883363LL;

	t96 = (x385&((x386&x387)^x388));

	if (t96 != 2147257856LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MAX;
	int32_t x390 = INT32_MIN;
	uint16_t x391 = 3U;
	volatile int64_t t97 = INT64_MAX;

	t97 = (x389&((x390&x391)^x392));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 1;
	static uint32_t x394 = UINT32_MAX;
	int32_t x395 = 1806501;
	static uint32_t t98 = 3102475U;

	t98 = (x393&((x394&x395)^x396));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 23U;
	static int16_t x399 = 373;
	int8_t x400 = INT8_MIN;
	int32_t t99 = 203;

	t99 = (x397&((x398&x399)^x400));

	if (t99 != 21) { NG(); } else { ; }
	
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

