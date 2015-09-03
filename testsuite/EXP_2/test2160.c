#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = -14;
volatile int32_t x10 = INT32_MIN;
static volatile uint16_t x11 = UINT16_MAX;
static int64_t x12 = 8760216756881961LL;
uint32_t x17 = UINT32_MAX;
volatile uint32_t x20 = 720U;
uint32_t x25 = 2U;
int16_t x34 = INT16_MAX;
int16_t x45 = -1;
uint64_t x64 = 1255LLU;
int64_t t16 = -453297645804669029LL;
uint64_t x73 = 55349221332LLU;
static uint64_t x83 = UINT64_MAX;
static uint8_t x86 = 10U;
static int8_t x88 = INT8_MAX;
volatile uint64_t t21 = 34112270051041908LLU;
volatile uint64_t t22 = 11307LLU;
int8_t x122 = INT8_MAX;
uint16_t x123 = UINT16_MAX;
uint8_t x124 = UINT8_MAX;
volatile uint64_t t28 = 1789219382766LLU;
static volatile int16_t x144 = INT16_MAX;
uint64_t t33 = 238151276301LLU;
uint32_t x149 = 202704U;
static int32_t x150 = -11721347;
uint16_t x160 = 3698U;
volatile int64_t t37 = -1LL;
volatile int64_t x166 = -4466206890644029LL;
int64_t x167 = 109538800102653LL;
static int64_t t38 = -4544297952845973074LL;
volatile int64_t x171 = INT64_MIN;
volatile int64_t t39 = -54680676412LL;
static uint32_t t40 = 0U;
volatile int16_t x178 = INT16_MIN;
static uint8_t x179 = UINT8_MAX;
volatile int32_t t41 = 0;
uint8_t x187 = 13U;
uint64_t t43 = 2480619690608LLU;
int64_t x189 = INT64_MAX;
volatile int16_t x190 = INT16_MIN;
static volatile int64_t t44 = -416LL;
static uint32_t x202 = 2777U;
int64_t x205 = 9161889052LL;
int16_t x207 = INT16_MIN;
int8_t x211 = INT8_MAX;
uint32_t x212 = 10615245U;
volatile uint32_t t48 = 3517727U;
uint16_t x222 = UINT16_MAX;
uint16_t x230 = UINT16_MAX;
static int32_t x231 = INT32_MAX;
int16_t x232 = INT16_MIN;
int16_t x238 = INT16_MIN;
static int32_t t55 = 4;
static uint8_t x248 = UINT8_MAX;
uint64_t x250 = 36464323690411LLU;
uint16_t x260 = 30445U;
static uint64_t t61 = 4LLU;
int16_t x274 = -1733;
static int32_t x279 = INT32_MIN;
uint16_t x280 = 232U;
int64_t x286 = INT64_MAX;
int16_t x289 = -52;
uint8_t x290 = 3U;
int32_t x291 = 31366;
static int64_t t68 = -9LL;
uint16_t x307 = 10965U;
static uint8_t x308 = 105U;
int64_t x310 = -1LL;
volatile int8_t x311 = INT8_MIN;
static int8_t x318 = INT8_MIN;
static int32_t t75 = -21172;
int16_t x325 = INT16_MAX;
int32_t x329 = INT32_MIN;
int32_t x342 = -1;
int16_t x346 = INT16_MAX;
volatile uint64_t t81 = 19775379350LLU;
static int64_t x353 = INT64_MIN;
static uint64_t x354 = 28606352974059453LLU;
uint64_t t82 = 3875LLU;
int64_t x359 = 61LL;
int8_t x364 = -1;
int32_t x369 = INT32_MAX;
int32_t x370 = INT32_MIN;
static uint16_t x371 = 3394U;
int32_t x372 = 1;
volatile int32_t t86 = 5;
volatile int64_t t87 = -39565532073373446LL;
static int8_t x383 = -1;
int16_t x384 = 2;
volatile int32_t t89 = 236927;
int64_t x389 = -1LL;
static int8_t x390 = -1;
int64_t t90 = 15355LL;
static uint16_t x393 = 10480U;
volatile uint16_t x396 = 2945U;
int64_t x399 = -5661194136LL;
volatile int16_t x400 = -11743;
int32_t x401 = INT32_MIN;
volatile int64_t t93 = -231138980LL;
static int32_t x408 = INT32_MIN;
volatile int8_t x412 = -1;
int64_t x414 = -116728887LL;
int8_t x417 = INT8_MIN;
volatile uint32_t x418 = 14527212U;
int8_t x423 = -11;
int16_t x426 = INT16_MAX;
int8_t x428 = INT8_MIN;


