#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 80;
uint64_t t0 = 27547752785361814LLU;
volatile uint16_t x7 = UINT16_MAX;
int8_t x10 = INT8_MIN;
volatile uint32_t x14 = UINT32_MAX;
int16_t x20 = INT16_MIN;
int8_t x21 = -22;
int64_t x23 = -1LL;
volatile uint8_t x24 = 79U;
int32_t x44 = -46;
uint64_t t11 = 705355LLU;
int16_t x50 = 10;
int32_t x55 = INT32_MIN;
int32_t t13 = -98888;
volatile int32_t x65 = 7688083;
int8_t x68 = INT8_MIN;
volatile int32_t x71 = 102;
volatile uint64_t t18 = 51732034759637LLU;
uint64_t t20 = 20259LLU;
static volatile int32_t x105 = -1;
int64_t x109 = -1LL;
static uint32_t x111 = 233593323U;
int16_t x113 = INT16_MIN;
static int64_t x115 = INT64_MIN;
int64_t x124 = -1LL;
int32_t x128 = 215429;
int64_t t29 = -84199013695535LL;
static int32_t x129 = 1485;
uint8_t x133 = 1U;
static volatile uint64_t x138 = UINT64_MAX;
int64_t x140 = INT64_MIN;
int32_t x147 = INT32_MIN;
int16_t x153 = 1;
uint16_t x157 = UINT16_MAX;
static volatile int64_t t37 = 13663LL;
int64_t x161 = INT64_MIN;
uint8_t x163 = 9U;
uint16_t x166 = UINT16_MAX;
uint64_t x178 = 3LLU;
int16_t x182 = INT16_MAX;
int64_t x195 = INT64_MIN;
int8_t x198 = INT8_MIN;
uint16_t x203 = 786U;
int32_t x207 = -125;
uint8_t x210 = 0U;
int16_t x211 = 3;
int16_t x231 = INT16_MIN;
static int16_t x232 = INT16_MIN;
volatile int8_t x236 = INT8_MAX;
int8_t x237 = 6;
int32_t x241 = INT32_MIN;
int32_t t54 = 385154585;
uint64_t x249 = 215707649LLU;
static volatile int64_t x252 = 96369175005185718LL;
static int32_t x255 = 203744;
int16_t x256 = INT16_MIN;
volatile int8_t x257 = 5;
int64_t t58 = -1749895448693664307LL;
int64_t x268 = INT64_MIN;
int64_t x269 = INT64_MAX;
static uint16_t x271 = 100U;
uint32_t x275 = UINT32_MAX;
uint64_t t63 = 2773535802LLU;
static uint8_t x281 = 52U;
volatile int8_t x295 = -7;
int64_t x318 = 22725270232013331LL;
int32_t x321 = 3897374;
int16_t x325 = -1;
int32_t x327 = INT32_MIN;
int32_t x334 = INT32_MIN;
uint32_t x335 = UINT32_MAX;
volatile uint16_t x342 = 198U;
volatile int64_t t78 = 26406LL;
int8_t x345 = INT8_MIN;
int32_t t81 = 1366223;
uint64_t x362 = UINT64_MAX;
volatile uint64_t t83 = 1136265694583LLU;
static int64_t x365 = INT64_MIN;
uint64_t x366 = 3769432575866301LLU;
volatile int32_t x368 = INT32_MIN;
static int32_t x369 = INT32_MIN;
static int32_t t87 = 3809;
int32_t x391 = -332;
int8_t x410 = INT8_MIN;
volatile int64_t t95 = 11428748LL;
static int8_t x416 = -1;
uint32_t x420 = UINT32_MAX;
static int64_t x422 = INT64_MAX;


