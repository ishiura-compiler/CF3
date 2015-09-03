#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = 269661U;
static volatile int64_t x11 = INT64_MAX;
volatile int64_t t2 = 69679917029201219LL;
int16_t x13 = INT16_MIN;
volatile int32_t t4 = 491604;
int16_t x21 = INT16_MIN;
int8_t x23 = -1;
int64_t x30 = -1LL;
static int64_t x34 = -10864580892LL;
static int16_t x39 = INT16_MIN;
int8_t x41 = -4;
static uint64_t t12 = 220853692938LLU;
int64_t t13 = -1779719821861LL;
int32_t x65 = -1;
uint8_t x66 = 1U;
uint32_t t17 = UINT32_MAX;
volatile int16_t x73 = INT16_MAX;
int64_t x80 = 4082068994107014LL;
static volatile uint64_t x86 = 9LLU;
volatile uint64_t t21 = 50588365366LLU;
int64_t x89 = INT64_MAX;
uint64_t x90 = UINT64_MAX;
static volatile int16_t x91 = INT16_MIN;
volatile uint64_t t22 = 825432LLU;
int8_t x93 = INT8_MAX;
volatile uint8_t x95 = 74U;
int32_t x96 = -1;
int32_t x100 = INT32_MAX;
static int64_t x102 = INT64_MIN;
volatile int32_t t26 = 0;
int16_t x110 = -1;
int64_t x111 = INT64_MIN;
uint64_t t28 = 7LLU;
int16_t x124 = INT16_MIN;
volatile uint16_t x126 = 6823U;
int32_t x132 = INT32_MAX;
static volatile uint32_t x135 = 811524U;
uint64_t x144 = 158157176443365079LLU;
volatile int64_t t36 = 502632581059925333LL;
int64_t x151 = INT64_MAX;
static uint16_t x152 = 4U;
volatile int64_t t37 = -783LL;
static volatile int16_t x155 = -1810;
static volatile uint64_t t39 = UINT64_MAX;
uint8_t x161 = 40U;
volatile int32_t t40 = -1010620308;
volatile uint32_t t41 = 184U;
int32_t x176 = -12393;
volatile int64_t t43 = 14975LL;
int16_t x180 = INT16_MIN;
int8_t x190 = 0;
uint64_t t49 = 36LLU;
static volatile uint64_t t52 = 1383364083179602LLU;
uint16_t x213 = 27385U;
int16_t x215 = INT16_MIN;
static int8_t x216 = -1;
int8_t x230 = -1;
int8_t x231 = INT8_MAX;
static int8_t x240 = INT8_MAX;
uint64_t x241 = UINT64_MAX;
static int64_t x243 = 40350366208356336LL;
static uint16_t x245 = 6755U;
static int8_t x249 = INT8_MIN;
int16_t x250 = INT16_MIN;
volatile int32_t t62 = -1848662;
int16_t x258 = INT16_MIN;
volatile int64_t t68 = 5795756LL;
static volatile uint64_t x277 = UINT64_MAX;
uint8_t x279 = UINT8_MAX;
int16_t x281 = -5;
int8_t x284 = INT8_MIN;
int64_t x288 = INT64_MAX;
volatile uint64_t x298 = 28348208948LLU;
volatile int64_t x299 = -137029921741LL;
static volatile int32_t t75 = 3;
uint8_t x308 = 12U;
volatile uint64_t t76 = 911847760074823793LLU;
static int64_t x311 = INT64_MAX;
volatile int8_t x312 = INT8_MIN;
static int8_t x325 = -1;
int64_t t82 = -1422093985LL;
uint8_t x335 = UINT8_MAX;
uint64_t t84 = 45839467894564LLU;
volatile int8_t x347 = 3;
uint64_t x348 = 2097056040534629LLU;
int32_t x349 = 1008035;
static int8_t x357 = INT8_MIN;
int16_t x364 = -1;
int8_t x366 = -20;
int64_t x367 = -142912631462LL;
int32_t x369 = INT32_MIN;
volatile uint32_t x372 = 42956539U;
volatile int64_t x384 = INT64_MAX;
volatile uint64_t t95 = 6726570931105000994LLU;
int16_t x388 = 567;
int32_t t96 = INT32_MAX;


