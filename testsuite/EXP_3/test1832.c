#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x6 = INT64_MIN;
int64_t t1 = INT64_MIN;
int32_t x10 = INT32_MAX;
uint64_t t4 = 427072894LLU;
volatile uint8_t x25 = UINT8_MAX;
uint64_t x30 = 113LLU;
int64_t x32 = -79831363LL;
uint16_t x39 = 0U;
int32_t x40 = 3560;
int64_t x46 = -500537211LL;
int16_t x48 = INT16_MAX;
uint32_t x50 = UINT32_MAX;
static uint64_t x52 = UINT64_MAX;
int16_t x53 = 0;
uint8_t x55 = 3U;
volatile int32_t t13 = -375219;
static int8_t x57 = -1;
int16_t x58 = INT16_MIN;
uint64_t x59 = 754946LLU;
volatile int16_t x64 = 18;
int16_t x66 = INT16_MIN;
volatile int32_t t16 = -443439;
volatile uint8_t x71 = 6U;
int8_t x72 = INT8_MIN;
volatile uint64_t x73 = 203757811610633687LLU;
static int32_t x79 = -1;
volatile int32_t x84 = INT32_MIN;
int64_t x87 = -1LL;
volatile int16_t x98 = INT16_MAX;
int8_t x101 = 13;
int64_t x103 = INT64_MIN;
static uint8_t x116 = 9U;
static int32_t x118 = INT32_MIN;
uint64_t x119 = 859427929204281LLU;
int32_t x121 = INT32_MIN;
volatile uint8_t x125 = 26U;
volatile int32_t x127 = INT32_MIN;
static int32_t x128 = INT32_MIN;
int8_t x129 = -6;
int32_t x134 = 6;
volatile uint64_t x137 = UINT64_MAX;
uint8_t x140 = 1U;
int16_t x141 = -168;
int16_t x143 = INT16_MIN;
int16_t x152 = 2763;
volatile int8_t x153 = INT8_MIN;
static int64_t x156 = -103455741731930LL;
static volatile int16_t x159 = 189;
int8_t x160 = INT8_MAX;
int8_t x165 = -1;
int16_t x166 = INT16_MIN;
uint32_t x167 = 211249U;
int16_t x171 = INT16_MIN;
volatile int16_t x173 = -1;
volatile uint16_t x178 = 299U;
static volatile uint16_t x185 = 7U;
volatile uint32_t t46 = 130689081U;
uint8_t x197 = UINT8_MAX;
volatile int64_t x198 = -7995027876LL;
int8_t x199 = INT8_MAX;
int64_t x203 = INT64_MAX;
uint64_t x207 = 1733522270510126LLU;
volatile uint16_t x208 = 15U;
volatile int64_t x212 = INT64_MIN;
static uint64_t t53 = 7732153673LLU;
uint32_t x220 = 25U;
volatile int64_t t54 = 3313052042LL;
uint16_t x222 = 3418U;
volatile int64_t x224 = 30LL;
uint8_t x225 = 4U;
volatile uint32_t x226 = 12U;
uint32_t t56 = 127U;
static volatile int32_t x233 = INT32_MIN;
int8_t x239 = INT8_MIN;
volatile uint32_t t60 = 686U;
volatile int16_t x247 = -894;
uint8_t x266 = UINT8_MAX;
volatile int64_t x270 = INT64_MIN;
int32_t x272 = INT32_MAX;
uint32_t x276 = 55703954U;
int64_t x283 = INT64_MIN;
int32_t x284 = -1;
int8_t x285 = 4;
uint16_t x289 = UINT16_MAX;
volatile uint64_t x290 = 29690486191490703LLU;
volatile int32_t x306 = -412746483;
uint8_t x321 = UINT8_MAX;
int32_t x322 = INT32_MAX;
uint16_t x323 = UINT16_MAX;
uint32_t x325 = UINT32_MAX;
volatile uint32_t x330 = UINT32_MAX;
int32_t x332 = -1;
int8_t x334 = -18;
int32_t x339 = INT32_MIN;
volatile int16_t x347 = INT16_MAX;
volatile int8_t x351 = 0;
static int64_t x352 = INT64_MIN;
uint16_t x355 = 1441U;
int64_t t88 = -18341556LL;
static int32_t x361 = INT32_MIN;
uint64_t t90 = 8740255305LLU;
int64_t x365 = -256LL;
uint8_t x368 = 38U;
uint64_t x372 = 41315374168LLU;
int8_t x378 = -1;
int64_t x380 = -26473LL;
uint64_t x386 = UINT64_MAX;
int8_t x391 = INT8_MIN;
uint16_t x396 = UINT16_MAX;
volatile int32_t t99 = -21;


