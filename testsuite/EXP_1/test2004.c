#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
int16_t x6 = INT16_MIN;
volatile uint64_t x14 = 1319188667654392547LLU;
uint64_t t3 = 32032980LLU;
volatile int64_t x17 = INT64_MAX;
uint8_t x19 = 35U;
int8_t x21 = INT8_MIN;
int64_t x34 = 361099279748819LL;
int64_t t8 = 962392337398405788LL;
uint16_t x38 = UINT16_MAX;
static uint64_t x39 = 14716913336526261LLU;
int16_t x40 = INT16_MIN;
uint16_t x41 = 2278U;
volatile int64_t x42 = -1LL;
static volatile int8_t x44 = INT8_MIN;
static uint16_t x46 = 5015U;
int32_t x51 = INT32_MIN;
uint32_t t13 = 11815U;
uint32_t x60 = 272186497U;
volatile int8_t x61 = -1;
volatile int16_t x66 = INT16_MIN;
int64_t x81 = INT64_MIN;
static int8_t x84 = -1;
static int8_t x93 = -1;
static uint64_t t23 = 9755551114LLU;
uint64_t x97 = UINT64_MAX;
static uint16_t x98 = 11624U;
int8_t x107 = INT8_MAX;
uint64_t x108 = 2134339327284LLU;
uint64_t t26 = 5552662486305858355LLU;
volatile uint8_t x116 = 0U;
static int16_t x118 = INT16_MIN;
int16_t x119 = INT16_MAX;
int8_t x120 = INT8_MIN;
int8_t x144 = INT8_MIN;
uint8_t x148 = 1U;
int64_t x153 = 1966LL;
volatile uint64_t x154 = 58315303LLU;
int16_t x162 = 180;
volatile int64_t t39 = -2281259928LL;
static uint16_t x175 = 15U;
int16_t x177 = INT16_MIN;
static int64_t x182 = -4412779035101385242LL;
int32_t x187 = 0;
volatile uint32_t t44 = 361U;
uint8_t x193 = 58U;
int32_t x198 = INT32_MAX;
volatile uint32_t x201 = 524284840U;
int32_t x204 = -1;
static int64_t x205 = INT64_MIN;
int64_t x212 = INT64_MAX;
volatile uint16_t x216 = UINT16_MAX;
uint8_t x235 = UINT8_MAX;
int64_t x236 = -1473876LL;
int16_t x237 = INT16_MAX;
static uint8_t x238 = UINT8_MAX;
uint8_t x242 = 1U;
int8_t x247 = INT8_MAX;
int32_t x248 = -30651;
int8_t x249 = -1;
static uint8_t x252 = 3U;
int32_t x262 = INT32_MIN;
static volatile int16_t x263 = -1;
int64_t t65 = 5015408LL;
static int16_t x279 = INT16_MIN;
int64_t x280 = INT64_MIN;
static volatile uint64_t t66 = 2254838456956803519LLU;
static int64_t x286 = -7LL;
static uint8_t x287 = 58U;
volatile uint16_t x288 = 5889U;
int32_t x309 = INT32_MIN;
uint64_t t74 = 49105410776556589LLU;
static volatile int64_t x326 = -11759416867828LL;
int16_t x329 = INT16_MAX;
static int64_t t78 = -6239LL;
uint32_t x339 = 52756593U;
uint64_t x345 = UINT64_MAX;
int16_t x346 = INT16_MIN;
volatile uint16_t x359 = UINT16_MAX;
uint64_t x360 = UINT64_MAX;
int16_t x363 = INT16_MAX;
static volatile int64_t t87 = -44422779255577LL;
static uint32_t x382 = 8805U;
volatile int16_t x383 = -47;
int64_t t88 = 100590684496535LL;
uint8_t x393 = UINT8_MAX;
uint32_t t91 = 1026284739U;
int32_t x409 = INT32_MIN;
volatile uint64_t t96 = 143009859816256371LLU;
volatile uint8_t x429 = 16U;
volatile uint32_t t99 = 13214521U;