void f0(void) {
	volatile int16_t x1 = -1;
	int8_t x2 = INT8_MIN;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -1725;

	t0 = ((x1&(x2^x3))-x4);

	if (t0 != 242) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 1912U;
	int64_t x6 = INT64_MIN;
	int16_t x7 = 113;
	int8_t x8 = INT8_MIN;
	int64_t t1 = 609LL;

	t1 = ((x5&(x6^x7))-x8);

	if (t1 != 240LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MAX;
	int64_t t2 = 1735522417403849LL;

	t2 = ((x9&(x10^x11))-x12);

	if (t2 != -8760216756881834LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = UINT8_MAX;
	uint8_t x19 = 28U;
	uint32_t t3 = 5U;

	t3 = ((x17&(x18^x19))-x20);

	if (t3 != 4294966803U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -1;
	volatile int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MIN;
	int64_t x24 = -1LL;
	volatile int64_t t4 = 12209LL;

	t4 = ((x21&(x22^x23))-x24);

	if (t4 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = -1LL;
	volatile int16_t x27 = INT16_MAX;
	int8_t x28 = INT8_MAX;
	volatile int64_t t5 = -1066098568LL;

	t5 = ((x25&(x26^x27))-x28);

	if (t5 != -127LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 26U;
	volatile int16_t x30 = INT16_MAX;
	int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = -3577;

	t6 = ((x29&(x30^x31))-x32);

	if (t6 != 32794) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 75U;
	volatile int8_t x35 = -1;
	volatile int16_t x36 = -1;
	static volatile int32_t t7 = 752229686;

	t7 = ((x33&(x34^x35))-x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 224389427569333LL;
	int16_t x38 = -1;
	int8_t x39 = 18;
	uint32_t x40 = UINT32_MAX;
	int64_t t8 = 4375110103LL;

	t8 = ((x37&(x38^x39))-x40);

	if (t8 != 224385132602022LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MAX;
	int64_t x42 = -1390597LL;
	static int64_t x43 = -629951805994172616LL;
	static uint64_t x44 = UINT64_MAX;
	uint64_t t9 = 253347036700883186LLU;

	t9 = ((x41&(x42^x43))-x44);

	if (t9 != 14532LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x46 = -1;
	uint32_t x47 = 568U;
	static volatile uint8_t x48 = 0U;
	uint32_t t10 = 21437981U;

	t10 = ((x45&(x46^x47))-x48);

	if (t10 != 4294966727U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MIN;
	static uint8_t x50 = 7U;
	static volatile int32_t x51 = INT32_MAX;
	uint16_t x52 = 5064U;
	static volatile int32_t t11 = -108755567;

	t11 = ((x49&(x50^x51))-x52);

	if (t11 != -5064) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x53 = 15875779709047027LLU;
	static volatile int16_t x54 = INT16_MIN;
	uint64_t x55 = 1357LLU;
	int8_t x56 = INT8_MIN;
	uint64_t t12 = 3686366LLU;

	t12 = ((x53&(x54^x55))-x56);

	if (t12 != 15875779709042881LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 153325U;
	static uint8_t x58 = UINT8_MAX;
	uint64_t x59 = 201653316647547321LLU;
	int64_t x60 = 185LL;
	volatile uint64_t t13 = 193388412829705LLU;

	t13 = ((x57&(x58^x59))-x60);

	if (t13 != 151435LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	static uint64_t x62 = 13504366419164084LLU;
	int64_t x63 = INT64_MAX;
	volatile uint64_t t14 = 26855516492883LLU;

	t14 = ((x61&(x62^x63))-x64);

	if (t14 != 9209867670435592985LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -46;
	int8_t x66 = INT8_MAX;
	uint16_t x67 = UINT16_MAX;
	static int32_t x68 = -262748221;
	static int32_t t15 = 2125315;

	t15 = ((x65&(x66^x67))-x68);

	if (t15 != 262813629) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MIN;
	int64_t x71 = 22689360739384213LL;
	volatile int16_t x72 = 353;

	t16 = ((x69&(x70^x71))-x72);

	if (t16 != -9200682678112747873LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = INT8_MIN;
	static volatile int16_t x75 = 10596;
	static uint32_t x76 = 99509U;
	volatile uint64_t t17 = 2529LLU;

	t17 = ((x73&(x74^x75))-x76);

	if (t17 != 55349121551LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MAX;
	static int16_t x78 = 90;
	int64_t x79 = 39LL;
	int32_t x80 = -1;
	int64_t t18 = 20925LL;

	t18 = ((x77&(x78^x79))-x80);

	if (t18 != 126LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	uint16_t x82 = UINT16_MAX;
	int8_t x84 = INT8_MIN;
	static uint64_t t19 = 639158LLU;

	t19 = ((x81&(x82^x83))-x84);

	if (t19 != 18446744073709486208LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x85 = UINT16_MAX;
	int16_t x87 = -1;
	volatile int32_t t20 = 16846603;

	t20 = ((x85&(x86^x87))-x88);

	if (t20 != 65398) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 4024517685997LL;
	uint64_t x90 = UINT64_MAX;
	volatile int8_t x91 = INT8_MIN;
	static int64_t x92 = INT64_MAX;

	t21 = ((x89&(x90^x91))-x92);

	if (t21 != 9223372036854775918LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 1LLU;
	static int16_t x98 = INT16_MIN;
	uint8_t x99 = UINT8_MAX;
	uint8_t x100 = 111U;

	t22 = ((x97&(x98^x99))-x100);

	if (t22 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x101 = 890842;
	int64_t x102 = INT64_MIN;
	static int64_t x103 = 13563428096646LL;
	volatile int16_t x104 = -1;
	int64_t t23 = -246828693LL;

	t23 = ((x101&(x102^x103))-x104);

	if (t23 != 643LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MAX;
	int32_t x106 = INT32_MIN;
	static int8_t x107 = INT8_MIN;
	int32_t x108 = 327968;
	static volatile int32_t t24 = 905677902;

	t24 = ((x105&(x106^x107))-x108);

	if (t24 != -327968) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MAX;
	int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MAX;
	uint16_t x112 = UINT16_MAX;
	volatile int64_t t25 = -2123955251181975640LL;

	t25 = ((x109&(x110^x111))-x112);

	if (t25 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = -4;
	uint64_t x114 = 29368LLU;
	static volatile uint64_t x115 = 2515859292649646LLU;
	int16_t x116 = 193;
	static uint64_t t26 = 44449828LLU;

	t26 = ((x113&(x114^x115))-x116);

	if (t26 != 2515859292621139LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x117 = -1;
	int16_t x118 = INT16_MIN;
	int64_t x119 = INT64_MAX;
	static uint8_t x120 = 1U;
	int64_t t27 = 126630615LL;

	t27 = ((x117&(x118^x119))-x120);

	if (t27 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 1LLU;

	t28 = ((x121&(x122^x123))-x124);

	if (t28 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 73U;
	uint8_t x126 = 0U;
	uint8_t x127 = UINT8_MAX;
	volatile int8_t x128 = INT8_MIN;
	uint32_t t29 = 30U;

	t29 = ((x125&(x126^x127))-x128);

	if (t29 != 201U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = 0U;
	int64_t x130 = INT64_MIN;
	volatile int8_t x131 = -40;
	uint32_t x132 = 0U;
	int64_t t30 = -41874934LL;

	t30 = ((x129&(x130^x131))-x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = 186910185LL;
	uint64_t x134 = 117052270662314LLU;
	static uint16_t x135 = 13781U;
	static volatile int32_t x136 = 0;
	volatile uint64_t t31 = 30017LLU;

	t31 = ((x133&(x134^x135))-x136);

	if (t31 != 184550761LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = INT32_MAX;
	int8_t x138 = 0;
	int32_t x139 = -1;
	static uint8_t x140 = 13U;
	volatile int32_t t32 = -498312098;

	t32 = ((x137&(x138^x139))-x140);

	if (t32 != 2147483634) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x141 = 246144626193LLU;
	int32_t x142 = 3766264;
	uint64_t x143 = UINT64_MAX;

	t33 = ((x141&(x142^x143))-x144);

	if (t33 != 246142994434LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x145 = INT16_MAX;
	int32_t x146 = -8267527;
	int16_t x147 = 181;
	static volatile int8_t x148 = 0;
	int32_t t34 = 1;

	t34 = ((x145&(x146^x147))-x148);

	if (t34 != 22604) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x151 = -1;
	static volatile int32_t x152 = -1;
	uint32_t t35 = 211184U;

	t35 = ((x149&(x150^x151))-x152);

	if (t35 != 135809U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = 22U;
	int16_t x154 = INT16_MAX;
	int16_t x155 = INT16_MAX;
	volatile int16_t x156 = INT16_MAX;
	int32_t t36 = 165491212;

	t36 = ((x153&(x154^x155))-x156);

	if (t36 != -32767) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x157 = INT64_MAX;
	static uint8_t x158 = UINT8_MAX;
	int16_t x159 = 1;

	t37 = ((x157&(x158^x159))-x160);

	if (t37 != -3444LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	volatile int64_t x168 = -1LL;

	t38 = ((x165&(x166^x167))-x168);

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MAX;
	static int8_t x170 = INT8_MIN;
	int16_t x172 = -1;

	t39 = ((x169&(x170^x171))-x172);

	if (t39 != 32641LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x173 = 3617U;
	static int16_t x174 = -3113;
	uint16_t x175 = UINT16_MAX;
	uint8_t x176 = UINT8_MAX;

	t40 = ((x173&(x174^x175))-x176);

	if (t40 != 2849U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = 6956779;
	int8_t x180 = INT8_MIN;

	t41 = ((x177&(x178^x179))-x180);

	if (t41 != 6947179) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = -1;
	static uint32_t x182 = UINT32_MAX;
	static int64_t x183 = INT64_MIN;
	int16_t x184 = -1;
	int64_t t42 = 181903LL;

	t42 = ((x181&(x182^x183))-x184);

	if (t42 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x185 = INT64_MIN;
	volatile uint64_t x186 = 571268350042751482LLU;
	int64_t x188 = INT64_MIN;

	t43 = ((x185&(x186^x187))-x188);

	if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x191 = INT8_MAX;
	volatile int32_t x192 = 20164841;

	t44 = ((x189&(x190^x191))-x192);

	if (t44 != 9223372036834578326LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x193 = INT8_MIN;
	volatile int64_t x194 = INT64_MAX;
	int32_t x195 = INT32_MAX;
	int16_t x196 = -90;
	volatile int64_t t45 = 40581726365143LL;

	t45 = ((x193&(x194^x195))-x196);

	if (t45 != 9223372034707292250LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x201 = INT8_MIN;
	static uint16_t x203 = UINT16_MAX;
	volatile int16_t x204 = INT16_MAX;
	volatile uint32_t t46 = 17891U;

	t46 = ((x201&(x202^x203))-x204);

	if (t46 != 29953U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x206 = -7;
	int16_t x208 = INT16_MIN;
	volatile int64_t t47 = -9146795746321LL;

	t47 = ((x205&(x206^x207))-x208);

	if (t47 != 54552LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x209 = 21182U;
	static volatile uint8_t x210 = 43U;

	t48 = ((x209&(x210^x211))-x212);

	if (t48 != 4284352071U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = UINT32_MAX;
	int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MIN;
	volatile int16_t x216 = INT16_MIN;
	static volatile uint32_t t49 = 39099126U;

	t49 = ((x213&(x214^x215))-x216);

	if (t49 != 32768U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	static int16_t x218 = -1;
	volatile int32_t x219 = -1;
	volatile int16_t x220 = INT16_MAX;
	int32_t t50 = 1908;

	t50 = ((x217&(x218^x219))-x220);

	if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x221 = -148;
	int32_t x223 = INT32_MIN;
	uint64_t x224 = UINT64_MAX;
	uint64_t t51 = 6565LLU;

	t51 = ((x221&(x222^x223))-x224);

	if (t51 != 18446744071562133357LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x226 = INT8_MIN;
	int8_t x227 = -1;
	int64_t x228 = INT64_MAX;
	static volatile int64_t t52 = 973909646LL;

	t52 = ((x225&(x226^x227))-x228);

	if (t52 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = INT32_MIN;
	volatile int32_t t53 = -157716;

	t53 = ((x229&(x230^x231))-x232);

	if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = -1541;
	static volatile int8_t x234 = 1;
	uint64_t x235 = 46444583LLU;
	uint32_t x236 = UINT32_MAX;
	static volatile uint64_t t54 = 36857089564176543LLU;

	t54 = ((x233&(x234^x235))-x236);

	if (t54 != 18446744069461028899LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = INT8_MIN;
	int8_t x239 = -1;
	int16_t x240 = -1;

	t55 = ((x237&(x238^x239))-x240);

	if (t55 != 32641) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x241 = INT32_MIN;
	int16_t x242 = INT16_MAX;
	int32_t x243 = INT32_MIN;
	int16_t x244 = -20;
	int32_t t56 = -63498956;

	t56 = ((x241&(x242^x243))-x244);

	if (t56 != -2147483628) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x245 = INT8_MAX;
	uint64_t x246 = 3999218600150LLU;
	volatile int64_t x247 = INT64_MAX;
	volatile uint64_t t57 = 87321LLU;

	t57 = ((x245&(x246^x247))-x248);

	if (t57 != 18446744073709551402LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = UINT64_MAX;
	uint16_t x251 = UINT16_MAX;
	int64_t x252 = 11LL;
	volatile uint64_t t58 = 8394350LLU;

	t58 = ((x249&(x250^x251))-x252);

	if (t58 != 36464323690569LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = 2U;
	int64_t x258 = 477407LL;
	int16_t x259 = 1;
	int64_t t59 = -927LL;

	t59 = ((x257&(x258^x259))-x260);

	if (t59 != -30443LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = -13238903;
	static int8_t x262 = INT8_MIN;
	uint64_t x263 = 66804909549353LLU;
	uint32_t x264 = 426U;
	uint64_t t60 = 63006LLU;

	t60 = ((x261&(x262^x263))-x264);

	if (t60 != 18446677268799477471LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x265 = UINT32_MAX;
	uint64_t x266 = UINT64_MAX;
	uint32_t x267 = 1271811252U;
	uint32_t x268 = 100579154U;

	t61 = ((x265&(x266^x267))-x268);

	if (t61 != 2922576889LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = -1;
	uint32_t x270 = UINT32_MAX;
	static int64_t x271 = INT64_MAX;
	static int8_t x272 = INT8_MAX;
	int64_t t62 = -11773183137412860LL;

	t62 = ((x269&(x270^x271))-x272);

	if (t62 != 9223372032559808385LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x273 = INT8_MAX;
	int32_t x275 = -1;
	int8_t x276 = -1;
	volatile int32_t t63 = -6;

	t63 = ((x273&(x274^x275))-x276);

	if (t63 != 69) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = INT32_MIN;
	volatile int32_t x278 = INT32_MIN;
	int32_t t64 = -3;

	t64 = ((x277&(x278^x279))-x280);

	if (t64 != -232) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x281 = 14483274LLU;
	int32_t x282 = INT32_MIN;
	int16_t x283 = INT16_MAX;
	uint8_t x284 = 0U;
	uint64_t t65 = 2527621203LLU;

	t65 = ((x281&(x282^x283))-x284);

	if (t65 != 32586LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = INT64_MIN;
	int8_t x287 = 2;
	int8_t x288 = -1;
	volatile int64_t t66 = 1018LL;

	t66 = ((x285&(x286^x287))-x288);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x292 = -1;
	volatile int32_t t67 = 6198489;

	t67 = ((x289&(x290^x291))-x292);

	if (t67 != 31365) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x293 = -1;
	uint8_t x294 = 68U;
	int64_t x295 = -9690LL;
	int64_t x296 = 276925629887093976LL;

	t68 = ((x293&(x294^x295))-x296);

	if (t68 != -276925629887103606LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = -1;
	uint32_t x298 = UINT32_MAX;
	int64_t x299 = INT64_MIN;
	volatile int64_t x300 = INT64_MIN;
	int64_t t69 = -819582LL;

	t69 = ((x297&(x298^x299))-x300);

	if (t69 != 4294967295LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = INT8_MIN;
	volatile int8_t x302 = INT8_MAX;
	static int16_t x303 = 38;
	uint8_t x304 = 7U;
	volatile int32_t t70 = 682799770;

	t70 = ((x301&(x302^x303))-x304);

	if (t70 != -7) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = 4;
	volatile int64_t x306 = -171LL;
	volatile int64_t t71 = -68LL;

	t71 = ((x305&(x306^x307))-x308);

	if (t71 != -105LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x309 = 3166LLU;
	int32_t x312 = 0;
	volatile uint64_t t72 = 261221LLU;

	t72 = ((x309&(x310^x311))-x312);

	if (t72 != 94LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = 0;
	volatile int8_t x315 = -1;
	int16_t x316 = -3478;
	int32_t t73 = -83933863;

	t73 = ((x313&(x314^x315))-x316);

	if (t73 != 3350) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = -1;
	volatile int8_t x319 = -1;
	int16_t x320 = INT16_MIN;
	int32_t t74 = -50409321;

	t74 = ((x317&(x318^x319))-x320);

	if (t74 != 32895) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = INT32_MIN;
	volatile int32_t x322 = INT32_MIN;
	static uint8_t x323 = UINT8_MAX;
	int32_t x324 = INT32_MIN;

	t75 = ((x321&(x322^x323))-x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x326 = 886;
	volatile int64_t x327 = 45461693869920670LL;
	int32_t x328 = INT32_MIN;
	int64_t t76 = -1601346364LL;

	t76 = ((x325&(x326^x327))-x328);

	if (t76 != 2147488488LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x330 = 1019504033358900068LL;
	int16_t x331 = -8047;
	int32_t x332 = INT32_MIN;
	volatile int64_t t77 = 155375368LL;

	t77 = ((x329&(x330^x331))-x332);

	if (t77 != -1019504032093306880LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x333 = 215674U;
	int32_t x334 = INT32_MAX;
	int8_t x335 = INT8_MAX;
	static volatile uint32_t x336 = 913214U;
	volatile uint32_t t78 = 1796U;

	t78 = ((x333&(x334^x335))-x336);

	if (t78 != 4294269634U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x341 = INT32_MIN;
	uint32_t x343 = UINT32_MAX;
	int16_t x344 = -1;
	static uint32_t t79 = 1506757U;

	t79 = ((x341&(x342^x343))-x344);

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x345 = -1;
	int32_t x347 = INT32_MIN;
	int16_t x348 = -8;
	static volatile int32_t t80 = -107;

	t80 = ((x345&(x346^x347))-x348);

	if (t80 != -2147450873) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x349 = 0;
	int32_t x350 = INT32_MIN;
	uint64_t x351 = 27LLU;
	uint64_t x352 = UINT64_MAX;

	t81 = ((x349&(x350^x351))-x352);

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x355 = 12U;
	int32_t x356 = INT32_MIN;

	t82 = ((x353&(x354^x355))-x356);

	if (t82 != 2147483648LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x357 = -1;
	static volatile int32_t x358 = INT32_MIN;
	int32_t x360 = INT32_MAX;
	static int64_t t83 = -55513232LL;

	t83 = ((x357&(x358^x359))-x360);

	if (t83 != -4294967234LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x361 = INT16_MIN;
	static volatile uint64_t x362 = 20108107602039011LLU;
	int32_t x363 = INT32_MIN;
	static uint64_t t84 = 167973551789757484LLU;

	t84 = ((x361&(x362^x363))-x364);

	if (t84 != 18426635965125197825LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x365 = 4406U;
	int8_t x366 = 13;
	int64_t x367 = INT64_MIN;
	uint64_t x368 = 353476046LLU;
	uint64_t t85 = 910394786LLU;

	t85 = ((x365&(x366^x367))-x368);

	if (t85 != 18446744073356075574LLU) { NG(); } else { ; }
	
}

void f86(void) {


	t86 = ((x369&(x370^x371))-x372);

	if (t86 != 3393) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x373 = -181176;
	uint32_t x374 = UINT32_MAX;
	int64_t x375 = INT64_MIN;
	static uint8_t x376 = UINT8_MAX;

	t87 = ((x373&(x374^x375))-x376);

	if (t87 != -9223372032559989943LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x377 = UINT16_MAX;
	int32_t x378 = -11;
	uint16_t x379 = UINT16_MAX;
	uint16_t x380 = 13U;
	volatile int32_t t88 = 684;

	t88 = ((x377&(x378^x379))-x380);

	if (t88 != -3) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x381 = 28336694;
	int8_t x382 = 0;

	t89 = ((x381&(x382^x383))-x384);

	if (t89 != 28336692) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x391 = INT16_MIN;
	volatile int16_t x392 = INT16_MIN;

	t90 = ((x389&(x390^x391))-x392);

	if (t90 != 65535LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x394 = 1057906964U;
	static volatile int8_t x395 = 9;
	uint32_t t91 = 2571U;

	t91 = ((x393&(x394^x395))-x396);

	if (t91 != 5263U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x397 = 921;
	int32_t x398 = INT32_MIN;
	volatile int64_t t92 = -23740909LL;

	t92 = ((x397&(x398^x399))-x400);

	if (t92 != 11751LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x402 = -1LL;
	static uint16_t x403 = 123U;
	static uint16_t x404 = UINT16_MAX;

	t93 = ((x401&(x402^x403))-x404);

	if (t93 != -2147549183LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = INT8_MIN;
	static uint32_t x406 = 1302430U;
	uint32_t x407 = 1627710729U;
	uint32_t t94 = 1935571U;

	t94 = ((x405&(x406^x407))-x408);

	if (t94 != 3776395904U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x409 = INT64_MIN;
	int16_t x410 = INT16_MAX;
	int64_t x411 = -1LL;
	volatile int64_t t95 = -327LL;

	t95 = ((x409&(x410^x411))-x412);

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x413 = UINT64_MAX;
	static uint8_t x415 = UINT8_MAX;
	volatile uint16_t x416 = UINT16_MAX;
	volatile uint64_t t96 = 2521720LLU;

	t96 = ((x413&(x414^x415))-x416);

	if (t96 != 18446744073592757047LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x419 = -1;
	uint16_t x420 = 26392U;
	volatile uint32_t t97 = 155503U;

	t97 = ((x417&(x418^x419))-x420);

	if (t97 != 4280413672U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x421 = INT64_MAX;
	static int16_t x422 = -1;
	static int8_t x424 = INT8_MIN;
	int64_t t98 = -6291LL;

	t98 = ((x421&(x422^x423))-x424);

	if (t98 != 138LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = INT16_MIN;
	volatile int16_t x427 = -7658;
	int32_t t99 = -14228;

	t99 = ((x425&(x426^x427))-x428);

	if (t99 != -32640) { NG(); } else { ; }
	
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