void f0(void) {
	int8_t x1 = 0;
	int8_t x2 = -1;
	static volatile int64_t x3 = -7LL;
	int16_t x4 = 12;
	static volatile int64_t t0 = 1092667279024LL;

	t0 = ((x1&x2)|(x3&x4));

	if (t0 != 8LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x7 = INT64_MIN;
	static volatile uint32_t x8 = 5208692U;

	t1 = ((x5&x6)|(x7&x8));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static int64_t x11 = INT64_MAX;
	volatile int32_t x12 = -1;
	int64_t t2 = INT64_MAX;

	t2 = ((x9&x10)|(x11&x12));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -1;
	uint8_t x14 = 32U;
	uint32_t x15 = UINT32_MAX;
	int16_t x16 = INT16_MIN;
	volatile uint32_t t3 = 0U;

	t3 = ((x13&x14)|(x15&x16));

	if (t3 != 4294934560U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 331;
	int16_t x18 = 12;
	uint64_t x19 = 98741217196454038LLU;
	int16_t x20 = -935;

	t4 = ((x17&x18)|(x19&x20));

	if (t4 != 98741217196453912LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint64_t x22 = 1505052610LLU;
	int16_t x23 = -1;
	int32_t x24 = INT32_MAX;
	uint64_t t5 = 483018LLU;

	t5 = ((x21&x22)|(x23&x24));

	if (t5 != 2147483647LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	static int64_t x27 = -1LL;
	int32_t x28 = -5;
	int64_t t6 = -14LL;

	t6 = ((x25&x26)|(x27&x28));

	if (t6 != -5LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int64_t x31 = INT64_MIN;
	uint64_t t7 = 4672387624346846LLU;

	t7 = ((x29&x30)|(x31&x32));

	if (t7 != 9223372036854775921LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = 8692327379168LL;
	int8_t x34 = INT8_MIN;
	static int8_t x35 = INT8_MAX;
	static int8_t x36 = -1;
	static volatile int64_t t8 = -15344775LL;

	t8 = ((x33&x34)|(x35&x36));

	if (t8 != 8692327379199LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 6055U;
	int32_t x38 = -1;
	int32_t t9 = -22740;

	t9 = ((x37&x38)|(x39&x40));

	if (t9 != 6055) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int8_t x42 = INT8_MIN;
	static int8_t x43 = -1;
	volatile int32_t x44 = 912495;
	int32_t t10 = 9264902;

	t10 = ((x41&x42)|(x43&x44));

	if (t10 != 917487) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int64_t x47 = 0LL;
	static int64_t t11 = 6976498013LL;

	t11 = ((x45&x46)|(x47&x48));

	if (t11 != 3794430085LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	uint16_t x51 = 7U;
	static volatile uint64_t t12 = 1855LLU;

	t12 = ((x49&x50)|(x51&x52));

	if (t12 != 4294967295LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MAX;
	static int8_t x56 = INT8_MIN;

	t13 = ((x53&x54)|(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x60 = INT32_MIN;
	volatile uint64_t t14 = 1866277LLU;

	t14 = ((x57&x58)|(x59&x60));

	if (t14 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = 0;
	int64_t x62 = -1LL;
	volatile int32_t x63 = INT32_MIN;
	int64_t t15 = 31459LL;

	t15 = ((x61&x62)|(x63&x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 0U;
	int8_t x67 = INT8_MAX;
	uint16_t x68 = 26U;

	t16 = ((x65&x66)|(x67&x68));

	if (t16 != 26) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 0U;
	uint64_t x70 = UINT64_MAX;
	uint64_t t17 = 5654404479LLU;

	t17 = ((x69&x70)|(x71&x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x74 = INT64_MIN;
	static int8_t x75 = -1;
	int64_t x76 = INT64_MIN;
	volatile uint64_t t18 = 720609335610262164LLU;

	t18 = ((x73&x74)|(x75&x76));

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	static int64_t x78 = INT64_MIN;
	int32_t x80 = INT32_MIN;
	volatile int64_t t19 = 1715928LL;

	t19 = ((x77&x78)|(x79&x80));

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	static uint32_t x82 = 29029246U;
	int32_t x83 = INT32_MIN;
	volatile uint32_t t20 = 1315U;

	t20 = ((x81&x82)|(x83&x84));

	if (t20 != 2147545982U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static uint16_t x86 = 1U;
	volatile uint64_t x88 = 123241861894LLU;
	uint64_t t21 = 1636201852274704LLU;

	t21 = ((x85&x86)|(x87&x88));

	if (t21 != 123241861894LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 1369984244507LLU;
	int64_t x90 = INT64_MIN;
	static uint32_t x91 = 1033289U;
	int8_t x92 = INT8_MIN;
	uint64_t t22 = 1828599LLU;

	t22 = ((x89&x90)|(x91&x92));

	if (t22 != 1033216LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x94 = 3589746;
	int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MIN;
	static volatile uint64_t t23 = 1LLU;

	t23 = ((x93&x94)|(x95&x96));

	if (t23 != 18446744071565657714LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = 27;
	volatile uint64_t x99 = 24274120LLU;
	int32_t x100 = INT32_MAX;
	uint64_t t24 = 9LLU;

	t24 = ((x97&x98)|(x99&x100));

	if (t24 != 24274139LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x102 = INT16_MIN;
	volatile int32_t x104 = INT32_MAX;
	int64_t t25 = 35297600834LL;

	t25 = ((x101&x102)|(x103&x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x105 = 1291LLU;
	static int8_t x106 = 1;
	static int64_t x107 = 503739LL;
	int32_t x108 = INT32_MAX;
	uint64_t t26 = 1LLU;

	t26 = ((x105&x106)|(x107&x108));

	if (t26 != 503739LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 6760U;
	static int16_t x110 = -11184;
	volatile uint32_t x111 = 4406960U;
	int64_t x112 = 36757343787901LL;
	int64_t t27 = -255722078528525428LL;

	t27 = ((x109&x110)|(x111&x112));

	if (t27 != 4397680LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	uint16_t x114 = 13646U;
	int8_t x115 = INT8_MIN;
	volatile int32_t t28 = 7030;

	t28 = ((x113&x114)|(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	volatile uint16_t x120 = 129U;
	volatile uint64_t t29 = 5554723LLU;

	t29 = ((x117&x118)|(x119&x120));

	if (t29 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = -1;
	static volatile uint32_t x123 = UINT32_MAX;
	volatile int64_t x124 = 4100939LL;
	int64_t t30 = -136031958012395334LL;

	t30 = ((x121&x122)|(x123&x124));

	if (t30 != -2143382709LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MAX;
	int64_t t31 = -1LL;

	t31 = ((x125&x126)|(x127&x128));

	if (t31 != -2147483622LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x130 = INT8_MIN;
	int16_t x131 = 1;
	int8_t x132 = INT8_MIN;
	int32_t t32 = 0;

	t32 = ((x129&x130)|(x131&x132));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 0;
	int16_t x135 = INT16_MIN;
	volatile int64_t x136 = -95575116131LL;
	int64_t t33 = -1130104265LL;

	t33 = ((x133&x134)|(x135&x136));

	if (t33 != -95575146496LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = -1125LL;
	volatile int16_t x139 = -1;
	volatile uint64_t t34 = 278467063033459072LLU;

	t34 = ((x137&x138)|(x139&x140));

	if (t34 != 18446744073709550491LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MIN;
	int8_t x144 = -1;
	volatile int64_t t35 = -24123232559843416LL;

	t35 = ((x141&x142)|(x143&x144));

	if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 32277LLU;
	uint64_t x146 = UINT64_MAX;
	volatile int64_t x147 = -1LL;
	int64_t x148 = INT64_MIN;
	uint64_t t36 = 179023LLU;

	t36 = ((x145&x146)|(x147&x148));

	if (t36 != 9223372036854808085LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MIN;
	static uint64_t x151 = 8534810879LLU;
	static volatile uint64_t t37 = 142976135583821361LLU;

	t37 = ((x149&x150)|(x151&x152));

	if (t37 != 18446744073709519051LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x154 = -9;
	volatile int8_t x155 = INT8_MIN;
	static volatile int64_t t38 = 1974140797417044LL;

	t38 = ((x153&x154)|(x155&x156));

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = -10294300;
	static int8_t x158 = INT8_MAX;
	static volatile int32_t t39 = -125267521;

	t39 = ((x157&x158)|(x159&x160));

	if (t39 != 125) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int8_t x162 = 11;
	int32_t x163 = INT32_MAX;
	static volatile int8_t x164 = INT8_MIN;
	int32_t t40 = -660;

	t40 = ((x161&x162)|(x163&x164));

	if (t40 != 2147483520) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x168 = 43U;
	volatile uint32_t t41 = 38U;

	t41 = ((x165&x166)|(x167&x168));

	if (t41 != 4294934561U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	uint8_t x170 = UINT8_MAX;
	int32_t x172 = -20686909;
	volatile uint64_t t42 = 47481LLU;

	t42 = ((x169&x170)|(x171&x172));

	if (t42 != 18446744073688842495LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x174 = UINT32_MAX;
	uint64_t x175 = 56194501LLU;
	uint16_t x176 = 4U;
	volatile uint64_t t43 = 6336454921586LLU;

	t43 = ((x173&x174)|(x175&x176));

	if (t43 != 4294967295LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	static uint8_t x179 = 105U;
	static int32_t x180 = -200043;
	int32_t t44 = 102576;

	t44 = ((x177&x178)|(x179&x180));

	if (t44 != 257) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -15;
	int8_t x182 = INT8_MAX;
	int16_t x183 = 44;
	int16_t x184 = INT16_MAX;
	static volatile int32_t t45 = 271098;

	t45 = ((x181&x182)|(x183&x184));

	if (t45 != 125) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x186 = 3912U;
	uint8_t x187 = 1U;
	uint16_t x188 = UINT16_MAX;

	t46 = ((x185&x186)|(x187&x188));

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = -231088;
	int16_t x191 = INT16_MAX;
	int64_t x192 = INT64_MIN;
	int64_t t47 = 193272463159640LL;

	t47 = ((x189&x190)|(x191&x192));

	if (t47 != -2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	static volatile int64_t x194 = -679690480181LL;
	static volatile uint64_t x195 = UINT64_MAX;
	uint8_t x196 = UINT8_MAX;
	uint64_t t48 = 35051627328510372LLU;

	t48 = ((x193&x194)|(x195&x196));

	if (t48 != 18446743394019049727LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x200 = 429452128U;
	volatile int64_t t49 = -676LL;

	t49 = ((x197&x198)|(x199&x200));

	if (t49 != 124LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -876;
	volatile int8_t x202 = -28;
	volatile uint8_t x204 = 28U;
	int64_t t50 = 22998233667811LL;

	t50 = ((x201&x202)|(x203&x204));

	if (t50 != -868LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 13LLU;
	uint8_t x206 = 5U;
	volatile uint64_t t51 = 184644868LLU;

	t51 = ((x205&x206)|(x207&x208));

	if (t51 != 15LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -89555794;
	int64_t x210 = 548145LL;
	volatile uint32_t x211 = 20373753U;
	static int64_t t52 = -5110795018LL;

	t52 = ((x209&x210)|(x211&x212));

	if (t52 != 547872LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 3003U;
	volatile uint64_t x214 = 537986LLU;
	uint16_t x215 = 1307U;
	int64_t x216 = INT64_MIN;

	t53 = ((x213&x214)|(x215&x216));

	if (t53 != 386LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 265660155U;
	static int64_t x218 = INT64_MIN;
	uint32_t x219 = UINT32_MAX;

	t54 = ((x217&x218)|(x219&x220));

	if (t54 != 25LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	uint64_t x223 = 3993094001263658LLU;
	static uint64_t t55 = 3407681785260135367LLU;

	t55 = ((x221&x222)|(x223&x224));

	if (t55 != 10LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x227 = INT8_MAX;
	uint8_t x228 = UINT8_MAX;

	t56 = ((x225&x226)|(x227&x228));

	if (t56 != 127U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 470187443;
	uint32_t x230 = 1U;
	int8_t x231 = -1;
	uint64_t x232 = 375190599068948LLU;
	volatile uint64_t t57 = 2LLU;

	t57 = ((x229&x230)|(x231&x232));

	if (t57 != 375190599068949LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x234 = INT8_MAX;
	int16_t x235 = INT16_MAX;
	static int64_t x236 = INT64_MIN;
	volatile int64_t t58 = -815993LL;

	t58 = ((x233&x234)|(x235&x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	static int32_t x238 = -1;
	uint16_t x240 = 249U;
	int64_t t59 = -1LL;

	t59 = ((x237&x238)|(x239&x240));

	if (t59 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x242 = -1685155;
	uint8_t x243 = 46U;
	int16_t x244 = -577;

	t60 = ((x241&x242)|(x243&x244));

	if (t60 != 4293282175U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = 3507U;
	uint8_t x246 = 0U;
	volatile uint32_t x248 = 96758U;
	static uint32_t t61 = 0U;

	t61 = ((x245&x246)|(x247&x248));

	if (t61 != 96386U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	uint32_t x250 = UINT32_MAX;
	int32_t x251 = 14;
	volatile int32_t x252 = INT32_MIN;
	int64_t t62 = -111595807485LL;

	t62 = ((x249&x250)|(x251&x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 3813421282110998LLU;
	int8_t x254 = -1;
	uint64_t x255 = 52174918301350LLU;
	volatile uint16_t x256 = UINT16_MAX;
	uint64_t t63 = 145958896048258LLU;

	t63 = ((x253&x254)|(x255&x256));

	if (t63 != 3813421282148022LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x257 = UINT64_MAX;
	int8_t x258 = INT8_MAX;
	int64_t x259 = INT64_MIN;
	static int16_t x260 = -1;
	static uint64_t t64 = 30629296070803278LLU;

	t64 = ((x257&x258)|(x259&x260));

	if (t64 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 2U;
	int64_t x262 = 30270686219LL;
	int32_t x263 = -1;
	static uint32_t x264 = 90U;
	volatile int64_t t65 = -48188032LL;

	t65 = ((x261&x262)|(x263&x264));

	if (t65 != 90LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	uint16_t x267 = UINT16_MAX;
	int32_t x268 = INT32_MAX;
	int32_t t66 = 7;

	t66 = ((x265&x266)|(x267&x268));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	int64_t x271 = INT64_MIN;
	int64_t t67 = 2263719LL;

	t67 = ((x269&x270)|(x271&x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	int32_t x274 = -6780051;
	uint16_t x275 = UINT16_MAX;
	static volatile uint32_t t68 = 287U;

	t68 = ((x273&x274)|(x275&x276));

	if (t68 != 64511U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = INT16_MIN;
	uint16_t x278 = UINT16_MAX;
	volatile uint32_t x279 = 4U;
	int32_t x280 = INT32_MAX;
	uint32_t t69 = 5U;

	t69 = ((x277&x278)|(x279&x280));

	if (t69 != 32772U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = INT16_MIN;
	uint32_t x282 = 1968503U;
	volatile int64_t t70 = 14605LL;

	t70 = ((x281&x282)|(x283&x284));

	if (t70 != -9223372036852809728LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	static uint32_t x288 = UINT32_MAX;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = ((x285&x286)|(x287&x288));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x291 = INT8_MIN;
	uint64_t x292 = 8LLU;
	volatile uint64_t t72 = 7461LLU;

	t72 = ((x289&x290)|(x291&x292));

	if (t72 != 1679LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 12;
	int32_t x294 = -68382353;
	uint16_t x295 = 28421U;
	static uint8_t x296 = 11U;
	volatile int32_t t73 = 0;

	t73 = ((x293&x294)|(x295&x296));

	if (t73 != 13) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	static volatile uint8_t x298 = UINT8_MAX;
	volatile int16_t x299 = -1;
	uint32_t x300 = 848U;
	int64_t t74 = -24323554788519LL;

	t74 = ((x297&x298)|(x299&x300));

	if (t74 != 848LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MAX;
	int64_t x302 = 546LL;
	uint16_t x303 = 7180U;
	int32_t x304 = 16434080;
	int64_t t75 = -190243191829LL;

	t75 = ((x301&x302)|(x303&x304));

	if (t75 != 34LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = -1LL;
	static volatile int64_t x307 = -1LL;
	int64_t x308 = INT64_MAX;
	static int64_t t76 = -1697070LL;

	t76 = ((x305&x306)|(x307&x308));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = UINT8_MAX;
	int64_t x310 = INT64_MAX;
	static int32_t x311 = INT32_MIN;
	int8_t x312 = 1;
	int64_t t77 = 14654440LL;

	t77 = ((x309&x310)|(x311&x312));

	if (t77 != 255LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	uint16_t x314 = UINT16_MAX;
	volatile int16_t x315 = INT16_MAX;
	volatile int32_t x316 = INT32_MAX;
	volatile int64_t t78 = 86681530383528LL;

	t78 = ((x313&x314)|(x315&x316));

	if (t78 != 65535LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x317 = INT32_MIN;
	static int64_t x318 = INT64_MIN;
	volatile int64_t x319 = 6388960LL;
	uint64_t x320 = 77225878LLU;
	uint64_t t79 = 33979693914LLU;

	t79 = ((x317&x318)|(x319&x320));

	if (t79 != 9223372036854799488LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x324 = INT32_MIN;
	int32_t t80 = 403261;

	t80 = ((x321&x322)|(x323&x324));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x326 = UINT64_MAX;
	static int8_t x327 = -1;
	static int16_t x328 = INT16_MIN;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = ((x325&x326)|(x327&x328));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x329 = -11;
	int32_t x331 = INT32_MAX;
	uint32_t t82 = UINT32_MAX;

	t82 = ((x329&x330)|(x331&x332));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 8653;
	uint32_t x335 = UINT32_MAX;
	uint32_t x336 = 1U;
	uint32_t t83 = 275114U;

	t83 = ((x333&x334)|(x335&x336));

	if (t83 != 8653U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	int8_t x338 = INT8_MIN;
	int32_t x340 = -25;
	int64_t t84 = -1009854LL;

	t84 = ((x337&x338)|(x339&x340));

	if (t84 != -128LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	int32_t x342 = -1;
	static uint32_t x343 = 325841711U;
	volatile int64_t x344 = INT64_MIN;
	static volatile int64_t t85 = -65281LL;

	t85 = ((x341&x342)|(x343&x344));

	if (t85 != 32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	static uint32_t x346 = 9986U;
	uint16_t x348 = 361U;
	volatile uint32_t t86 = 3235681U;

	t86 = ((x345&x346)|(x347&x348));

	if (t86 != 10091U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = -32;
	int64_t x350 = -1LL;
	static volatile int64_t t87 = -161915072212979LL;

	t87 = ((x349&x350)|(x351&x352));

	if (t87 != -32LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MIN;
	volatile int64_t x354 = 11007949LL;
	volatile uint8_t x356 = UINT8_MAX;

	t88 = ((x353&x354)|(x355&x356));

	if (t88 != 161LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MIN;
	int16_t x358 = -1;
	volatile int32_t x359 = -1045;
	static volatile int8_t x360 = -1;
	volatile int32_t t89 = 14;

	t89 = ((x357&x358)|(x359&x360));

	if (t89 != -21) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x362 = UINT64_MAX;
	uint64_t x363 = UINT64_MAX;
	int16_t x364 = 1;

	t90 = ((x361&x362)|(x363&x364));

	if (t90 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = 11;
	volatile int8_t x367 = INT8_MIN;
	int64_t t91 = 678439959849LL;

	t91 = ((x365&x366)|(x367&x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 419032501U;
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = 171;
	volatile uint64_t t92 = 668978605157490670LLU;

	t92 = ((x369&x370)|(x371&x372));

	if (t92 != 419032509LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	int16_t x374 = INT16_MIN;
	int8_t x375 = -1;
	static uint8_t x376 = UINT8_MAX;
	volatile int32_t t93 = 29576;

	t93 = ((x373&x374)|(x375&x376));

	if (t93 != -2147483393) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MAX;
	uint32_t x379 = 275618507U;
	static int64_t t94 = -127904LL;

	t94 = ((x377&x378)|(x379&x380));

	if (t94 != 275618047LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	volatile int64_t x382 = 122501673557210287LL;
	volatile int32_t x383 = 336697069;
	uint16_t x384 = 882U;
	int64_t t95 = 468336LL;

	t95 = ((x381&x382)|(x383&x384));

	if (t95 != 122501673557197408LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 1024791582474LL;
	int16_t x387 = INT16_MAX;
	volatile int64_t x388 = 659501586LL;
	static volatile uint64_t t96 = 4069251926542LLU;

	t96 = ((x385&x386)|(x387&x388));

	if (t96 != 1024791590682LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	volatile uint64_t x390 = 5LLU;
	int16_t x392 = INT16_MIN;
	uint64_t t97 = 8105708675LLU;

	t97 = ((x389&x390)|(x391&x392));

	if (t97 != 18446744073709518853LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 31LLU;
	static int64_t x394 = INT64_MIN;
	static uint32_t x395 = UINT32_MAX;
	uint64_t t98 = 29308239085391LLU;

	t98 = ((x393&x394)|(x395&x396));

	if (t98 != 65535LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	volatile int8_t x399 = 0;
	uint16_t x400 = 20U;

	t99 = ((x397&x398)|(x399&x400));

	if (t99 != -32768) { NG(); } else { ; }
	
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

