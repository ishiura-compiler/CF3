#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x3 = 1287126079122LLU;
int64_t x6 = -1LL;
uint8_t x15 = UINT8_MAX;
volatile uint8_t x21 = UINT8_MAX;
volatile int64_t x25 = 1218760735LL;
int64_t x31 = -46098018859LL;
volatile int64_t x34 = INT64_MIN;
int16_t x36 = -1;
int8_t x37 = INT8_MIN;
static uint64_t t8 = 41931287LLU;
volatile uint64_t t10 = 2LLU;
int32_t x55 = INT32_MIN;
volatile int32_t x57 = INT32_MIN;
int64_t x60 = 7195339110LL;
volatile int64_t x62 = -743LL;
int32_t x66 = -828067645;
uint32_t x67 = 2U;
uint8_t x68 = UINT8_MAX;
int16_t x69 = -1786;
int16_t x70 = INT16_MIN;
static uint32_t x74 = 56193332U;
int64_t x77 = INT64_MAX;
int32_t t19 = -3466266;
int8_t x87 = -1;
static uint64_t x89 = 162386877240LLU;
int8_t x91 = -1;
int8_t x96 = 3;
uint64_t t23 = 183583709LLU;
int64_t x110 = -3818839620301LL;
static uint16_t x119 = 371U;
static uint64_t t27 = 291334392651LLU;
volatile int64_t x124 = -139229447637473LL;
volatile int16_t x126 = INT16_MIN;
static uint64_t t30 = 102001LLU;
int32_t x139 = 88;
uint32_t x152 = 0U;
volatile uint64_t t32 = 3411LLU;
static volatile int32_t t33 = -49;
volatile uint32_t x159 = UINT32_MAX;
int8_t x164 = -1;
int32_t x168 = -88102;
int32_t x171 = INT32_MAX;
uint64_t t37 = 268101413LLU;
static int8_t x173 = INT8_MAX;
int32_t x178 = -107;
int64_t x181 = INT64_MIN;
int16_t x183 = INT16_MAX;
int64_t x186 = -24124289073182LL;
int8_t x189 = 11;
int32_t x190 = INT32_MIN;
static volatile int32_t t45 = -3456223;
uint16_t x208 = UINT16_MAX;
int16_t x221 = INT16_MIN;
static int16_t x224 = INT16_MAX;
int64_t x226 = INT64_MAX;
uint64_t t51 = 13487543924404594LLU;
volatile uint32_t x243 = 450971U;
int64_t x250 = 3LL;
volatile int32_t x257 = INT32_MIN;
int8_t x259 = INT8_MIN;
uint16_t x260 = UINT16_MAX;
volatile int32_t t59 = -365152;
int32_t x268 = INT32_MAX;
int32_t t60 = -84;
int64_t x270 = INT64_MIN;
int16_t x279 = INT16_MIN;
int8_t x284 = 3;
uint32_t x287 = 47431U;
int32_t x289 = INT32_MIN;
int64_t x291 = -1LL;
uint8_t x301 = 13U;
static int64_t x307 = -576377456591042637LL;
int64_t x314 = INT64_MIN;
uint64_t t71 = 872043251LLU;
uint64_t x321 = 372358LLU;
int16_t x322 = INT16_MIN;
volatile int8_t x333 = -1;
uint16_t x335 = 0U;
volatile int64_t t74 = -1850673517LL;
uint8_t x338 = 27U;
static volatile int32_t t75 = -154359;
int64_t t76 = -5294644710LL;
int16_t x355 = INT16_MIN;
int32_t x356 = INT32_MIN;
volatile int64_t t78 = -357LL;
int8_t x365 = -1;
volatile uint32_t x368 = UINT32_MAX;
uint32_t t81 = 14852U;
uint16_t x378 = 459U;
volatile uint16_t x384 = 217U;
uint16_t x387 = UINT16_MAX;
int64_t x392 = INT64_MAX;
uint64_t t86 = 172575565729835LLU;
static volatile int16_t x393 = -1;
static uint8_t x394 = 4U;
int32_t x396 = INT32_MIN;
int64_t t87 = 13014571878533LL;
volatile int32_t x400 = 2820;
static int16_t x402 = INT16_MAX;
volatile int64_t t89 = -500346915968LL;
uint8_t x409 = 31U;
int64_t x411 = -11786519722941532LL;
int64_t t90 = 94427LL;
volatile uint64_t x414 = 489LLU;
static volatile int8_t x416 = INT8_MIN;
int32_t x423 = INT32_MAX;
int64_t x424 = -46534211LL;
uint8_t x428 = 5U;
static uint32_t x429 = UINT32_MAX;
static int8_t x439 = INT8_MIN;
static int32_t x443 = INT32_MIN;
static int8_t x447 = 59;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	uint8_t x2 = 1U;
	volatile int8_t x4 = INT8_MIN;
	static uint64_t t0 = 2614121430903544493LLU;

	t0 = ((x1|(x2^x3))+x4);

	if (t0 != 1287126079103LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -59LL;
	volatile int32_t x7 = INT32_MIN;
	int8_t x8 = -1;
	int64_t t1 = -99LL;

	t1 = ((x5|(x6^x7))+x8);

	if (t1 != -2LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile uint64_t x10 = 13301830LLU;
	int32_t x11 = -1;
	static int16_t x12 = INT16_MIN;
	volatile uint64_t t2 = 3681230338LLU;

	t2 = ((x9|(x10^x11))+x12);

	if (t2 != 18446744073696217017LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -745;
	int8_t x14 = INT8_MAX;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 67142075;

	t3 = ((x13|(x14^x15))+x16);

	if (t3 != -33385) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x22 = INT64_MAX;
	static uint32_t x23 = 2051U;
	uint64_t x24 = UINT64_MAX;
	uint64_t t4 = 373390LLU;

	t4 = ((x21|(x22^x23))+x24);

	if (t4 != 9223372036854773758LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x26 = INT64_MAX;
	uint16_t x27 = UINT16_MAX;
	int32_t x28 = INT32_MIN;
	static volatile int64_t t5 = -1LL;

	t5 = ((x25|(x26^x27))+x28);

	if (t5 != 9223372034707279903LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = 544171596674803LL;
	int8_t x30 = -7;
	int16_t x32 = INT16_MAX;
	int64_t t6 = 8889587977379339LL;

	t6 = ((x29|(x30^x31))+x32);

	if (t6 != 544172284606206LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = UINT64_MAX;
	int64_t x35 = INT64_MAX;
	uint64_t t7 = 2113927892LLU;

	t7 = ((x33|(x34^x35))+x36);

	if (t7 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = 0;
	uint64_t x39 = 14080439507526LLU;
	int32_t x40 = 1;

	t8 = ((x37|(x38^x39))+x40);

	if (t8 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = UINT32_MAX;
	volatile int8_t x42 = 3;
	static int8_t x43 = INT8_MIN;
	static int32_t x44 = INT32_MIN;
	static uint32_t t9 = 2299U;

	t9 = ((x41|(x42^x43))+x44);

	if (t9 != 2147483647U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MAX;
	uint64_t x46 = 618457238252174LLU;
	static uint8_t x47 = 7U;
	static uint16_t x48 = UINT16_MAX;

	t10 = ((x45|(x46^x47))+x48);

	if (t10 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 8186LLU;
	int32_t x50 = INT32_MIN;
	int16_t x51 = INT16_MIN;
	static uint16_t x52 = UINT16_MAX;
	volatile uint64_t t11 = 26LLU;

	t11 = ((x49|(x50^x51))+x52);

	if (t11 != 2147524601LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 775U;
	int16_t x54 = -3155;
	int32_t x56 = -1;
	int32_t t12 = -5445;

	t12 = ((x53|(x54^x55))+x56);

	if (t12 != 2147480494) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x58 = 1U;
	int32_t x59 = INT32_MAX;
	static volatile int64_t t13 = 33LL;

	t13 = ((x57|(x58^x59))+x60);

	if (t13 != 7195339108LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x61 = 55U;
	uint8_t x63 = 1U;
	volatile int16_t x64 = INT16_MIN;
	static int64_t t14 = -363LL;

	t14 = ((x61|(x62^x63))+x64);

	if (t14 != -33473LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	uint32_t t15 = 421060444U;

	t15 = ((x65|(x66^x67))+x68);

	if (t15 != 254U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x71 = 26216250965LLU;
	uint32_t x72 = 64445881U;
	volatile uint64_t t16 = 47LLU;

	t16 = ((x69|(x70^x71))+x72);

	if (t16 != 64445712LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = INT16_MIN;
	int8_t x75 = INT8_MIN;
	int16_t x76 = -1;
	uint32_t t17 = 11U;

	t17 = ((x73|(x74^x75))+x76);

	if (t17 != 4294938291U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x78 = UINT16_MAX;
	int32_t x79 = INT32_MIN;
	int16_t x80 = -1;
	int64_t t18 = -53536418709407268LL;

	t18 = ((x77|(x78^x79))+x80);

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = INT8_MIN;
	int16_t x82 = 15;
	static volatile int8_t x83 = -1;
	volatile int32_t x84 = -327711;

	t19 = ((x81|(x82^x83))+x84);

	if (t19 != -327727) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 7478U;
	uint16_t x86 = 0U;
	uint32_t x88 = 0U;
	static uint32_t t20 = UINT32_MAX;

	t20 = ((x85|(x86^x87))+x88);

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x90 = -3;
	volatile int64_t x92 = INT64_MIN;
	uint64_t t21 = 1277171LLU;

	t21 = ((x89|(x90^x91))+x92);

	if (t21 != 9223372199241653050LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 14823475U;
	int16_t x94 = -11829;
	uint16_t x95 = 1276U;
	uint32_t t22 = 5518499U;

	t22 = ((x93|(x94^x95))+x96);

	if (t22 != 4294964538U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	uint8_t x98 = 0U;
	int64_t x99 = -1LL;
	static volatile uint64_t x100 = 2447254LLU;

	t23 = ((x97|(x98^x99))+x100);

	if (t23 != 2447253LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -21499010LL;
	uint64_t x102 = UINT64_MAX;
	int64_t x103 = -45093448752840LL;
	uint8_t x104 = UINT8_MAX;
	volatile uint64_t t24 = 1LLU;

	t24 = ((x101|(x102^x103))+x104);

	if (t24 != 18446744073692774654LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x109 = -1;
	uint64_t x111 = 2289812698962783018LLU;
	int32_t x112 = -1;
	uint64_t t25 = 4LLU;

	t25 = ((x109|(x110^x111))+x112);

	if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MAX;
	static int32_t x114 = -1;
	int64_t x115 = -241891450945568587LL;
	static uint32_t x116 = 430481658U;
	int64_t t26 = 115965927222200LL;

	t26 = ((x113|(x114^x115))+x116);

	if (t26 != 241891452587122937LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 3814393486294LLU;
	uint16_t x118 = 13623U;
	int64_t x120 = -711487793871583LL;

	t27 = ((x117|(x118^x119))+x120);

	if (t27 != 18446036400309175543LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 480LLU;
	int16_t x122 = -1;
	int16_t x123 = INT16_MIN;
	uint64_t t28 = 233841LLU;

	t28 = ((x121|(x122^x123))+x124);

	if (t28 != 18446604844261946910LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = 1736792;
	int8_t x127 = -1;
	int16_t x128 = -716;
	int32_t t29 = 1;

	t29 = ((x125|(x126^x127))+x128);

	if (t29 != 1768755) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = 1594930592U;
	uint64_t x134 = UINT64_MAX;
	volatile int64_t x135 = INT64_MAX;
	volatile uint64_t x136 = 6774LLU;

	t30 = ((x133|(x134^x135))+x136);

	if (t30 != 9223372038449713174LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x137 = -1;
	volatile int8_t x138 = INT8_MAX;
	static int16_t x140 = INT16_MIN;
	int32_t t31 = 12425825;

	t31 = ((x137|(x138^x139))+x140);

	if (t31 != -32769) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x149 = 64LLU;
	int32_t x150 = -1;
	static int32_t x151 = 31026;

	t32 = ((x149|(x150^x151))+x152);

	if (t32 != 18446744073709520589LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = UINT8_MAX;
	static int16_t x154 = INT16_MIN;
	uint16_t x155 = 1031U;
	uint8_t x156 = UINT8_MAX;

	t33 = ((x153|(x154^x155))+x156);

	if (t33 != -31234) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = -1LL;
	uint64_t x158 = UINT64_MAX;
	int64_t x160 = INT64_MAX;
	volatile uint64_t t34 = 340LLU;

	t34 = ((x157|(x158^x159))+x160);

	if (t34 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = 52;
	uint8_t x162 = 39U;
	uint32_t x163 = 37461U;
	volatile uint32_t t35 = 1U;

	t35 = ((x161|(x162^x163))+x164);

	if (t35 != 37493U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = INT8_MAX;
	uint8_t x166 = 7U;
	int64_t x167 = 1105394LL;
	int64_t t36 = -105LL;

	t36 = ((x165|(x166^x167))+x168);

	if (t36 != 1017305LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = 28U;
	static int32_t x170 = INT32_MAX;
	uint64_t x172 = UINT64_MAX;

	t37 = ((x169|(x170^x171))+x172);

	if (t37 != 27LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x174 = UINT64_MAX;
	int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;
	volatile uint64_t t38 = 498661LLU;

	t38 = ((x173|(x174^x175))+x176);

	if (t38 != 32639LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = 54155U;
	volatile int32_t x179 = 1;
	int16_t x180 = INT16_MIN;
	volatile uint32_t t39 = 1U;

	t39 = ((x177|(x178^x179))+x180);

	if (t39 != 4294934431U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x182 = INT16_MIN;
	volatile int64_t x184 = INT64_MAX;
	volatile int64_t t40 = 47LL;

	t40 = ((x181|(x182^x183))+x184);

	if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = -1;
	int64_t x187 = INT64_MIN;
	int32_t x188 = -1;
	int64_t t41 = -27933372326249LL;

	t41 = ((x185|(x186^x187))+x188);

	if (t41 != -2LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x191 = UINT32_MAX;
	int32_t x192 = INT32_MIN;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = ((x189|(x190^x191))+x192);

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = 3;
	int64_t x195 = 607554LL;
	int32_t x196 = -417884846;
	volatile int64_t t43 = 225189947775722LL;

	t43 = ((x193|(x194^x195))+x196);

	if (t43 != -417884909LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = -421;
	uint8_t x198 = UINT8_MAX;
	int64_t x199 = INT64_MIN;
	int8_t x200 = 40;
	int64_t t44 = -4179364LL;

	t44 = ((x197|(x198^x199))+x200);

	if (t44 != -217LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x201 = -5;
	uint16_t x202 = 13897U;
	volatile int8_t x203 = 30;
	uint8_t x204 = 26U;

	t45 = ((x201|(x202^x203))+x204);

	if (t45 != 25) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MAX;
	uint8_t x206 = 4U;
	static int16_t x207 = -1;
	volatile int32_t t46 = -331927877;

	t46 = ((x205|(x206^x207))+x208);

	if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x209 = -1;
	uint64_t x210 = UINT64_MAX;
	volatile int8_t x211 = -3;
	int64_t x212 = -1LL;
	static uint64_t t47 = 5002226411752396698LLU;

	t47 = ((x209|(x210^x211))+x212);

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x217 = 3U;
	uint32_t x218 = UINT32_MAX;
	uint32_t x219 = 4117U;
	int8_t x220 = INT8_MIN;
	volatile uint32_t t48 = 481760448U;

	t48 = ((x217|(x218^x219))+x220);

	if (t48 != 4294963051U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x222 = INT32_MIN;
	static uint64_t x223 = UINT64_MAX;
	static uint64_t t49 = 2017357650LLU;

	t49 = ((x221|(x222^x223))+x224);

	if (t49 != 32766LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x225 = 0U;
	uint8_t x227 = 0U;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t50 = 61422LLU;

	t50 = ((x225|(x226^x227))+x228);

	if (t50 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x229 = 136074295U;
	uint64_t x230 = 1401977504084252LLU;
	volatile int64_t x231 = 1843428912LL;
	uint8_t x232 = 11U;

	t51 = ((x229|(x230^x231))+x232);

	if (t51 != 1401977166454602LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x233 = INT16_MIN;
	int64_t x234 = -170643986LL;
	volatile int8_t x235 = 5;
	int32_t x236 = INT32_MIN;
	int64_t t52 = 14862990887LL;

	t52 = ((x233|(x234^x235))+x236);

	if (t52 != -2147504661LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x237 = 738399LLU;
	static uint64_t x238 = 221385681702850750LLU;
	int16_t x239 = -1;
	volatile int16_t x240 = -1;
	uint64_t t53 = 28038LLU;

	t53 = ((x237|(x238^x239))+x240);

	if (t53 != 18225358392006766430LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x241 = INT32_MIN;
	int16_t x242 = INT16_MAX;
	int8_t x244 = 1;
	uint32_t t54 = 1299924795U;

	t54 = ((x241|(x242^x243))+x244);

	if (t54 != 2147917413U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x245 = 34U;
	volatile int32_t x246 = INT32_MIN;
	uint8_t x247 = 32U;
	uint16_t x248 = 478U;
	int32_t t55 = -6763723;

	t55 = ((x245|(x246^x247))+x248);

	if (t55 != -2147483136) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MIN;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = -1LL;
	static volatile uint64_t t56 = 3733332LLU;

	t56 = ((x249|(x250^x251))+x252);

	if (t56 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x254 = -65359826844308LL;
	uint64_t x255 = UINT64_MAX;
	int64_t x256 = -1004629850LL;
	volatile uint64_t t57 = 1129124776345999LLU;

	t57 = ((x253|(x254^x255))+x256);

	if (t57 != 65359807680677LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x258 = 1;
	volatile int32_t t58 = -276;

	t58 = ((x257|(x258^x259))+x260);

	if (t58 != 65408) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x261 = UINT16_MAX;
	int8_t x262 = -1;
	static int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MIN;

	t59 = ((x261|(x262^x263))+x264);

	if (t59 != 65407) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = 14;
	volatile int16_t x267 = INT16_MAX;

	t60 = ((x265|(x266^x267))+x268);

	if (t60 != 32752) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = INT16_MIN;
	volatile uint64_t x271 = 67888450838LLU;
	static int32_t x272 = 40;
	uint64_t t61 = 86LLU;

	t61 = ((x269|(x270^x271))+x272);

	if (t61 != 18446744073709522238LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MAX;
	uint8_t x278 = 41U;
	volatile int16_t x280 = 0;
	int32_t t62 = -436913464;

	t62 = ((x277|(x278^x279))+x280);

	if (t62 != -32641) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = -1LL;
	uint64_t x282 = 13LLU;
	volatile int16_t x283 = 1;
	volatile uint64_t t63 = 7564643077779LLU;

	t63 = ((x281|(x282^x283))+x284);

	if (t63 != 2LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = 320;
	int8_t x286 = INT8_MIN;
	uint64_t x288 = UINT64_MAX;
	uint64_t t64 = 7LLU;

	t64 = ((x285|(x286^x287))+x288);

	if (t64 != 4294920134LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x290 = -3902;
	int32_t x292 = 13157292;
	volatile int64_t t65 = 14434596726857218LL;

	t65 = ((x289|(x290^x291))+x292);

	if (t65 != -2134322455LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = INT8_MIN;
	static uint8_t x294 = 0U;
	int64_t x295 = -35332512LL;
	int8_t x296 = INT8_MIN;
	volatile int64_t t66 = 3000391146313282329LL;

	t66 = ((x293|(x294^x295))+x296);

	if (t66 != -160LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x302 = INT64_MAX;
	int16_t x303 = INT16_MIN;
	volatile uint32_t x304 = 156612U;
	int64_t t67 = -15960123687509706LL;

	t67 = ((x301|(x302^x303))+x304);

	if (t67 != -9223372036854586429LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x305 = UINT16_MAX;
	volatile int16_t x306 = 117;
	int8_t x308 = 0;
	static volatile int64_t t68 = -12393LL;

	t68 = ((x305|(x306^x307))+x308);

	if (t68 != -576377456590979073LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x309 = 13U;
	int16_t x310 = INT16_MIN;
	int64_t x311 = 825328305151216841LL;
	int32_t x312 = INT32_MIN;
	static int64_t t69 = 1157903719133LL;

	t69 = ((x309|(x310^x311))+x312);

	if (t69 != -825328307298726707LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x313 = INT32_MIN;
	uint16_t x315 = 351U;
	int8_t x316 = INT8_MAX;
	static int64_t t70 = 244954LL;

	t70 = ((x313|(x314^x315))+x316);

	if (t70 != -2147483170LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x317 = 1177918497870LLU;
	uint32_t x318 = 37703182U;
	static int32_t x319 = -1;
	static int32_t x320 = INT32_MIN;

	t71 = ((x317|(x318^x319))+x320);

	if (t71 != 1178933523967LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x323 = UINT64_MAX;
	int16_t x324 = INT16_MIN;
	static uint64_t t72 = 31LLU;

	t72 = ((x321|(x322^x323))+x324);

	if (t72 != 360447LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = INT8_MAX;
	static uint16_t x330 = 21807U;
	volatile int16_t x331 = INT16_MIN;
	static int16_t x332 = INT16_MAX;
	volatile int32_t t73 = 746727;

	t73 = ((x329|(x330^x331))+x332);

	if (t73 != 21886) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x334 = -1LL;
	uint32_t x336 = 399168081U;

	t74 = ((x333|(x334^x335))+x336);

	if (t74 != 399168080LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x337 = INT32_MIN;
	static int32_t x339 = INT32_MIN;
	int32_t x340 = -1;

	t75 = ((x337|(x338^x339))+x340);

	if (t75 != -2147483622) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x341 = 39U;
	int64_t x342 = INT64_MIN;
	int8_t x343 = -1;
	int64_t x344 = INT64_MIN;

	t76 = ((x341|(x342^x343))+x344);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = INT16_MIN;
	uint64_t x346 = 876163LLU;
	static int8_t x347 = INT8_MAX;
	uint8_t x348 = UINT8_MAX;
	uint64_t t77 = 26695682920LLU;

	t77 = ((x345|(x346^x347))+x348);

	if (t77 != 18446744073709543419LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x353 = 1768253924U;
	int64_t x354 = INT64_MIN;

	t78 = ((x353|(x354^x355))+x356);

	if (t78 != 9223372034707286500LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x357 = UINT16_MAX;
	static int8_t x358 = -1;
	uint64_t x359 = UINT64_MAX;
	int8_t x360 = INT8_MIN;
	uint64_t t79 = 1LLU;

	t79 = ((x357|(x358^x359))+x360);

	if (t79 != 65407LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x361 = -31;
	static int8_t x362 = 1;
	static int64_t x363 = INT64_MIN;
	uint8_t x364 = UINT8_MAX;
	int64_t t80 = 792LL;

	t80 = ((x361|(x362^x363))+x364);

	if (t80 != 224LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x366 = INT8_MAX;
	int16_t x367 = -1;

	t81 = ((x365|(x366^x367))+x368);

	if (t81 != 4294967294U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = 0;
	int16_t x370 = INT16_MIN;
	static int16_t x371 = -1466;
	int64_t x372 = -1LL;
	int64_t t82 = 89002322347671041LL;

	t82 = ((x369|(x370^x371))+x372);

	if (t82 != 31301LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x377 = INT8_MAX;
	uint32_t x379 = UINT32_MAX;
	static uint8_t x380 = UINT8_MAX;
	volatile uint32_t t83 = 153518039U;

	t83 = ((x377|(x378^x379))+x380);

	if (t83 != 4294967166U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x381 = 174U;
	int8_t x382 = INT8_MIN;
	int64_t x383 = -46117531LL;
	int64_t t84 = -343LL;

	t84 = ((x381|(x382^x383))+x384);

	if (t84 != 46117832LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x385 = -3;
	int64_t x386 = -198122228888LL;
	int64_t x388 = -1LL;
	int64_t t85 = 3606913395309LL;

	t85 = ((x385|(x386^x387))+x388);

	if (t85 != -2LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x389 = UINT16_MAX;
	uint64_t x390 = 0LLU;
	uint8_t x391 = UINT8_MAX;

	t86 = ((x389|(x390^x391))+x392);

	if (t86 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x395 = -1LL;

	t87 = ((x393|(x394^x395))+x396);

	if (t87 != -2147483649LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x397 = INT8_MAX;
	int16_t x398 = -90;
	int64_t x399 = 41805805983721621LL;
	int64_t t88 = -311120516505530262LL;

	t88 = ((x397|(x398^x399))+x400);

	if (t88 != -41805805983718781LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x401 = -1;
	int8_t x403 = 58;
	int64_t x404 = INT64_MAX;

	t89 = ((x401|(x402^x403))+x404);

	if (t89 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x410 = INT8_MIN;
	uint32_t x412 = 10548U;

	t90 = ((x409|(x410^x411))+x412);

	if (t90 != 11786519722952051LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x413 = 12;
	int64_t x415 = INT64_MAX;
	static volatile uint64_t t91 = 425685497LLU;

	t91 = ((x413|(x414^x415))+x416);

	if (t91 != 9223372036854775198LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x417 = 577U;
	volatile uint64_t x418 = UINT64_MAX;
	int8_t x419 = -1;
	static int8_t x420 = INT8_MIN;
	volatile uint64_t t92 = 50753734698153LLU;

	t92 = ((x417|(x418^x419))+x420);

	if (t92 != 449LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x421 = INT8_MIN;
	int64_t x422 = INT64_MAX;
	volatile int64_t t93 = -1814537LL;

	t93 = ((x421|(x422^x423))+x424);

	if (t93 != -46534339LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x425 = 67526;
	volatile int16_t x426 = INT16_MAX;
	uint32_t x427 = 323U;
	uint32_t t94 = 542775U;

	t94 = ((x425|(x426^x427))+x428);

	if (t94 != 98307U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x430 = INT16_MIN;
	int16_t x431 = 582;
	int8_t x432 = INT8_MIN;
	volatile uint32_t t95 = 3956U;

	t95 = ((x429|(x430^x431))+x432);

	if (t95 != 4294967167U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x433 = INT64_MAX;
	uint16_t x434 = 6040U;
	static int16_t x435 = INT16_MIN;
	static int16_t x436 = INT16_MAX;
	static volatile int64_t t96 = -127LL;

	t96 = ((x433|(x434^x435))+x436);

	if (t96 != 32766LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x437 = -1;
	uint32_t x438 = 1772857451U;
	uint16_t x440 = 1U;
	static uint32_t t97 = 226319U;

	t97 = ((x437|(x438^x439))+x440);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x441 = -1;
	static int32_t x442 = INT32_MIN;
	uint64_t x444 = UINT64_MAX;
	volatile uint64_t t98 = 3235240LLU;

	t98 = ((x441|(x442^x443))+x444);

	if (t98 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x445 = UINT16_MAX;
	uint32_t x446 = UINT32_MAX;
	volatile int32_t x448 = INT32_MIN;
	uint32_t t99 = 982864409U;

	t99 = ((x445|(x446^x447))+x448);

	if (t99 != 2147483647U) { NG(); } else { ; }
	
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