void f0(void) {
	uint64_t x1 = 5581897560LLU;
	uint16_t x2 = 4318U;
	static int32_t x3 = INT32_MIN;

	t0 = (((x1&x2)%x3)+x4);

	if (t0 != 4264LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1403;
	volatile int16_t x6 = -1;
	static int8_t x8 = -1;
	volatile int32_t t1 = -5019;

	t1 = (((x5&x6)%x7)+x8);

	if (t1 != -1404) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 2064U;
	uint32_t x11 = 90930201U;
	volatile uint32_t x12 = UINT32_MAX;
	uint32_t t2 = 96665250U;

	t2 = (((x9&x10)%x11)+x12);

	if (t2 != 2047U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	int32_t x15 = -1;
	volatile uint16_t x16 = 7U;
	volatile uint32_t t3 = 6967936U;

	t3 = (((x13&x14)%x15)+x16);

	if (t3 != 134U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	uint16_t x18 = 6U;
	int16_t x19 = INT16_MIN;
	int64_t t4 = -1002LL;

	t4 = (((x17&x18)%x19)+x20);

	if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x22 = 3630U;
	int64_t t5 = -779523444540859LL;

	t5 = (((x21&x22)%x23)+x24);

	if (t5 != 79LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 1542367669363548LLU;
	int16_t x26 = INT16_MIN;
	int64_t x27 = INT64_MIN;
	int32_t x28 = -30312941;
	volatile uint64_t t6 = 732185999764303LLU;

	t6 = (((x25&x26)%x27)+x28);

	if (t6 != 1542367639041555LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int64_t x30 = INT64_MIN;
	volatile uint8_t x31 = 43U;
	int8_t x32 = -1;
	volatile uint64_t t7 = 4887LLU;

	t7 = (((x29&x30)%x31)+x32);

	if (t7 != 41LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	int64_t x34 = -1LL;
	static uint16_t x35 = UINT16_MAX;
	uint32_t x36 = 979U;
	int64_t t8 = -233294892333195LL;

	t8 = (((x33&x34)%x35)+x36);

	if (t8 != 978LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MIN;
	uint8_t x39 = UINT8_MAX;
	volatile int64_t x40 = 670LL;
	volatile int64_t t9 = -14445270497LL;

	t9 = (((x37&x38)%x39)+x40);

	if (t9 != 542LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	static uint8_t x42 = 64U;
	uint32_t x43 = 12199361U;
	static uint32_t t10 = 3U;

	t10 = (((x41&x42)%x43)+x44);

	if (t10 != 18U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 22467819U;
	int64_t x46 = INT64_MIN;
	int32_t x47 = -47;
	uint64_t x48 = 29163200645LLU;

	t11 = (((x45&x46)%x47)+x48);

	if (t11 != 29163200645LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int8_t x51 = 47;
	uint8_t x52 = 0U;
	volatile int32_t t12 = -208;

	t12 = (((x49&x50)%x51)+x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 0;
	volatile int8_t x54 = INT8_MAX;
	uint8_t x56 = 55U;

	t13 = (((x53&x54)%x55)+x56);

	if (t13 != 55) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -3251105LL;
	uint64_t x58 = 1729317261408954344LLU;
	int32_t x59 = INT32_MIN;
	uint16_t x60 = 5703U;
	uint64_t t14 = 1LLU;

	t14 = (((x57&x58)%x59)+x60);

	if (t14 != 1729317261405747855LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 376691547026LLU;
	int64_t x62 = INT64_MIN;
	static int8_t x63 = INT8_MIN;
	int32_t x64 = 145300;
	volatile uint64_t t15 = 1303LLU;

	t15 = (((x61&x62)%x63)+x64);

	if (t15 != 145300LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x66 = INT64_MAX;
	int64_t x67 = 1LL;
	volatile int64_t t16 = -1684LL;

	t16 = (((x65&x66)%x67)+x68);

	if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -6576348807352269LL;
	int32_t x70 = INT32_MIN;
	volatile uint64_t x72 = 8898LLU;
	static uint64_t t17 = 211704291072918LLU;

	t17 = (((x69&x70)%x71)+x72);

	if (t17 != 8844LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	uint32_t x74 = UINT32_MAX;
	int32_t x75 = INT32_MIN;
	uint64_t x76 = 6976186510134460887LLU;

	t18 = (((x73&x74)%x75)+x76);

	if (t18 != 6976186510134526422LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 0;
	int8_t x78 = INT8_MIN;
	int8_t x79 = -1;
	volatile uint8_t x80 = UINT8_MAX;
	int32_t t19 = -3408;

	t19 = (((x77&x78)%x79)+x80);

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = 48844466LLU;
	uint16_t x82 = 175U;
	uint8_t x83 = UINT8_MAX;
	static int8_t x84 = INT8_MIN;

	t20 = (((x81&x82)%x83)+x84);

	if (t20 != 34LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -387804423;
	static volatile int64_t x86 = INT64_MIN;
	static int16_t x87 = INT16_MIN;
	uint16_t x88 = UINT16_MAX;
	static int64_t t21 = -1983751043LL;

	t21 = (((x85&x86)%x87)+x88);

	if (t21 != 65535LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = UINT16_MAX;
	uint8_t x94 = 79U;
	uint8_t x95 = 83U;
	int32_t x96 = -1;
	volatile int32_t t22 = -17485511;

	t22 = (((x93&x94)%x95)+x96);

	if (t22 != 78) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = 1;
	uint32_t x98 = 1U;
	volatile int64_t x99 = INT64_MAX;
	uint64_t x100 = UINT64_MAX;
	uint64_t t23 = 340007362LLU;

	t23 = (((x97&x98)%x99)+x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x106 = 398U;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = 283218;
	uint64_t t24 = 4857LLU;

	t24 = (((x105&x106)%x107)+x108);

	if (t24 != 283616LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x110 = 762LLU;
	int16_t x112 = INT16_MIN;
	volatile uint64_t t25 = 1279484702449204301LLU;

	t25 = (((x109&x110)%x111)+x112);

	if (t25 != 18446744073709519610LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x114 = INT32_MAX;
	int64_t x116 = 7661013LL;
	volatile int64_t t26 = 1939330LL;

	t26 = (((x113&x114)%x115)+x116);

	if (t26 != 2155111893LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 11U;
	static volatile uint64_t x118 = 1307915742789LLU;
	int16_t x119 = -1;
	int32_t x120 = -1;
	volatile uint64_t t27 = 16659650022173921LLU;

	t27 = (((x117&x118)%x119)+x120);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	static volatile int32_t x122 = 43372863;
	uint64_t x123 = 449846LLU;
	static uint64_t t28 = UINT64_MAX;

	t28 = (((x121&x122)%x123)+x124);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	volatile int64_t x126 = -11240376169930LL;
	int32_t x127 = INT32_MIN;

	t29 = (((x125&x126)%x127)+x128);

	if (t29 != -446543483LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x130 = 0;
	uint64_t x131 = UINT64_MAX;
	volatile uint64_t x132 = UINT64_MAX;
	uint64_t t30 = UINT64_MAX;

	t30 = (((x129&x130)%x131)+x132);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x134 = INT16_MIN;
	uint8_t x135 = 126U;
	int8_t x136 = INT8_MAX;
	volatile int32_t t31 = -172326;

	t31 = (((x133&x134)%x135)+x136);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 55309U;
	int32_t x139 = -779;
	volatile uint64_t t32 = 254943020968946620LLU;

	t32 = (((x137&x138)%x139)+x140);

	if (t32 != 9223372036854831117LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x141 = 2U;
	uint64_t x142 = UINT64_MAX;
	static uint16_t x143 = UINT16_MAX;
	volatile uint64_t x144 = UINT64_MAX;
	volatile uint64_t t33 = 27833451LLU;

	t33 = (((x141&x142)%x143)+x144);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = 62;
	static int32_t x146 = 16;
	uint32_t x148 = 0U;
	volatile uint32_t t34 = 16652148U;

	t34 = (((x145&x146)%x147)+x148);

	if (t34 != 16U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MAX;
	int16_t x150 = 0;
	int32_t x151 = -37;
	uint16_t x152 = 6489U;
	volatile int32_t t35 = 59329;

	t35 = (((x149&x150)%x151)+x152);

	if (t35 != 6489) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x154 = -1LL;
	uint64_t x155 = 69023957067264046LLU;
	uint16_t x156 = 3220U;
	volatile uint64_t t36 = 1723LLU;

	t36 = (((x153&x154)%x155)+x156);

	if (t36 != 3221LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x158 = INT8_MAX;
	int64_t x159 = -429009217931718464LL;
	volatile int32_t x160 = INT32_MAX;

	t37 = (((x157&x158)%x159)+x160);

	if (t37 != 2147483774LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x162 = -620889;
	volatile uint32_t x164 = UINT32_MAX;
	int64_t t38 = -4LL;

	t38 = (((x161&x162)%x163)+x164);

	if (t38 != 4294967287LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = 4U;
	uint32_t x167 = UINT32_MAX;
	volatile int8_t x168 = INT8_MIN;
	volatile uint32_t t39 = 1400780666U;

	t39 = (((x165&x166)%x167)+x168);

	if (t39 != 4294967172U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = UINT16_MAX;
	static int32_t x170 = 23890249;
	static volatile int32_t x171 = INT32_MIN;
	volatile int64_t x172 = 36957LL;
	volatile int64_t t40 = 1514425LL;

	t40 = (((x169&x170)%x171)+x172);

	if (t40 != 72102LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = 3716;
	uint64_t x179 = UINT64_MAX;
	volatile int64_t x180 = INT64_MIN;
	volatile uint64_t t41 = 5516835124LLU;

	t41 = (((x177&x178)%x179)+x180);

	if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x181 = -1;
	static volatile int32_t x183 = -146338008;
	static int8_t x184 = -1;
	volatile int32_t t42 = -249825;

	t42 = (((x181&x182)%x183)+x184);

	if (t42 != 32766) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x185 = INT64_MIN;
	uint8_t x186 = 9U;
	int16_t x187 = -570;
	int8_t x188 = -1;
	volatile int64_t t43 = -202797860940967547LL;

	t43 = (((x185&x186)%x187)+x188);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x193 = INT64_MIN;
	static uint32_t x194 = UINT32_MAX;
	uint32_t x196 = 19U;
	volatile int64_t t44 = 1522972630LL;

	t44 = (((x193&x194)%x195)+x196);

	if (t44 != 19LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x197 = 29U;
	int32_t x199 = -1;
	int8_t x200 = -1;
	static int32_t t45 = 1;

	t45 = (((x197&x198)%x199)+x200);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = 7;
	int16_t x202 = -1;
	int32_t x204 = INT32_MIN;
	static volatile int32_t t46 = 6966441;

	t46 = (((x201&x202)%x203)+x204);

	if (t46 != -2147483641) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = 3U;
	uint32_t x206 = 1461U;
	volatile int32_t x208 = -1;
	volatile uint32_t t47 = 185U;

	t47 = (((x205&x206)%x207)+x208);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x209 = 0U;
	int16_t x212 = -1;
	int32_t t48 = -6;

	t48 = (((x209&x210)%x211)+x212);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = 20274075081LLU;
	int16_t x218 = 0;
	uint8_t x219 = UINT8_MAX;
	static uint16_t x220 = 705U;
	uint64_t t49 = 3173261LLU;

	t49 = (((x217&x218)%x219)+x220);

	if (t49 != 705LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x225 = 13U;
	uint32_t x226 = 3487U;
	int8_t x227 = INT8_MAX;
	uint32_t x228 = 24055U;
	uint32_t t50 = 155677U;

	t50 = (((x225&x226)%x227)+x228);

	if (t50 != 24068U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x229 = INT32_MIN;
	uint64_t x230 = 267325388408222271LLU;
	static uint64_t t51 = 37518431LLU;

	t51 = (((x229&x230)%x231)+x232);

	if (t51 != 267325387342577664LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x233 = 0U;
	static int16_t x234 = INT16_MIN;
	static uint32_t x235 = 12U;
	uint32_t t52 = 58U;

	t52 = (((x233&x234)%x235)+x236);

	if (t52 != 127U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x238 = -1;
	int8_t x239 = INT8_MIN;
	volatile int32_t x240 = INT32_MIN;
	static int32_t t53 = 4506672;

	t53 = (((x237&x238)%x239)+x240);

	if (t53 != -2147483642) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x242 = -61;
	int8_t x243 = INT8_MAX;
	static volatile int8_t x244 = INT8_MAX;

	t54 = (((x241&x242)%x243)+x244);

	if (t54 != 119) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MIN;
	int16_t x247 = -116;
	int64_t x248 = 27838924817LL;
	static int64_t t55 = -23720108593981LL;

	t55 = (((x245&x246)%x247)+x248);

	if (t55 != 27838924805LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x250 = 2U;
	uint32_t x251 = UINT32_MAX;
	volatile uint64_t t56 = 66LLU;

	t56 = (((x249&x250)%x251)+x252);

	if (t56 != 96369175005185718LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x253 = INT8_MIN;
	static int32_t x254 = -1;
	volatile int32_t t57 = -206;

	t57 = (((x253&x254)%x255)+x256);

	if (t57 != -32896) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x258 = 7354605;
	uint16_t x259 = UINT16_MAX;
	int64_t x260 = 22LL;

	t58 = (((x257&x258)%x259)+x260);

	if (t58 != 27LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x261 = 690242U;
	uint64_t x262 = 3LLU;
	int32_t x263 = 272682411;
	volatile int8_t x264 = INT8_MIN;
	uint64_t t59 = 2973572355746LLU;

	t59 = (((x261&x262)%x263)+x264);

	if (t59 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x265 = UINT8_MAX;
	static volatile int64_t x266 = 372571572281457267LL;
	static int8_t x267 = INT8_MIN;
	volatile int64_t t60 = -527634538771010LL;

	t60 = (((x265&x266)%x267)+x268);

	if (t60 != -9223372036854775693LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x270 = INT8_MIN;
	int8_t x272 = 10;
	volatile int64_t t61 = 59107144LL;

	t61 = (((x269&x270)%x271)+x272);

	if (t61 != 90LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x273 = INT32_MIN;
	int16_t x274 = 8;
	int32_t x276 = INT32_MIN;
	volatile uint32_t t62 = 4006U;

	t62 = (((x273&x274)%x275)+x276);

	if (t62 != 2147483648U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x277 = UINT32_MAX;
	uint32_t x278 = 14722U;
	uint64_t x279 = UINT64_MAX;
	static volatile int32_t x280 = INT32_MIN;

	t63 = (((x277&x278)%x279)+x280);

	if (t63 != 18446744071562082690LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x282 = 37098009U;
	uint32_t x283 = 7U;
	int16_t x284 = INT16_MIN;
	volatile uint32_t t64 = 4504U;

	t64 = (((x281&x282)%x283)+x284);

	if (t64 != 4294934530U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x285 = INT64_MAX;
	int32_t x286 = INT32_MAX;
	int8_t x287 = 3;
	int16_t x288 = INT16_MIN;
	static int64_t t65 = 856410743934LL;

	t65 = (((x285&x286)%x287)+x288);

	if (t65 != -32767LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x289 = 0LLU;
	volatile uint8_t x290 = 0U;
	static volatile int8_t x291 = INT8_MAX;
	volatile uint32_t x292 = UINT32_MAX;
	uint64_t t66 = 1081332LLU;

	t66 = (((x289&x290)%x291)+x292);

	if (t66 != 4294967295LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x293 = INT64_MIN;
	static uint16_t x294 = 18384U;
	uint64_t x296 = 411899100813451LLU;
	volatile uint64_t t67 = 399388219064423LLU;

	t67 = (((x293&x294)%x295)+x296);

	if (t67 != 411899100813451LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x297 = -1;
	volatile int8_t x298 = 7;
	uint32_t x299 = 7347U;
	volatile uint64_t x300 = UINT64_MAX;
	uint64_t t68 = 386693137916LLU;

	t68 = (((x297&x298)%x299)+x300);

	if (t68 != 6LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = -276488799;
	uint64_t x302 = UINT64_MAX;
	volatile uint64_t x303 = 67511314905616LLU;
	volatile uint8_t x304 = 1U;
	volatile uint64_t t69 = 90886726347780548LLU;

	t69 = (((x301&x302)%x303)+x304);

	if (t69 != 19899937452594LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x305 = 2193958808628497163LLU;
	volatile int64_t x306 = -308646LL;
	int8_t x307 = INT8_MIN;
	uint32_t x308 = 27U;
	uint64_t t70 = 271191186253761577LLU;

	t70 = (((x305&x306)%x307)+x308);

	if (t70 != 2193958808628234789LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x309 = INT16_MIN;
	volatile int16_t x310 = INT16_MIN;
	volatile int16_t x311 = INT16_MIN;
	uint8_t x312 = 11U;
	static volatile int32_t t71 = 4012;

	t71 = (((x309&x310)%x311)+x312);

	if (t71 != 11) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x313 = UINT64_MAX;
	volatile int64_t x314 = INT64_MAX;
	static volatile int32_t x315 = -1;
	int32_t x316 = INT32_MIN;
	static uint64_t t72 = 12760143577413471LLU;

	t72 = (((x313&x314)%x315)+x316);

	if (t72 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x317 = 855U;
	volatile uint32_t x319 = 1U;
	uint64_t x320 = UINT64_MAX;
	static volatile uint64_t t73 = UINT64_MAX;

	t73 = (((x317&x318)%x319)+x320);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x322 = UINT32_MAX;
	volatile int32_t x323 = 16464141;
	int16_t x324 = -1;
	uint32_t t74 = 14U;

	t74 = (((x321&x322)%x323)+x324);

	if (t74 != 3897373U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x326 = 396;
	static int8_t x328 = 5;
	volatile int32_t t75 = 1;

	t75 = (((x325&x326)%x327)+x328);

	if (t75 != 401) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = INT16_MAX;
	static uint64_t x336 = 2513LLU;
	volatile uint64_t t76 = 3936039307538LLU;

	t76 = (((x333&x334)%x335)+x336);

	if (t76 != 2513LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = INT8_MAX;
	int16_t x338 = -1;
	int16_t x339 = INT16_MIN;
	int64_t x340 = 6564966933089LL;
	volatile int64_t t77 = -1088573505LL;

	t77 = (((x337&x338)%x339)+x340);

	if (t77 != 6564966933216LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x341 = 159692266LL;
	int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MIN;

	t78 = (((x341&x342)%x343)+x344);

	if (t78 != -62LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x346 = -61;
	volatile uint32_t x347 = 550U;
	uint32_t x348 = 0U;
	static volatile uint32_t t79 = 1664719341U;

	t79 = (((x345&x346)%x347)+x348);

	if (t79 != 118U) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x349 = INT64_MAX;
	uint32_t x350 = 9U;
	static volatile uint16_t x351 = 475U;
	volatile int64_t x352 = 9783893279804891LL;
	int64_t t80 = -1457891480LL;

	t80 = (((x349&x350)%x351)+x352);

	if (t80 != 9783893279804900LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x353 = 2;
	volatile int8_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	static uint8_t x356 = 32U;

	t81 = (((x353&x354)%x355)+x356);

	if (t81 != 34) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = -1LL;
	int32_t x358 = INT32_MIN;
	volatile uint8_t x359 = UINT8_MAX;
	int8_t x360 = INT8_MAX;
	volatile int64_t t82 = 106LL;

	t82 = (((x357&x358)%x359)+x360);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x361 = 7225255914888LLU;
	volatile uint8_t x363 = 4U;
	static volatile int32_t x364 = -315045;

	t83 = (((x361&x362)%x363)+x364);

	if (t83 != 18446744073709236571LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x367 = -1;
	uint64_t t84 = 11LLU;

	t84 = (((x365&x366)%x367)+x368);

	if (t84 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x370 = 64U;
	volatile int8_t x371 = -1;
	int32_t x372 = -1;
	static volatile int32_t t85 = 17169;

	t85 = (((x369&x370)%x371)+x372);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x373 = 0U;
	static volatile int8_t x374 = -1;
	int64_t x375 = INT64_MIN;
	int16_t x376 = -1;
	volatile int64_t t86 = -107025604LL;

	t86 = (((x373&x374)%x375)+x376);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x377 = -1;
	int32_t x378 = -1;
	volatile int16_t x379 = INT16_MAX;
	volatile int16_t x380 = -1;

	t87 = (((x377&x378)%x379)+x380);

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x381 = -1;
	int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MAX;
	int32_t t88 = -9403;

	t88 = (((x381&x382)%x383)+x384);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x385 = 1375U;
	static uint32_t x386 = UINT32_MAX;
	int64_t x387 = -232949289994150LL;
	static uint64_t x388 = UINT64_MAX;
	volatile uint64_t t89 = 1982751LLU;

	t89 = (((x385&x386)%x387)+x388);

	if (t89 != 1374LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = -1246LL;
	volatile int64_t x390 = INT64_MIN;
	uint32_t x392 = 774594U;
	static volatile int64_t t90 = 1LL;

	t90 = (((x389&x390)%x391)+x392);

	if (t90 != 774410LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x393 = 7;
	static int64_t x394 = INT64_MIN;
	static uint32_t x395 = UINT32_MAX;
	int32_t x396 = -1;
	static volatile int64_t t91 = -26913LL;

	t91 = (((x393&x394)%x395)+x396);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x397 = UINT32_MAX;
	int8_t x398 = INT8_MIN;
	int64_t x399 = INT64_MIN;
	uint32_t x400 = 0U;
	int64_t t92 = 786428178473581702LL;

	t92 = (((x397&x398)%x399)+x400);

	if (t92 != 4294967168LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x401 = 5U;
	int16_t x402 = -1;
	int32_t x403 = -539295;
	int32_t x404 = INT32_MIN;
	volatile int32_t t93 = -2;

	t93 = (((x401&x402)%x403)+x404);

	if (t93 != -2147483643) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x405 = 1;
	int8_t x406 = INT8_MIN;
	volatile int16_t x407 = -1;
	int32_t x408 = INT32_MIN;
	int32_t t94 = INT32_MIN;

	t94 = (((x405&x406)%x407)+x408);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x409 = -8383;
	int16_t x411 = -1;
	static int64_t x412 = -1LL;

	t95 = (((x409&x410)%x411)+x412);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x413 = 1778U;
	uint64_t x414 = 4089744452756557132LLU;
	uint32_t x415 = UINT32_MAX;
	uint64_t t96 = 1LLU;

	t96 = (((x413&x414)%x415)+x416);

	if (t96 != 1087LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x417 = 22997894U;
	volatile int16_t x418 = -744;
	int16_t x419 = INT16_MAX;
	volatile uint32_t t97 = 323198038U;

	t97 = (((x417&x418)%x419)+x420);

	if (t97 != 27580U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x421 = 89488508216046907LL;
	int64_t x423 = 4698888076814LL;
	uint8_t x424 = UINT8_MAX;
	int64_t t98 = 2LL;

	t98 = (((x421&x422)%x423)+x424);

	if (t98 != 2883681201346LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x425 = 202388958610223376LLU;
	int32_t x426 = INT32_MIN;
	static int64_t x427 = 3LL;
	volatile int32_t x428 = INT32_MIN;
	uint64_t t99 = 6781898290214341LLU;

	t99 = (((x425&x426)%x427)+x428);

	if (t99 != 18446744071562067968LLU) { NG(); } else { ; }
	
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

