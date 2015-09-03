#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x19 = 1U;
static int16_t x20 = INT16_MIN;
volatile uint8_t x26 = UINT8_MAX;
volatile int16_t x37 = -1;
static int16_t x50 = INT16_MIN;
int8_t x53 = INT8_MAX;
int16_t x57 = INT16_MIN;
static int16_t x58 = INT16_MIN;
volatile int16_t x59 = -125;
int32_t x60 = -1;
int64_t x72 = INT64_MIN;
volatile uint32_t t18 = 123U;
static uint64_t x81 = 124LLU;
int8_t x84 = INT8_MIN;
int64_t x85 = -1LL;
static uint8_t x87 = 1U;
int16_t x93 = -1;
int32_t x94 = 0;
int32_t t22 = -16488;
static uint8_t x99 = 51U;
int32_t x101 = INT32_MIN;
int8_t x118 = -1;
static volatile uint16_t x124 = 0U;
volatile int8_t x125 = -3;
uint64_t x131 = 37115LLU;
int32_t x136 = -1;
static volatile uint32_t t32 = 424978U;
int64_t x137 = INT64_MIN;
uint32_t x145 = 719607697U;
static int8_t x148 = INT8_MIN;
int64_t x149 = -1LL;
volatile uint64_t x151 = UINT64_MAX;
uint8_t x154 = UINT8_MAX;
uint8_t x163 = 1U;
volatile int64_t t39 = -1314512214262LL;
uint64_t x167 = 601215987496579LLU;
int8_t x168 = INT8_MIN;
volatile uint64_t t41 = 30930089125699LLU;
static int8_t x177 = -1;
static int16_t x179 = -1;
uint16_t x180 = 7U;
uint64_t x181 = 3613956141451LLU;
static uint32_t x190 = 92859159U;
volatile int32_t x194 = -23;
int64_t x201 = INT64_MIN;
uint32_t x203 = 9462238U;
static int32_t x204 = INT32_MAX;
int32_t x209 = INT32_MIN;
int16_t x210 = INT16_MIN;
static volatile int64_t x217 = INT64_MIN;
int32_t x220 = INT32_MIN;
static volatile uint64_t t53 = 64029LLU;
volatile int16_t x223 = -341;
static volatile int8_t x225 = INT8_MAX;
uint16_t x228 = 290U;
volatile int32_t x231 = -1;
int16_t x233 = -9;
uint8_t x241 = UINT8_MAX;
uint32_t x243 = 14986U;
static uint16_t x245 = UINT16_MAX;
uint64_t x250 = 2673790053993LLU;
uint16_t x254 = UINT16_MAX;
volatile int16_t x263 = -10;
int16_t x266 = -8680;
static int16_t x269 = INT16_MAX;
volatile int32_t x270 = INT32_MAX;
int64_t t66 = 202014581LL;
volatile uint32_t t67 = 23394U;
int64_t t68 = -8517429325319LL;
uint16_t x282 = UINT16_MAX;
uint16_t x287 = 944U;
uint8_t x289 = 2U;
static uint32_t t74 = 437869004U;
uint16_t x305 = UINT16_MAX;
int64_t x306 = INT64_MIN;
uint16_t x310 = 0U;
int16_t x312 = INT16_MIN;
int16_t x314 = -246;
volatile int8_t x315 = INT8_MAX;
static int8_t x317 = INT8_MIN;
int64_t x318 = -30836LL;
volatile int64_t x319 = -1LL;
volatile int8_t x321 = INT8_MIN;
uint8_t x324 = 27U;
volatile int32_t x330 = INT32_MIN;
uint8_t x338 = 41U;
int8_t x341 = -1;
uint32_t x347 = 1429U;
volatile int32_t t85 = 59403;
uint64_t x360 = 160LLU;
volatile uint32_t t88 = 2U;
volatile int64_t x366 = INT64_MAX;
int64_t x375 = 253692701LL;
int8_t x381 = -3;
uint64_t x382 = UINT64_MAX;
static int64_t x390 = INT64_MIN;
int64_t t95 = 39665183091347858LL;
volatile int32_t x397 = INT32_MAX;
int16_t x399 = -1;
volatile uint32_t t97 = 1177954100U;
static uint16_t x403 = 5U;
static int32_t x404 = INT32_MIN;
int16_t x408 = INT16_MIN;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	uint64_t x2 = 19076192539740220LLU;
	uint16_t x3 = 3U;
	uint16_t x4 = UINT16_MAX;
	volatile uint64_t t0 = 39656LLU;

	t0 = ((x1%(x2^x3))^x4);

	if (t0 != 65280LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -19;
	int64_t x6 = INT64_MIN;
	int8_t x7 = INT8_MIN;
	volatile int64_t x8 = -14064805073LL;
	volatile int64_t t1 = -48LL;

	t1 = ((x5%(x6^x7))^x8);

	if (t1 != 14064805058LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 102027400440056477LLU;
	volatile int16_t x10 = -1291;
	uint8_t x11 = 32U;
	int32_t x12 = INT32_MIN;
	volatile uint64_t t2 = 40557LLU;

	t2 = ((x9%(x10^x11))^x12);

	if (t2 != 18344716673826032285LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	uint16_t x14 = 5U;
	uint8_t x15 = UINT8_MAX;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = 1;

	t3 = ((x13%(x14^x15))^x16);

	if (t3 != 65518) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 153LLU;
	uint8_t x18 = 56U;
	uint64_t t4 = 4859LLU;

	t4 = ((x17%(x18^x19))^x20);

	if (t4 != 18446744073709518887LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int32_t x22 = -464494259;
	uint16_t x23 = 729U;
	volatile int8_t x24 = 7;
	int32_t t5 = 8;

	t5 = ((x21%(x22^x23))^x24);

	if (t5 != -289508937) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 7U;
	volatile int8_t x27 = INT8_MAX;
	volatile uint64_t x28 = 820145611616984LLU;
	uint64_t t6 = 45476303569552950LLU;

	t6 = ((x25%(x26^x27))^x28);

	if (t6 != 820145611616991LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 10U;
	static uint8_t x30 = UINT8_MAX;
	static int16_t x31 = INT16_MIN;
	static int16_t x32 = -1;
	volatile int32_t t7 = 106404724;

	t7 = ((x29%(x30^x31))^x32);

	if (t7 != -11) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x38 = -1;
	int16_t x39 = 341;
	uint32_t x40 = 3U;
	uint32_t t8 = 575U;

	t8 = ((x37%(x38^x39))^x40);

	if (t8 != 4294967292U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	int8_t x42 = INT8_MIN;
	int64_t x43 = -1LL;
	static int32_t x44 = 32185300;
	static int64_t t9 = 202824622626096LL;

	t9 = ((x41%(x42^x43))^x44);

	if (t9 != -32185301LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	uint32_t x46 = 2220U;
	uint64_t x47 = UINT64_MAX;
	uint16_t x48 = 5U;
	volatile uint64_t t10 = 8978LLU;

	t10 = ((x45%(x46^x47))^x48);

	if (t10 != 2217LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	volatile int64_t x51 = INT64_MIN;
	static volatile uint16_t x52 = 86U;
	volatile int64_t t11 = -42LL;

	t11 = ((x49%(x50^x51))^x52);

	if (t11 != -87LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x54 = 1U;
	uint16_t x55 = UINT16_MAX;
	volatile uint16_t x56 = UINT16_MAX;
	int32_t t12 = -3;

	t12 = ((x53%(x54^x55))^x56);

	if (t12 != 65408) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t t13 = 193718506;

	t13 = ((x57%(x58^x59))^x60);

	if (t13 != 124) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 106U;
	uint64_t x62 = 932039046LLU;
	volatile int16_t x63 = INT16_MIN;
	volatile int16_t x64 = 10;
	static volatile uint64_t t14 = 330331066924045LLU;

	t14 = ((x61%(x62^x63))^x64);

	if (t14 != 96LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	static int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	uint32_t x68 = 4U;
	volatile uint32_t t15 = 1233380430U;

	t15 = ((x65%(x66^x67))^x68);

	if (t15 != 4294967172U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x69 = UINT64_MAX;
	static uint32_t x70 = UINT32_MAX;
	int16_t x71 = 461;
	volatile uint64_t t16 = 1018LLU;

	t16 = ((x69%(x70^x71))^x72);

	if (t16 != 9223372036854989251LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = INT16_MIN;
	volatile uint32_t x74 = UINT32_MAX;
	int32_t x75 = INT32_MIN;
	int32_t x76 = INT32_MAX;
	uint32_t t17 = 47U;

	t17 = ((x73%(x74^x75))^x76);

	if (t17 != 32766U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x77 = 18U;
	uint32_t x78 = 23U;
	static int32_t x79 = INT32_MIN;
	static int8_t x80 = 36;

	t18 = ((x77%(x78^x79))^x80);

	if (t18 != 54U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = INT16_MIN;
	uint16_t x83 = 3U;
	static volatile uint64_t t19 = 3368150295LLU;

	t19 = ((x81%(x82^x83))^x84);

	if (t19 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x86 = UINT16_MAX;
	static volatile uint64_t x88 = UINT64_MAX;
	uint64_t t20 = 1147335167LLU;

	t20 = ((x85%(x86^x87))^x88);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = UINT64_MAX;
	int64_t x90 = INT64_MAX;
	int32_t x91 = -1;
	int8_t x92 = 1;
	uint64_t t21 = 2810898371359843LLU;

	t21 = ((x89%(x90^x91))^x92);

	if (t21 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x95 = 19U;
	int16_t x96 = INT16_MAX;

	t22 = ((x93%(x94^x95))^x96);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = INT8_MAX;
	int64_t x100 = INT64_MIN;
	volatile int64_t t23 = 6389LL;

	t23 = ((x97%(x98^x99))^x100);

	if (t23 != 9223372036854775748LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x102 = UINT8_MAX;
	uint16_t x103 = 1020U;
	int8_t x104 = -1;
	static volatile int32_t t24 = 1728;

	t24 = ((x101%(x102^x103))^x104);

	if (t24 != 385) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	volatile int32_t x106 = 1557;
	uint8_t x107 = 9U;
	uint16_t x108 = 468U;
	int32_t t25 = -979208;

	t25 = ((x105%(x106^x107))^x108);

	if (t25 != -1052) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x109 = INT64_MIN;
	volatile int8_t x110 = -1;
	int16_t x111 = INT16_MIN;
	static volatile uint64_t x112 = UINT64_MAX;
	volatile uint64_t t26 = 52329761LLU;

	t26 = ((x109%(x110^x111))^x112);

	if (t26 != 7LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = 44;
	static int16_t x114 = 4232;
	int8_t x115 = INT8_MIN;
	int64_t x116 = 11996LL;
	int64_t t27 = 1LL;

	t27 = ((x113%(x114^x115))^x116);

	if (t27 != 12016LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x117 = INT8_MIN;
	volatile uint64_t x119 = 6548737058878724192LLU;
	int8_t x120 = INT8_MIN;
	uint64_t t28 = 169460426682LLU;

	t28 = ((x117%(x118^x119))^x120);

	if (t28 != 11898007014830827617LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MIN;
	int64_t t29 = 164372325631380LL;

	t29 = ((x121%(x122^x123))^x124);

	if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x126 = INT64_MIN;
	volatile int32_t x127 = INT32_MIN;
	static int64_t x128 = 0LL;
	volatile int64_t t30 = -16LL;

	t30 = ((x125%(x126^x127))^x128);

	if (t30 != -3LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	int32_t x130 = INT32_MAX;
	uint64_t x132 = 469105944357LLU;
	uint64_t t31 = 483256854LLU;

	t31 = ((x129%(x130^x131))^x132);

	if (t31 != 470040422045LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x133 = 2U;
	uint32_t x134 = 44880220U;
	static int16_t x135 = INT16_MAX;

	t32 = ((x133%(x134^x135))^x136);

	if (t32 != 4294967293U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x138 = INT16_MAX;
	volatile int32_t x139 = INT32_MAX;
	static uint64_t x140 = 0LLU;
	uint64_t t33 = 64490028LLU;

	t33 = ((x137%(x138^x139))^x140);

	if (t33 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 60U;
	uint8_t x142 = 74U;
	uint32_t x143 = 19U;
	uint8_t x144 = 54U;
	uint32_t t34 = 4302252U;

	t34 = ((x141%(x142^x143))^x144);

	if (t34 != 10U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x146 = 2U;
	static int64_t x147 = INT64_MAX;
	int64_t t35 = -12LL;

	t35 = ((x145%(x146^x147))^x148);

	if (t35 != -719607791LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x150 = UINT8_MAX;
	static uint64_t x152 = UINT64_MAX;
	volatile uint64_t t36 = 16808LLU;

	t36 = ((x149%(x150^x151))^x152);

	if (t36 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x153 = 49596;
	static int64_t x155 = INT64_MIN;
	volatile int32_t x156 = -858642214;
	volatile int64_t t37 = 63320LL;

	t37 = ((x153%(x154^x155))^x156);

	if (t37 != -858592922LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 27U;
	int8_t x158 = INT8_MIN;
	static uint64_t x159 = 98605471645750LLU;
	int32_t x160 = -92444;
	volatile uint64_t t38 = 14667167452866972LLU;

	t38 = ((x157%(x158^x159))^x160);

	if (t38 != 18446744073709459199LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MAX;
	int64_t x162 = -1LL;
	int16_t x164 = -85;

	t39 = ((x161%(x162^x163))^x164);

	if (t39 != -86LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = UINT16_MAX;
	uint64_t x166 = UINT64_MAX;
	uint64_t t40 = 8360682500660173LLU;

	t40 = ((x165%(x166^x167))^x168);

	if (t40 != 18446744073709486207LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = 816120LLU;
	volatile uint64_t x170 = 1936543906958LLU;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = 6U;

	t41 = ((x169%(x170^x171))^x172);

	if (t41 != 816126LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = -1;
	static int8_t x174 = 3;
	uint16_t x175 = UINT16_MAX;
	int64_t x176 = -178652LL;
	int64_t t42 = -35LL;

	t42 = ((x173%(x174^x175))^x176);

	if (t42 != 178651LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x178 = 1470U;
	uint32_t t43 = 90130U;

	t43 = ((x177%(x178^x179))^x180);

	if (t43 != 1465U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	static uint8_t x184 = 0U;
	volatile uint64_t t44 = 50LLU;

	t44 = ((x181%(x182^x183))^x184);

	if (t44 != 3613956141451LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MIN;
	uint8_t x186 = UINT8_MAX;
	uint8_t x187 = 73U;
	int64_t x188 = -1LL;
	volatile int64_t t45 = 60915192943721605LL;

	t45 = ((x185%(x186^x187))^x188);

	if (t45 != 127LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = INT64_MIN;
	static int32_t x191 = INT32_MIN;
	volatile int8_t x192 = -1;
	static volatile int64_t t46 = 180744739467LL;

	t46 = ((x189%(x190^x191))^x192);

	if (t46 != 930591364LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = UINT32_MAX;
	int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	static volatile uint32_t t47 = 46U;

	t47 = ((x193%(x194^x195))^x196);

	if (t47 != 4294967213U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	static int32_t x198 = INT32_MIN;
	uint16_t x199 = 0U;
	int8_t x200 = 1;
	int64_t t48 = -83740243618096LL;

	t48 = ((x197%(x198^x199))^x200);

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x202 = 925919606;
	static int64_t t49 = 5362808632865109LL;

	t49 = ((x201%(x202^x203))^x204);

	if (t49 != -1574732849LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MIN;
	volatile int16_t x207 = INT16_MAX;
	int16_t x208 = INT16_MIN;
	static int64_t t50 = 57401821494117464LL;

	t50 = ((x205%(x206^x207))^x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x211 = INT32_MIN;
	int64_t x212 = INT64_MIN;
	int64_t t51 = 11009569LL;

	t51 = ((x209%(x210^x211))^x212);

	if (t51 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = 37U;
	int16_t x214 = INT16_MIN;
	uint16_t x215 = 58U;
	int64_t x216 = -73345610597LL;
	volatile int64_t t52 = 1840444LL;

	t52 = ((x213%(x214^x215))^x216);

	if (t52 != -73345610562LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x218 = 5LLU;
	int64_t x219 = INT64_MIN;

	t53 = ((x217%(x218^x219))^x220);

	if (t53 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = -27LL;
	int16_t x222 = 1;
	volatile int32_t x224 = INT32_MAX;
	int64_t t54 = -14LL;

	t54 = ((x221%(x222^x223))^x224);

	if (t54 != -2147483622LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x226 = 3808U;
	uint8_t x227 = UINT8_MAX;
	int32_t t55 = 37358;

	t55 = ((x225%(x226^x227))^x228);

	if (t55 != 349) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x229 = INT64_MAX;
	int64_t x230 = INT64_MIN;
	volatile int16_t x232 = INT16_MAX;
	int64_t t56 = 803140359LL;

	t56 = ((x229%(x230^x231))^x232);

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x234 = INT64_MIN;
	uint32_t x235 = 179U;
	int8_t x236 = -1;
	int64_t t57 = -12948565LL;

	t57 = ((x233%(x234^x235))^x236);

	if (t57 != 8LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = -1;
	uint32_t x238 = 640U;
	uint8_t x239 = UINT8_MAX;
	volatile int8_t x240 = -1;
	volatile uint32_t t58 = 749886U;

	t58 = ((x237%(x238^x239))^x240);

	if (t58 != 4294966932U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x242 = INT8_MIN;
	int32_t x244 = 3;
	volatile uint32_t t59 = 143415182U;

	t59 = ((x241%(x242^x243))^x244);

	if (t59 != 252U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x246 = 487U;
	volatile int64_t x247 = INT64_MIN;
	int8_t x248 = 35;
	int64_t t60 = -13461883354248LL;

	t60 = ((x245%(x246^x247))^x248);

	if (t60 != 65500LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x249 = UINT16_MAX;
	uint8_t x251 = 1U;
	int64_t x252 = INT64_MIN;
	volatile uint64_t t61 = 4510LLU;

	t61 = ((x249%(x250^x251))^x252);

	if (t61 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x253 = UINT32_MAX;
	int16_t x255 = INT16_MIN;
	int64_t x256 = INT64_MAX;
	int64_t t62 = -225LL;

	t62 = ((x253%(x254^x255))^x256);

	if (t62 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MAX;
	static int64_t x258 = 2737525224742641314LL;
	uint8_t x259 = 113U;
	static int8_t x260 = -2;
	int64_t t63 = -23LL;

	t63 = ((x257%(x258^x259))^x260);

	if (t63 != -127LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x261 = 313LLU;
	int8_t x262 = INT8_MAX;
	uint8_t x264 = UINT8_MAX;
	volatile uint64_t t64 = 1018768520326760LLU;

	t64 = ((x261%(x262^x263))^x264);

	if (t64 != 454LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = -1LL;
	static int32_t x267 = INT32_MIN;
	uint8_t x268 = 10U;
	volatile int64_t t65 = -27LL;

	t65 = ((x265%(x266^x267))^x268);

	if (t65 != -11LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x271 = INT64_MIN;
	volatile int32_t x272 = 32282429;

	t66 = ((x269%(x270^x271))^x272);

	if (t66 != 32303298LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x273 = INT16_MIN;
	uint32_t x274 = UINT32_MAX;
	static volatile int32_t x275 = INT32_MIN;
	uint16_t x276 = UINT16_MAX;

	t67 = ((x273%(x274^x275))^x276);

	if (t67 != 2147450878U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x277 = INT16_MIN;
	int32_t x278 = -1;
	int64_t x279 = INT64_MIN;
	int16_t x280 = -7000;

	t68 = ((x277%(x278^x279))^x280);

	if (t68 != 25768LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x281 = INT32_MAX;
	static int8_t x283 = -1;
	volatile uint8_t x284 = UINT8_MAX;
	int32_t t69 = -12485;

	t69 = ((x281%(x282^x283))^x284);

	if (t69 != 65280) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = 8U;
	int64_t x286 = INT64_MIN;
	int32_t x288 = INT32_MIN;
	int64_t t70 = 8LL;

	t70 = ((x285%(x286^x287))^x288);

	if (t70 != -2147483640LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x290 = 14;
	uint64_t x291 = 10006LLU;
	int8_t x292 = INT8_MIN;
	volatile uint64_t t71 = 15063378LLU;

	t71 = ((x289%(x290^x291))^x292);

	if (t71 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = 157179;
	uint32_t x294 = UINT32_MAX;
	uint64_t x295 = 15680508104654291LLU;
	int8_t x296 = INT8_MIN;
	volatile uint64_t t72 = 15461977221LLU;

	t72 = ((x293%(x294^x295))^x296);

	if (t72 != 18446744073709394555LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x297 = 69037U;
	uint8_t x298 = 33U;
	volatile uint32_t x299 = UINT32_MAX;
	int8_t x300 = -1;
	uint32_t t73 = 4191470U;

	t73 = ((x297%(x298^x299))^x300);

	if (t73 != 4294898258U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x301 = 420090945U;
	uint16_t x302 = 27U;
	int32_t x303 = -50181669;
	int8_t x304 = INT8_MAX;

	t74 = ((x301%(x302^x303))^x304);

	if (t74 != 420090942U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x307 = UINT16_MAX;
	volatile int16_t x308 = 9;
	int64_t t75 = -1068137248LL;

	t75 = ((x305%(x306^x307))^x308);

	if (t75 != 65526LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x309 = 10U;
	int16_t x311 = 13;
	int32_t t76 = 6906;

	t76 = ((x309%(x310^x311))^x312);

	if (t76 != -32758) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = 937239563U;
	int16_t x316 = INT16_MIN;
	static uint32_t t77 = 18387U;

	t77 = ((x313%(x314^x315))^x316);

	if (t77 != 3357713419U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x320 = 3362U;
	volatile int64_t t78 = 110036577LL;

	t78 = ((x317%(x318^x319))^x320);

	if (t78 != -3422LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x322 = INT64_MAX;
	int32_t x323 = INT32_MIN;
	static volatile int64_t t79 = 650184199727LL;

	t79 = ((x321%(x322^x323))^x324);

	if (t79 != -101LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x329 = UINT16_MAX;
	volatile int8_t x331 = INT8_MAX;
	int16_t x332 = INT16_MAX;
	volatile int32_t t80 = 276244205;

	t80 = ((x329%(x330^x331))^x332);

	if (t80 != 32768) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = INT32_MIN;
	volatile int8_t x334 = INT8_MAX;
	uint32_t x335 = 3465U;
	int16_t x336 = 3;
	volatile uint32_t t81 = 0U;

	t81 = ((x333%(x334^x335))^x336);

	if (t81 != 2863U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x337 = 408097023492LL;
	uint8_t x339 = 10U;
	int16_t x340 = 2;
	volatile int64_t t82 = 4LL;

	t82 = ((x337%(x338^x339))^x340);

	if (t82 != 34LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x342 = INT32_MIN;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = UINT64_MAX;
	static uint64_t t83 = 12309LLU;

	t83 = ((x341%(x342^x343))^x344);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = -241268457;
	uint32_t x348 = 2618429U;
	volatile uint32_t t84 = 202579U;

	t84 = ((x345%(x346^x347))^x348);

	if (t84 != 2150102077U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = -222;
	static int8_t x350 = INT8_MIN;
	volatile int16_t x351 = -4238;
	volatile int16_t x352 = -3;

	t85 = ((x349%(x350^x351))^x352);

	if (t85 != 223) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x353 = -1;
	volatile int32_t x354 = -1;
	int8_t x355 = 27;
	uint16_t x356 = UINT16_MAX;
	static int32_t t86 = 5221;

	t86 = ((x353%(x354^x355))^x356);

	if (t86 != -65536) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = INT16_MAX;
	int32_t x358 = 16766;
	static int16_t x359 = INT16_MIN;
	volatile uint64_t t87 = 69249532436557980LLU;

	t87 = ((x357%(x358^x359))^x360);

	if (t87 != 603LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x361 = 15U;
	uint8_t x362 = UINT8_MAX;
	int16_t x363 = -1;
	uint32_t x364 = UINT32_MAX;

	t88 = ((x361%(x362^x363))^x364);

	if (t88 != 4294967280U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x365 = -1;
	int16_t x367 = INT16_MAX;
	uint32_t x368 = 8939U;
	volatile int64_t t89 = -2347251664665428744LL;

	t89 = ((x365%(x366^x367))^x368);

	if (t89 != -8940LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x369 = -104964696;
	static uint64_t x370 = 569367617732LLU;
	int32_t x371 = INT32_MAX;
	uint32_t x372 = 16U;
	static uint64_t t90 = 749313LLU;

	t90 = ((x369%(x370^x371))^x372);

	if (t90 != 497678940311LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x373 = UINT32_MAX;
	uint8_t x374 = UINT8_MAX;
	int8_t x376 = INT8_MIN;
	int64_t t91 = -641904LL;

	t91 = ((x373%(x374^x375))^x376);

	if (t91 != -235880865LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = INT16_MIN;
	uint8_t x378 = 14U;
	uint64_t x379 = UINT64_MAX;
	int16_t x380 = INT16_MAX;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = ((x377%(x378^x379))^x380);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x383 = INT32_MIN;
	volatile uint8_t x384 = 27U;
	uint64_t t93 = 9915LLU;

	t93 = ((x381%(x382^x383))^x384);

	if (t93 != 26LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x385 = UINT64_MAX;
	volatile uint32_t x386 = 1903555845U;
	int16_t x387 = INT16_MIN;
	uint32_t x388 = 745072779U;
	volatile uint64_t t94 = 327851096814754LLU;

	t94 = ((x385%(x386^x387))^x388);

	if (t94 != 612440071LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x389 = INT16_MAX;
	int32_t x391 = -1;
	int8_t x392 = 27;

	t95 = ((x389%(x390^x391))^x392);

	if (t95 != 32740LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x393 = -18342LL;
	static volatile int8_t x394 = 1;
	uint16_t x395 = UINT16_MAX;
	int16_t x396 = INT16_MIN;
	volatile int64_t t96 = -184958786965319LL;

	t96 = ((x393%(x394^x395))^x396);

	if (t96 != 14426LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x398 = -17;
	static uint32_t x400 = UINT32_MAX;

	t97 = ((x397%(x398^x399))^x400);

	if (t97 != 4294967280U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x401 = UINT64_MAX;
	int8_t x402 = INT8_MAX;
	uint64_t t98 = 188648580315086710LLU;

	t98 = ((x401%(x402^x403))^x404);

	if (t98 != 18446744071562067983LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = 8U;
	volatile int32_t x406 = 0;
	int64_t x407 = INT64_MAX;
	volatile int64_t t99 = -6LL;

	t99 = ((x405%(x406^x407))^x408);

	if (t99 != -32760LL) { NG(); } else { ; }
	
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