void f0(void) {
	int64_t x1 = 1556811LL;
	static volatile int32_t x2 = INT32_MAX;
	volatile int8_t x3 = -2;
	int64_t t0 = -2193033224418689LL;

	t0 = (x1|(x2^(x3^x4)));

	if (t0 != 2149047647LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int16_t x6 = 1018;
	static uint16_t x7 = UINT16_MAX;
	int32_t x8 = INT32_MIN;
	uint32_t t1 = UINT32_MAX;

	t1 = (x5|(x6^(x7^x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int64_t x10 = 2226852134780032LL;
	static int8_t x12 = -1;

	t2 = (x9|(x10^(x11^x12)));

	if (t2 != -9221145184358629377LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -178742165975810167LL;
	int32_t x15 = -1;
	volatile int32_t x16 = -1;
	int64_t t3 = 4073641LL;

	t3 = (x13|(x14^(x15^x16)));

	if (t3 != -16503LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int32_t x18 = -1595;
	int32_t x19 = -11;
	int32_t x20 = -127933621;

	t4 = (x17|(x18^(x19^x20)));

	if (t4 != -127933057) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = UINT8_MAX;
	static int32_t x24 = -753269;
	int32_t t5 = 16769740;

	t5 = (x21|(x22^(x23^x24)));

	if (t5 != -373) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 5786;
	int16_t x26 = INT16_MAX;
	volatile int32_t x27 = 211;
	uint32_t x28 = 2018915067U;
	volatile uint32_t t6 = 0U;

	t6 = (x25|(x26^(x27^x28)));

	if (t6 != 2018926559U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	volatile int64_t x31 = -1LL;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = -3371456528LL;

	t7 = (x29|(x30^(x31^x32)));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	int16_t x35 = INT16_MAX;
	static int8_t x36 = -1;
	int64_t t8 = 21637110242290LL;

	t8 = (x33|(x34^(x35^x36)));

	if (t8 != 10864623615LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 1553U;
	int64_t x38 = -1LL;
	int8_t x40 = -1;
	static int64_t t9 = 2087432340LL;

	t9 = (x37|(x38^(x39^x40)));

	if (t9 != -31215LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MAX;
	int8_t x43 = -1;
	int8_t x44 = INT8_MAX;
	int32_t t10 = -264549970;

	t10 = (x41|(x42^(x43^x44)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 119U;
	int64_t x46 = INT64_MIN;
	volatile uint16_t x47 = 141U;
	int64_t x48 = -1LL;
	static int64_t t11 = 1LL;

	t11 = (x45|(x46^(x47^x48)));

	if (t11 != 9223372036854775671LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = UINT16_MAX;
	volatile uint64_t x50 = UINT64_MAX;
	volatile int32_t x51 = INT32_MIN;
	volatile uint16_t x52 = 776U;

	t12 = (x49|(x50^(x51^x52)));

	if (t12 != 2147483647LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 39;
	int64_t x54 = 4084716LL;
	volatile int64_t x55 = -1LL;
	int64_t x56 = 1LL;

	t13 = (x53|(x54^(x55^x56)));

	if (t13 != -4084681LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	static uint16_t x58 = 8181U;
	static uint32_t x59 = 77523959U;
	int64_t x60 = INT64_MAX;
	int64_t t14 = -9805LL;

	t14 = (x57|(x58^(x59^x60)));

	if (t14 != -77526019LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -1;
	uint16_t x62 = 1617U;
	int16_t x63 = INT16_MAX;
	int16_t x64 = INT16_MAX;
	int32_t t15 = 2425;

	t15 = (x61|(x62^(x63^x64)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x67 = -1;
	static int64_t x68 = INT64_MAX;
	int64_t t16 = 2102550172282301397LL;

	t16 = (x65|(x66^(x67^x68)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x70 = INT8_MAX;
	int16_t x71 = INT16_MIN;
	static int16_t x72 = INT16_MAX;

	t17 = (x69|(x70^(x71^x72)));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x74 = 3508701U;
	static int16_t x75 = -236;
	static volatile int64_t x76 = INT64_MIN;
	volatile int64_t t18 = 874LL;

	t18 = (x73|(x74^(x75^x76)));

	if (t18 != 9223372036851269631LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -25;
	uint64_t x78 = 52LLU;
	int64_t x79 = INT64_MIN;
	volatile uint64_t t19 = 907904902LLU;

	t19 = (x77|(x78^(x79^x80)));

	if (t19 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	volatile int16_t x82 = -1;
	uint64_t x83 = 1545646310774303103LLU;
	volatile int8_t x84 = INT8_MIN;
	uint64_t t20 = 772941499LLU;

	t20 = (x81|(x82^(x83^x84)));

	if (t20 != 18446744073274943744LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -870;
	int32_t x87 = INT32_MIN;
	uint16_t x88 = 12783U;

	t21 = (x85|(x86^(x87^x88)));

	if (t21 != 18446744073709551102LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x92 = 4U;

	t22 = (x89|(x90^(x91^x92)));

	if (t22 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MAX;
	int32_t t23 = -44442;

	t23 = (x93|(x94^(x95^x96)));

	if (t23 != -2147483521) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	int8_t x98 = -1;
	static int16_t x99 = -847;
	volatile int32_t t24 = -372012143;

	t24 = (x97|(x98^(x99^x100)));

	if (t24 != 2147482879) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = -1LL;
	int64_t x103 = 8423431357706552LL;
	static volatile int64_t x104 = -81763LL;
	volatile int64_t t25 = -241004LL;

	t25 = (x101|(x102^(x103^x104)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 5;
	uint16_t x106 = 1918U;
	static int16_t x107 = -367;
	int8_t x108 = 5;

	t26 = (x105|(x106^(x107^x108)));

	if (t26 != -1553) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	static int8_t x112 = 23;
	static int64_t t27 = 3660832296413LL;

	t27 = (x109|(x110^(x111^x112)));

	if (t27 != -24LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 2181540460972034193LLU;
	int16_t x114 = INT16_MAX;
	int8_t x115 = 10;
	static volatile uint16_t x116 = 28U;

	t28 = (x113|(x114^(x115^x116)));

	if (t28 != 2181540460972048377LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 132082223705580550LL;
	uint8_t x118 = 21U;
	int16_t x119 = 1192;
	int8_t x120 = 1;
	int64_t t29 = 251755LL;

	t29 = (x117|(x118^(x119^x120)));

	if (t29 != 132082223705580734LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = 16182423;
	int32_t x122 = INT32_MIN;
	static uint32_t x123 = UINT32_MAX;
	volatile uint32_t t30 = 2144620329U;

	t30 = (x121|(x122^(x123^x124)));

	if (t30 != 2163671039U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 7U;
	int16_t x127 = -1;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = -1201;

	t31 = (x125|(x126^(x127^x128)));

	if (t31 != 25951) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 1;
	int64_t x130 = -1LL;
	int64_t x131 = -1LL;
	int64_t t32 = 69LL;

	t32 = (x129|(x130^(x131^x132)));

	if (t32 != 2147483647LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	volatile int8_t x136 = INT8_MAX;
	volatile uint32_t t33 = 5U;

	t33 = (x133|(x134^(x135^x136)));

	if (t33 != 2148295291U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -108;
	volatile int64_t x138 = INT64_MIN;
	int16_t x139 = INT16_MIN;
	int8_t x140 = INT8_MIN;
	int64_t t34 = 171118997753955LL;

	t34 = (x137|(x138^(x139^x140)));

	if (t34 != -108LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -4867;
	volatile int64_t x142 = INT64_MIN;
	static int64_t x143 = -7207LL;
	uint64_t t35 = 1478286620LLU;

	t35 = (x141|(x142^(x143^x144)));

	if (t35 != 18446744073709547007LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -4171;
	volatile uint16_t x146 = 3U;
	volatile int64_t x147 = INT64_MAX;
	int16_t x148 = 12622;

	t36 = (x145|(x146^(x147^x148)));

	if (t36 != -4169LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	volatile int64_t x150 = -1LL;

	t37 = (x149|(x150^(x151^x152)));

	if (t37 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	volatile int16_t x154 = 75;
	uint32_t x156 = 1017U;
	uint32_t t38 = 2514U;

	t38 = (x153|(x154^(x155^x156)));

	if (t38 != 4294967260U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = UINT64_MAX;
	static uint16_t x158 = 3U;
	volatile int16_t x159 = INT16_MAX;
	uint64_t x160 = UINT64_MAX;

	t39 = (x157|(x158^(x159^x160)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x162 = INT16_MAX;
	volatile int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MIN;

	t40 = (x161|(x162^(x163^x164)));

	if (t40 != 2147451007) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 0U;
	static int16_t x166 = 0;
	int8_t x167 = 1;
	uint32_t x168 = UINT32_MAX;

	t41 = (x165|(x166^(x167^x168)));

	if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = -1;
	int32_t x170 = -1;
	uint8_t x171 = UINT8_MAX;
	int64_t x172 = INT64_MAX;
	int64_t t42 = 0LL;

	t42 = (x169|(x170^(x171^x172)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	int64_t x174 = INT64_MIN;
	int16_t x175 = -15037;

	t43 = (x173|(x174^(x175^x176)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 0;
	volatile int64_t x178 = -4714LL;
	volatile int32_t x179 = INT32_MIN;
	int64_t t44 = -10652411LL;

	t44 = (x177|(x178^(x179^x180)));

	if (t44 != -2147455594LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	volatile int16_t x182 = INT16_MIN;
	uint16_t x183 = 3U;
	int64_t x184 = -984161LL;
	int64_t t45 = -80191763917442658LL;

	t45 = (x181|(x182^(x183^x184)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int64_t x186 = INT64_MIN;
	int8_t x187 = -1;
	int16_t x188 = INT16_MIN;
	int64_t t46 = 699622646841706LL;

	t46 = (x185|(x186^(x187^x188)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 4;
	static int8_t x191 = -1;
	static int32_t x192 = INT32_MAX;
	volatile int32_t t47 = -1;

	t47 = (x189|(x190^(x191^x192)));

	if (t47 != -2147483644) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 127U;
	volatile uint64_t x194 = 28509423LLU;
	int8_t x195 = INT8_MIN;
	int16_t x196 = INT16_MIN;
	uint64_t t48 = 7LLU;

	t48 = (x193|(x194^(x195^x196)));

	if (t48 != 28539775LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 16599006333278675LLU;
	uint8_t x198 = UINT8_MAX;
	uint64_t x199 = 102961965314997LLU;
	uint64_t x200 = UINT64_MAX;

	t49 = (x197|(x198^(x199^x200)));

	if (t49 != 18446738573412523511LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -3097381;
	int8_t x202 = -1;
	int8_t x203 = INT8_MIN;
	static int32_t x204 = -1;
	volatile int32_t t50 = -212;

	t50 = (x201|(x202^(x203^x204)));

	if (t50 != -37) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MAX;
	volatile int64_t x206 = INT64_MIN;
	uint32_t x207 = 1761862873U;
	static int32_t x208 = INT32_MIN;
	static int64_t t51 = 7794016707476LL;

	t51 = (x205|(x206^(x207^x208)));

	if (t51 != -9223372032945429249LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 16415972;
	volatile uint64_t x210 = 5107973LLU;
	int32_t x211 = -299898;
	int16_t x212 = 1204;

	t52 = (x209|(x210^(x211^x212)));

	if (t52 != 18446744073709485559LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = 64;
	volatile int32_t t53 = -820;

	t53 = (x213|(x214^(x215^x216)));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 7LLU;
	volatile int16_t x218 = -1;
	uint8_t x219 = 1U;
	uint8_t x220 = 0U;
	uint64_t t54 = UINT64_MAX;

	t54 = (x217|(x218^(x219^x220)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = -1;
	static int8_t x223 = INT8_MIN;
	volatile int32_t x224 = -254439;
	volatile int32_t t55 = 0;

	t55 = (x221|(x222^(x223^x224)));

	if (t55 != -24986) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 137863U;
	int8_t x226 = -1;
	static uint16_t x227 = 1669U;
	uint8_t x228 = 3U;
	uint32_t t56 = 8U;

	t56 = (x225|(x226^(x227^x228)));

	if (t56 != 4294966271U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	int16_t x232 = -1;
	int32_t t57 = 9;

	t57 = (x229|(x230^(x231^x232)));

	if (t57 != -32641) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 14U;
	int32_t x234 = -1;
	int64_t x235 = -2457388LL;
	uint16_t x236 = 99U;
	volatile int64_t t58 = 128420113662965618LL;

	t58 = (x233|(x234^(x235^x236)));

	if (t58 != 2457422LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 27311;
	int64_t x238 = 2982492LL;
	int8_t x239 = -1;
	int64_t t59 = 194510520LL;

	t59 = (x237|(x238^(x239^x240)));

	if (t59 != -2981889LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = INT16_MIN;
	int32_t x244 = INT32_MIN;
	static volatile uint64_t t60 = UINT64_MAX;

	t60 = (x241|(x242^(x243^x244)));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = -1;
	static uint64_t x247 = 63720962LLU;
	static volatile uint8_t x248 = UINT8_MAX;
	volatile uint64_t t61 = 498777932509225LLU;

	t61 = (x245|(x246^(x247^x248)));

	if (t61 != 18446744073645833059LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x251 = 3U;
	uint8_t x252 = 1U;

	t62 = (x249|(x250^(x251^x252)));

	if (t62 != -126) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	int64_t x254 = 39720LL;
	static int8_t x255 = 1;
	volatile uint8_t x256 = UINT8_MAX;
	static volatile int64_t t63 = -987007LL;

	t63 = (x253|(x254^(x255^x256)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 92U;
	int32_t x259 = -1;
	static int8_t x260 = INT8_MAX;
	int32_t t64 = 382763;

	t64 = (x257|(x258^(x259^x260)));

	if (t64 != 32732) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MAX;
	volatile uint64_t x262 = 5399811106191LLU;
	uint64_t x263 = UINT64_MAX;
	volatile int8_t x264 = -1;
	static volatile uint64_t t65 = 5119456LLU;

	t65 = (x261|(x262^(x263^x264)));

	if (t65 != 5400921374719LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	int32_t x266 = -15036;
	static int16_t x267 = -1;
	volatile int32_t x268 = INT32_MIN;
	uint32_t t66 = UINT32_MAX;

	t66 = (x265|(x266^(x267^x268)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x269 = INT16_MIN;
	uint16_t x270 = 48U;
	int8_t x271 = -22;
	volatile uint16_t x272 = UINT16_MAX;
	int32_t t67 = 221;

	t67 = (x269|(x270^(x271^x272)));

	if (t67 != -32731) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int64_t x274 = -1LL;
	int16_t x275 = INT16_MIN;
	uint16_t x276 = 30938U;

	t68 = (x273|(x274^(x275^x276)));

	if (t68 != -30939LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = 2978U;
	static int64_t x280 = -3LL;
	uint64_t t69 = UINT64_MAX;

	t69 = (x277|(x278^(x279^x280)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x282 = INT64_MIN;
	static volatile int32_t x283 = INT32_MAX;
	volatile int64_t t70 = 6427LL;

	t70 = (x281|(x282^(x283^x284)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MIN;
	volatile uint8_t x286 = 0U;
	int32_t x287 = INT32_MIN;
	int64_t t71 = -12539263651760LL;

	t71 = (x285|(x286^(x287^x288)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -33;
	int8_t x290 = 9;
	uint16_t x291 = 155U;
	uint16_t x292 = 28U;
	int32_t t72 = -477;

	t72 = (x289|(x290^(x291^x292)));

	if (t72 != -33) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	static int32_t x294 = -5499867;
	uint64_t x295 = UINT64_MAX;
	int16_t x296 = INT16_MIN;
	uint64_t t73 = UINT64_MAX;

	t73 = (x293|(x294^(x295^x296)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MIN;
	static volatile int64_t x300 = INT64_MIN;
	static volatile uint64_t t74 = 58989146499097LLU;

	t74 = (x297|(x298^(x299^x300)));

	if (t74 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	int16_t x302 = INT16_MAX;
	volatile uint8_t x303 = UINT8_MAX;
	static int8_t x304 = INT8_MIN;

	t75 = (x301|(x302^(x303^x304)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 16;
	volatile uint16_t x306 = 965U;
	uint64_t x307 = 343616936333725LLU;

	t76 = (x305|(x306^(x307^x308)));

	if (t76 != 343616936333908LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	static int16_t x310 = -1;
	int64_t t77 = 14629460557744238LL;

	t77 = (x309|(x310^(x311^x312)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = INT32_MIN;
	volatile int16_t x314 = INT16_MAX;
	static volatile int64_t x315 = INT64_MIN;
	static volatile int16_t x316 = -9;
	int64_t t78 = 128971168LL;

	t78 = (x313|(x314^(x315^x316)));

	if (t78 != -32760LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	static int16_t x318 = 330;
	uint16_t x319 = 102U;
	int16_t x320 = INT16_MIN;
	static int32_t t79 = 0;

	t79 = (x317|(x318^(x319^x320)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -3655;
	uint64_t x322 = 183863324LLU;
	int64_t x323 = 3384683637028444675LL;
	int32_t x324 = INT32_MIN;
	volatile uint64_t t80 = 1LLU;

	t80 = (x321|(x322^(x323^x324)));

	if (t80 != 18446744073709548479LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = 123558;
	int16_t x327 = 6555;
	int8_t x328 = -1;
	int32_t t81 = 88669;

	t81 = (x325|(x326^(x327^x328)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = -1LL;
	int32_t x330 = INT32_MIN;
	int32_t x331 = -1;
	static int32_t x332 = INT32_MAX;

	t82 = (x329|(x330^(x331^x332)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x333 = 252;
	int16_t x334 = -1;
	static volatile int16_t x336 = INT16_MAX;
	static volatile int32_t t83 = -872874;

	t83 = (x333|(x334^(x335^x336)));

	if (t83 != -32513) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x337 = INT32_MIN;
	uint64_t x338 = UINT64_MAX;
	volatile uint32_t x339 = 5316U;
	volatile int64_t x340 = INT64_MAX;

	t84 = (x337|(x338^(x339^x340)));

	if (t84 != 18446744071562073284LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MIN;
	int32_t x343 = 1331962;
	int32_t x344 = INT32_MAX;
	volatile int64_t t85 = -6203LL;

	t85 = (x341|(x342^(x343^x344)));

	if (t85 != -2146151803LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = INT16_MAX;
	int32_t x346 = INT32_MIN;
	volatile uint64_t t86 = 11LLU;

	t86 = (x345|(x346^(x347^x348)));

	if (t86 != 18444647019023630335LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x350 = 9U;
	uint64_t x351 = 1480995674LLU;
	int32_t x352 = -3;
	static uint64_t t87 = 13311830LLU;

	t87 = (x349|(x350^(x351^x352)));

	if (t87 != 18446744072228957615LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = -20285673950840LL;
	uint64_t x354 = UINT64_MAX;
	uint32_t x355 = 106813U;
	int16_t x356 = -228;
	uint64_t t88 = 4451LLU;

	t88 = (x353|(x354^(x355^x356)));

	if (t88 != 18446744073166238174LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = 15763568151913LL;
	static int32_t x359 = -11;
	static volatile int64_t x360 = -1LL;
	int64_t t89 = 279148304799715LL;

	t89 = (x357|(x358^(x359^x360)));

	if (t89 != -29LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 25U;
	static int32_t x362 = -623518109;
	int64_t x363 = INT64_MIN;
	volatile int64_t t90 = 2441560895622082LL;

	t90 = (x361|(x362^(x363^x364)));

	if (t90 != -9223372036231257699LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = UINT32_MAX;
	uint16_t x368 = 1586U;
	volatile int64_t t91 = -1LL;

	t91 = (x365|(x366^(x367^x368)));

	if (t91 != 146028888063LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x370 = 54U;
	volatile int16_t x371 = INT16_MIN;
	volatile uint32_t t92 = 0U;

	t92 = (x369|(x370^(x371^x372)));

	if (t92 != 4252038861U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = -1;
	int64_t x374 = 30LL;
	int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MIN;
	int64_t t93 = -178600LL;

	t93 = (x373|(x374^(x375^x376)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = -1373606LL;
	uint8_t x378 = 44U;
	static uint8_t x379 = 110U;
	static int16_t x380 = INT16_MAX;
	static volatile int64_t t94 = 1028745394823722LL;

	t94 = (x377|(x378^(x379^x380)));

	if (t94 != -1343489LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = -2347402;
	static int64_t x382 = INT64_MIN;
	uint64_t x383 = UINT64_MAX;

	t95 = (x381|(x382^(x383^x384)));

	if (t95 != 18446744073707204214LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	int16_t x386 = 62;
	static uint8_t x387 = UINT8_MAX;

	t96 = (x385|(x386^(x387^x388)));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x389 = 218426120813LLU;
	int32_t x390 = -1;
	uint8_t x391 = 14U;
	int8_t x392 = -1;
	volatile uint64_t t97 = 25344703LLU;

	t97 = (x389|(x390^(x391^x392)));

	if (t97 != 218426120815LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 17382U;
	static uint32_t x394 = 15834U;
	volatile int32_t x395 = -568530062;
	static uint16_t x396 = 3U;
	uint32_t t98 = 489U;

	t98 = (x393|(x394^(x395^x396)));

	if (t98 != 3726432239U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	int16_t x398 = INT16_MAX;
	uint32_t x399 = 1430U;
	static uint8_t x400 = 12U;
	volatile uint32_t t99 = 3659U;

	t99 = (x397|(x398^(x399^x400)));

	if (t99 != 32767U) { NG(); } else { ; }
	
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