void f0(void) {
	int64_t x2 = INT64_MIN;
	volatile int16_t x3 = -1;
	static uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 2089882338055761680LLU;

	t0 = (((x1|x2)|x3)-x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	int64_t x7 = -1LL;
	uint32_t x8 = UINT32_MAX;
	int64_t t1 = 66363LL;

	t1 = (((x5|x6)|x7)-x8);

	if (t1 != -4294967296LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 0U;
	int64_t x10 = -1LL;
	volatile uint64_t x11 = UINT64_MAX;
	volatile int16_t x12 = INT16_MAX;
	volatile uint64_t t2 = 43451249571822696LLU;

	t2 = (((x9|x10)|x11)-x12);

	if (t2 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	uint8_t x15 = 3U;
	uint8_t x16 = UINT8_MAX;

	t3 = (((x13|x14)|x15)-x16);

	if (t3 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -5;
	uint32_t x20 = 2785U;
	int64_t t4 = 0LL;

	t4 = (((x17|x18)|x19)-x20);

	if (t4 != -2786LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x22 = INT32_MIN;
	int32_t x23 = INT32_MIN;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 1095878;

	t5 = (((x21|x22)|x23)-x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 1;
	volatile uint8_t x26 = 4U;
	int16_t x27 = INT16_MIN;
	uint16_t x28 = 56U;
	int32_t t6 = 12363786;

	t6 = (((x25|x26)|x27)-x28);

	if (t6 != -32819) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	volatile int64_t x30 = INT64_MAX;
	static volatile int8_t x31 = INT8_MAX;
	uint64_t x32 = 43280LLU;
	uint64_t t7 = 166LLU;

	t7 = (((x29|x30)|x31)-x32);

	if (t7 != 9223372036854732527LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = INT8_MIN;
	int16_t x35 = 1;
	volatile uint32_t x36 = 10U;

	t8 = (((x33|x34)|x35)-x36);

	if (t8 != -55LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 7744U;
	static uint64_t t9 = 6526228893972256LLU;

	t9 = (((x37|x38)|x39)-x40);

	if (t9 != 14716913336614911LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x43 = -1;
	int64_t t10 = 4330019222979449LL;

	t10 = (((x41|x42)|x43)-x44);

	if (t10 != 127LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 12LL;
	static int16_t x47 = INT16_MIN;
	uint16_t x48 = UINT16_MAX;
	int64_t t11 = -5688749759LL;

	t11 = (((x45|x46)|x47)-x48);

	if (t11 != -93280LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MIN;
	int64_t x52 = 166LL;
	volatile int64_t t12 = 395256053780576502LL;

	t12 = (((x49|x50)|x51)-x52);

	if (t12 != -2147483814LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	int8_t x54 = -49;
	int16_t x55 = -10353;
	uint32_t x56 = 3U;

	t13 = (((x53|x54)|x55)-x56);

	if (t13 != 4294967292U) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	int64_t x58 = 90764853873724LL;
	volatile int64_t x59 = INT64_MIN;
	static volatile int64_t t14 = 7774657LL;

	t14 = (((x57|x58)|x59)-x60);

	if (t14 != -272216133LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = 4420;
	uint16_t x63 = 63U;
	volatile int32_t x64 = INT32_MIN;
	static int32_t t15 = INT32_MAX;

	t15 = (((x61|x62)|x63)-x64);

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = 2;
	int64_t x67 = INT64_MAX;
	int64_t x68 = -1LL;
	int64_t t16 = 9LL;

	t16 = (((x65|x66)|x67)-x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	uint16_t x70 = 9U;
	int16_t x71 = -1;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t17 = -426399892;

	t17 = (((x69|x70)|x71)-x72);

	if (t17 != -256) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 113679872438432LLU;
	uint64_t x74 = UINT64_MAX;
	static int8_t x75 = INT8_MIN;
	int64_t x76 = INT64_MIN;
	volatile uint64_t t18 = 825029988468LLU;

	t18 = (((x73|x74)|x75)-x76);

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = 2983U;
	static int8_t x78 = INT8_MIN;
	uint16_t x79 = UINT16_MAX;
	int8_t x80 = INT8_MIN;
	int32_t t19 = 276754865;

	t19 = (((x77|x78)|x79)-x80);

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MIN;
	volatile uint64_t x83 = 63LLU;
	static uint64_t t20 = 18LLU;

	t20 = (((x81|x82)|x83)-x84);

	if (t20 != 18446744073709518912LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -2981;
	uint8_t x86 = 28U;
	volatile int64_t x87 = -190399913LL;
	uint32_t x88 = UINT32_MAX;
	static int64_t t21 = 15675127370016734LL;

	t21 = (((x85|x86)|x87)-x88);

	if (t21 != -4294967712LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -1LL;
	int64_t x90 = -1LL;
	int64_t x91 = INT64_MIN;
	int64_t x92 = -1019375LL;
	int64_t t22 = -12942415396668LL;

	t22 = (((x89|x90)|x91)-x92);

	if (t22 != 1019374LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = -1LL;
	int32_t x95 = INT32_MAX;
	uint64_t x96 = UINT64_MAX;

	t23 = (((x93|x94)|x95)-x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x99 = INT64_MAX;
	int16_t x100 = INT16_MAX;
	uint64_t t24 = 2341940517448652158LLU;

	t24 = (((x97|x98)|x99)-x100);

	if (t24 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int16_t x102 = INT16_MIN;
	int16_t x103 = -1;
	uint16_t x104 = UINT16_MAX;
	int32_t t25 = -23633423;

	t25 = (((x101|x102)|x103)-x104);

	if (t25 != -65536) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = -1;
	int32_t x106 = INT32_MIN;

	t26 = (((x105|x106)|x107)-x108);

	if (t26 != 18446741939370224331LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = UINT16_MAX;
	uint64_t x110 = UINT64_MAX;
	volatile uint64_t x111 = 12446331828520973LLU;
	int8_t x112 = 21;
	volatile uint64_t t27 = 114808856673LLU;

	t27 = (((x109|x110)|x111)-x112);

	if (t27 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x113 = -1;
	volatile int32_t x114 = -4;
	static int32_t x115 = 7387253;
	int32_t t28 = 53255029;

	t28 = (((x113|x114)|x115)-x116);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int64_t t29 = -339417225985317LL;

	t29 = (((x117|x118)|x119)-x120);

	if (t29 != 127LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 9;
	uint64_t x122 = 124679404404022LLU;
	int64_t x123 = INT64_MIN;
	volatile int64_t x124 = INT64_MAX;
	volatile uint64_t t30 = 7LLU;

	t30 = (((x121|x122)|x123)-x124);

	if (t30 != 124679404404032LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	volatile int32_t x130 = -15792;
	volatile int16_t x131 = 0;
	int16_t x132 = INT16_MAX;
	static int32_t t31 = -153;

	t31 = (((x129|x130)|x131)-x132);

	if (t31 != -48559) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = 1002122471522444LL;
	uint64_t x134 = 1142009125794LLU;
	static uint32_t x135 = 779689U;
	int64_t x136 = -1LL;
	static uint64_t t32 = 68454916955649LLU;

	t32 = (((x133|x134)|x135)-x136);

	if (t32 != 1002127370485680LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x137 = INT32_MIN;
	static int8_t x138 = -1;
	int8_t x139 = -1;
	int16_t x140 = -1;
	int32_t t33 = -13;

	t33 = (((x137|x138)|x139)-x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x141 = UINT16_MAX;
	uint32_t x142 = 18805536U;
	static uint64_t x143 = 117331216LLU;
	volatile uint64_t t34 = 2837065586754268LLU;

	t34 = (((x141|x142)|x143)-x144);

	if (t34 != 134152319LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	static int32_t x146 = INT32_MAX;
	int16_t x147 = -1;
	volatile int32_t t35 = -10625003;

	t35 = (((x145|x146)|x147)-x148);

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x149 = 628371957U;
	volatile uint8_t x150 = UINT8_MAX;
	static int32_t x151 = INT32_MIN;
	volatile int64_t x152 = -1LL;
	static volatile int64_t t36 = -1766665329786048LL;

	t36 = (((x149|x150)|x151)-x152);

	if (t36 != 2775855616LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x155 = 78960U;
	volatile int8_t x156 = -6;
	uint64_t t37 = 200LLU;

	t37 = (((x153|x154)|x155)-x156);

	if (t37 != 58324997LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -61;
	int64_t x158 = -1LL;
	volatile uint32_t x159 = 32034996U;
	int16_t x160 = -1;
	static volatile int64_t t38 = 133121619072176042LL;

	t38 = (((x157|x158)|x159)-x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x161 = 14;
	volatile int64_t x163 = -1LL;
	int8_t x164 = INT8_MIN;

	t39 = (((x161|x162)|x163)-x164);

	if (t39 != 127LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x165 = -32;
	volatile uint64_t x166 = 78746323063LLU;
	volatile uint32_t x167 = 192386U;
	uint16_t x168 = 6U;
	uint64_t t40 = 32031683127972LLU;

	t40 = (((x165|x166)|x167)-x168);

	if (t40 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MIN;
	uint8_t x174 = UINT8_MAX;
	int16_t x176 = INT16_MIN;
	volatile int32_t t41 = -16609268;

	t41 = (((x173|x174)|x175)-x176);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x178 = 20;
	int16_t x179 = INT16_MIN;
	uint32_t x180 = 123764775U;
	volatile uint32_t t42 = 33348257U;

	t42 = (((x177|x178)|x179)-x180);

	if (t42 != 4171169773U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = 3;
	uint8_t x183 = UINT8_MAX;
	static uint16_t x184 = 1249U;
	volatile int64_t t43 = 1077029339247LL;

	t43 = (((x181|x182)|x183)-x184);

	if (t43 != -4412779035101386466LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 0U;
	static int8_t x186 = 5;
	int16_t x188 = 83;

	t44 = (((x185|x186)|x187)-x188);

	if (t44 != 4294967218U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = -1;
	uint8_t x190 = UINT8_MAX;
	volatile int8_t x191 = INT8_MAX;
	int16_t x192 = INT16_MAX;
	int32_t t45 = 3;

	t45 = (((x189|x190)|x191)-x192);

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x194 = -398;
	uint8_t x195 = 0U;
	uint32_t x196 = 613U;
	static uint32_t t46 = 33U;

	t46 = (((x193|x194)|x195)-x196);

	if (t46 != 4294966293U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = 25U;
	int64_t x199 = -22828085019316691LL;
	static int32_t x200 = INT32_MIN;
	volatile int64_t t47 = 397069746LL;

	t47 = (((x197|x198)|x199)-x200);

	if (t47 != -22828081890721793LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x202 = 78U;
	uint64_t x203 = 229743039LLU;
	volatile uint64_t t48 = 7020471494775995655LLU;

	t48 = (((x201|x202)|x203)-x204);

	if (t48 != 532675584LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x206 = -71LL;
	volatile int16_t x207 = INT16_MIN;
	int8_t x208 = -3;
	int64_t t49 = 2142899926111LL;

	t49 = (((x205|x206)|x207)-x208);

	if (t49 != -68LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = 1;
	uint64_t x210 = UINT64_MAX;
	static int16_t x211 = 23;
	uint64_t t50 = 11086441192LLU;

	t50 = (((x209|x210)|x211)-x212);

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = INT16_MIN;
	uint64_t x214 = 318657LLU;
	int32_t x215 = INT32_MAX;
	uint64_t t51 = 72LLU;

	t51 = (((x213|x214)|x215)-x216);

	if (t51 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MIN;
	int32_t x218 = INT32_MIN;
	volatile uint32_t x219 = UINT32_MAX;
	uint16_t x220 = UINT16_MAX;
	static volatile uint32_t t52 = 820183602U;

	t52 = (((x217|x218)|x219)-x220);

	if (t52 != 4294901760U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = -12913758181931623LL;
	int64_t x222 = -216LL;
	static volatile int8_t x223 = INT8_MAX;
	int16_t x224 = INT16_MAX;
	int64_t t53 = -9052LL;

	t53 = (((x221|x222)|x223)-x224);

	if (t53 != -32768LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x225 = UINT16_MAX;
	static int64_t x226 = INT64_MAX;
	int16_t x227 = -8;
	int16_t x228 = INT16_MAX;
	int64_t t54 = -999516998LL;

	t54 = (((x225|x226)|x227)-x228);

	if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = INT8_MIN;
	volatile uint32_t x231 = 8173U;
	int32_t x232 = INT32_MIN;
	static volatile uint32_t t55 = 5249382U;

	t55 = (((x229|x230)|x231)-x232);

	if (t55 != 2147483629U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = -1;
	static int64_t x234 = INT64_MIN;
	volatile int64_t t56 = 1LL;

	t56 = (((x233|x234)|x235)-x236);

	if (t56 != 1473875LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x239 = UINT16_MAX;
	int64_t x240 = -1877953310044151245LL;
	volatile int64_t t57 = -2573371LL;

	t57 = (((x237|x238)|x239)-x240);

	if (t57 != 1877953310044216780LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x241 = -85;
	int16_t x243 = -1040;
	int32_t x244 = -9272;
	int32_t t58 = -246316;

	t58 = (((x241|x242)|x243)-x244);

	if (t58 != 9267) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x245 = 328974U;
	int32_t x246 = -364;
	volatile uint32_t t59 = 1044222U;

	t59 = (((x245|x246)|x247)-x248);

	if (t59 != 30650U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x250 = -1;
	static volatile int16_t x251 = INT16_MIN;
	volatile int32_t t60 = -63;

	t60 = (((x249|x250)|x251)-x252);

	if (t60 != -4) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x253 = 4LLU;
	uint8_t x254 = 0U;
	volatile uint64_t x255 = UINT64_MAX;
	static int32_t x256 = INT32_MIN;
	static volatile uint64_t t61 = 217405477299104LLU;

	t61 = (((x253|x254)|x255)-x256);

	if (t61 != 2147483647LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	static int16_t x259 = INT16_MAX;
	volatile int8_t x260 = INT8_MIN;
	volatile int32_t t62 = -33;

	t62 = (((x257|x258)|x259)-x260);

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x261 = 431U;
	static uint8_t x264 = UINT8_MAX;
	static int32_t t63 = 3;

	t63 = (((x261|x262)|x263)-x264);

	if (t63 != -256) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = INT8_MIN;
	static uint8_t x266 = 14U;
	volatile int64_t x267 = 1169LL;
	uint16_t x268 = 1017U;
	static volatile int64_t t64 = 28LL;

	t64 = (((x265|x266)|x267)-x268);

	if (t64 != -1114LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = -23;
	uint32_t x274 = 833869U;
	int64_t x275 = INT64_MIN;
	volatile int32_t x276 = INT32_MIN;

	t65 = (((x273|x274)|x275)-x276);

	if (t65 != -9223372030412324883LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x277 = UINT8_MAX;
	uint64_t x278 = UINT64_MAX;

	t66 = (((x277|x278)|x279)-x280);

	if (t66 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = 3U;
	uint8_t x282 = 15U;
	int64_t x283 = -3602653093017LL;
	int8_t x284 = -1;
	int64_t t67 = 0LL;

	t67 = (((x281|x282)|x283)-x284);

	if (t67 != -3602653093008LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MIN;
	int64_t t68 = -52LL;

	t68 = (((x285|x286)|x287)-x288);

	if (t68 != -5894LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MIN;
	static int16_t x290 = INT16_MAX;
	int16_t x291 = 16111;
	static volatile uint8_t x292 = UINT8_MAX;
	static int32_t t69 = -13;

	t69 = (((x289|x290)|x291)-x292);

	if (t69 != -256) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	uint8_t x298 = 0U;
	volatile int16_t x299 = INT16_MAX;
	uint16_t x300 = 303U;
	int32_t t70 = -1346;

	t70 = (((x297|x298)|x299)-x300);

	if (t70 != -2147451184) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MAX;
	int32_t x303 = -1;
	int8_t x304 = -1;
	static int32_t t71 = -5764;

	t71 = (((x301|x302)|x303)-x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x305 = UINT16_MAX;
	int8_t x306 = -2;
	int16_t x307 = -1;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t72 = 1;

	t72 = (((x305|x306)|x307)-x308);

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x310 = INT32_MAX;
	int32_t x311 = -172752;
	volatile uint16_t x312 = 3U;
	volatile int32_t t73 = 545661486;

	t73 = (((x309|x310)|x311)-x312);

	if (t73 != -4) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MIN;
	volatile int32_t x314 = 12639;
	volatile uint64_t x315 = UINT64_MAX;
	static int64_t x316 = INT64_MIN;

	t74 = (((x313|x314)|x315)-x316);

	if (t74 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x317 = INT32_MIN;
	int16_t x318 = 9;
	uint8_t x319 = 8U;
	int16_t x320 = 1;
	int32_t t75 = -233;

	t75 = (((x317|x318)|x319)-x320);

	if (t75 != -2147483640) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x321 = -30;
	static int8_t x322 = INT8_MIN;
	static int64_t x323 = 3533915823033848LL;
	static int8_t x324 = 7;
	int64_t t76 = -365055673178LL;

	t76 = (((x321|x322)|x323)-x324);

	if (t76 != -13LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x325 = 5U;
	volatile int16_t x327 = -2157;
	uint32_t x328 = UINT32_MAX;
	volatile int64_t t77 = 123817414634817LL;

	t77 = (((x325|x326)|x327)-x328);

	if (t77 != -4294969440LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x330 = INT64_MIN;
	static int32_t x331 = INT32_MIN;
	uint16_t x332 = UINT16_MAX;

	t78 = (((x329|x330)|x331)-x332);

	if (t78 != -2147516416LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	int32_t x335 = -1;
	static int32_t x336 = INT32_MIN;
	volatile uint32_t t79 = 1U;

	t79 = (((x333|x334)|x335)-x336);

	if (t79 != 2147483647U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = -1LL;
	int32_t x338 = INT32_MAX;
	static int32_t x340 = INT32_MIN;
	volatile int64_t t80 = 5163277LL;

	t80 = (((x337|x338)|x339)-x340);

	if (t80 != 2147483647LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x341 = -131;
	int16_t x342 = INT16_MAX;
	uint16_t x343 = UINT16_MAX;
	int64_t x344 = -1LL;
	volatile int64_t t81 = 8LL;

	t81 = (((x341|x342)|x343)-x344);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x347 = INT64_MIN;
	static int16_t x348 = -1;
	uint64_t t82 = 3670131621889885080LLU;

	t82 = (((x345|x346)|x347)-x348);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x353 = -1646491326423861LL;
	uint64_t x354 = 86080LLU;
	int32_t x355 = -1;
	int32_t x356 = INT32_MIN;
	uint64_t t83 = 4611337307378188511LLU;

	t83 = (((x353|x354)|x355)-x356);

	if (t83 != 2147483647LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = -1LL;
	uint16_t x358 = UINT16_MAX;
	volatile uint64_t t84 = 7923384301LLU;

	t84 = (((x357|x358)|x359)-x360);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = INT32_MIN;
	int32_t x362 = -10421;
	int16_t x364 = INT16_MIN;
	static volatile int32_t t85 = -62;

	t85 = (((x361|x362)|x363)-x364);

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x369 = -1;
	int8_t x370 = -1;
	uint64_t x371 = UINT64_MAX;
	int32_t x372 = 2680820;
	uint64_t t86 = 206721327LLU;

	t86 = (((x369|x370)|x371)-x372);

	if (t86 != 18446744073706870795LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x377 = -1876;
	int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MIN;
	int32_t x380 = INT32_MAX;

	t87 = (((x377|x378)|x379)-x380);

	if (t87 != -2147485523LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x381 = -348;
	int64_t x384 = INT64_MAX;

	t88 = (((x381|x382)|x383)-x384);

	if (t88 != -9223372032559808522LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x385 = UINT8_MAX;
	static int32_t x386 = INT32_MIN;
	uint32_t x387 = 296660873U;
	int32_t x388 = INT32_MAX;
	static volatile uint32_t t89 = 8494888U;

	t89 = (((x385|x386)|x387)-x388);

	if (t89 != 296660992U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x394 = INT16_MAX;
	volatile int64_t x395 = -1LL;
	volatile uint8_t x396 = 7U;
	volatile int64_t t90 = 959571864987336656LL;

	t90 = (((x393|x394)|x395)-x396);

	if (t90 != -8LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x397 = -6;
	uint16_t x398 = 138U;
	uint32_t x399 = 7160U;
	int8_t x400 = INT8_MAX;

	t91 = (((x397|x398)|x399)-x400);

	if (t91 != 4294967163U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x401 = -1;
	volatile int64_t x402 = INT64_MAX;
	int64_t x403 = 20162405527LL;
	volatile int16_t x404 = 0;
	static int64_t t92 = 275750051800LL;

	t92 = (((x401|x402)|x403)-x404);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x405 = 1U;
	int8_t x406 = INT8_MAX;
	int8_t x407 = -1;
	int16_t x408 = 242;
	static volatile int32_t t93 = 1000;

	t93 = (((x405|x406)|x407)-x408);

	if (t93 != -243) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x410 = INT64_MIN;
	static volatile int8_t x411 = INT8_MIN;
	static volatile int8_t x412 = 19;
	volatile int64_t t94 = 479827864003LL;

	t94 = (((x409|x410)|x411)-x412);

	if (t94 != -147LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x413 = 7U;
	int64_t x414 = INT64_MAX;
	int16_t x415 = INT16_MIN;
	int64_t x416 = INT64_MIN;
	int64_t t95 = INT64_MAX;

	t95 = (((x413|x414)|x415)-x416);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x417 = UINT64_MAX;
	int64_t x418 = 176LL;
	volatile uint8_t x419 = UINT8_MAX;
	uint8_t x420 = 8U;

	t96 = (((x417|x418)|x419)-x420);

	if (t96 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x421 = 13668;
	int32_t x422 = -1;
	static uint16_t x423 = UINT16_MAX;
	volatile int32_t x424 = -1;
	int32_t t97 = 159690035;

	t97 = (((x421|x422)|x423)-x424);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x425 = 57790122;
	volatile uint8_t x426 = 3U;
	int64_t x427 = INT64_MIN;
	int32_t x428 = -1;
	static int64_t t98 = -299252205027381LL;

	t98 = (((x425|x426)|x427)-x428);

	if (t98 != -9223372036796985684LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x430 = 4U;
	int8_t x431 = -1;
	static uint32_t x432 = 9U;

	t99 = (((x429|x430)|x431)-x432);

	if (t99 != 4294967286U) { NG(); } else { ; }
	
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

