#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 1U;
uint32_t x6 = 111895556U;
uint32_t x7 = UINT32_MAX;
int8_t x8 = INT8_MIN;
volatile int64_t x18 = -651460556090505036LL;
volatile int8_t x20 = -1;
uint8_t x21 = UINT8_MAX;
int64_t x23 = 456LL;
static volatile int64_t x32 = -1LL;
volatile int64_t t6 = 2670320023097091162LL;
static volatile uint16_t x34 = 0U;
uint8_t x37 = 0U;
static volatile uint32_t t8 = 3579U;
int16_t x51 = INT16_MIN;
int32_t t11 = 0;
uint32_t t12 = 161479124U;
volatile int16_t x58 = -362;
int64_t x62 = INT64_MIN;
uint64_t x64 = UINT64_MAX;
uint64_t t14 = 42683381584LLU;
static volatile int64_t x69 = 208332LL;
volatile int32_t x70 = 742;
int32_t x72 = -1;
int16_t x82 = -1;
int16_t x83 = INT16_MIN;
static int32_t x113 = -1;
int64_t x115 = -3LL;
uint16_t x117 = 289U;
int16_t x122 = -227;
int32_t x123 = INT32_MAX;
uint64_t x124 = 4005695357777326LLU;
int32_t t27 = 360730316;
int8_t x135 = 15;
int16_t x146 = INT16_MIN;
static int32_t x154 = -524044138;
int32_t x155 = INT32_MIN;
static uint8_t x160 = UINT8_MAX;
uint64_t x163 = UINT64_MAX;
static uint64_t x167 = 1996466770LLU;
int32_t x169 = INT32_MAX;
static int16_t x176 = INT16_MIN;
int32_t x178 = -113;
uint8_t x183 = 97U;
int64_t x188 = INT64_MIN;
int8_t x189 = INT8_MIN;
int64_t t41 = 0LL;
uint64_t t42 = 8318856293041LLU;
int32_t x202 = -20719;
volatile int32_t x203 = INT32_MIN;
volatile int32_t t45 = 141956324;
static int64_t x210 = INT64_MIN;
static int8_t x212 = INT8_MIN;
uint32_t x240 = 39U;
static volatile int64_t x246 = -1LL;
static int8_t x253 = INT8_MIN;
volatile uint32_t t58 = 15296U;
uint8_t x265 = UINT8_MAX;
uint8_t x271 = 0U;
volatile int8_t x278 = INT8_MAX;
volatile int64_t x283 = -1LL;
int64_t x286 = INT64_MAX;
uint32_t t64 = 24762U;
int32_t x289 = INT32_MIN;
static int16_t x292 = 3;
volatile int32_t x295 = INT32_MIN;
int64_t x297 = INT64_MIN;
int32_t t67 = 0;
uint8_t x301 = 29U;
static volatile uint64_t x302 = 118972120186765102LLU;
uint16_t x303 = UINT16_MAX;
volatile int32_t t68 = 140;
int32_t x306 = INT32_MAX;
volatile int64_t t69 = 81899726650LL;
volatile int16_t x313 = INT16_MAX;
int32_t x316 = INT32_MIN;
uint64_t x318 = 166232267LLU;
int32_t t73 = -1;
int64_t x335 = -223671086038LL;
int16_t x340 = -4867;
static uint32_t x341 = 1U;
int32_t x342 = 389;
int64_t x343 = INT64_MAX;
uint64_t t76 = 38LLU;
int8_t x346 = INT8_MAX;
int64_t x350 = INT64_MAX;
static uint16_t x354 = 2U;
int16_t x359 = INT16_MIN;
uint64_t x367 = 582356483790867736LLU;
int64_t x369 = INT64_MIN;
int64_t x372 = INT64_MIN;
volatile int64_t t83 = -2521603907LL;
static volatile uint64_t x377 = UINT64_MAX;
int64_t x384 = 46277047551008LL;
int64_t t85 = -60347LL;
int64_t t86 = 3LL;
int64_t x394 = INT64_MAX;
int32_t t91 = 218078418;
int32_t x432 = 33093;
int16_t x437 = 286;
volatile int32_t t96 = 15;
volatile int16_t x447 = INT16_MIN;
volatile int64_t t97 = -4687389119759164LL;
int8_t x449 = -35;
uint32_t x450 = UINT32_MAX;
volatile int64_t t98 = 180630LL;
int32_t x455 = 46228027;


void f0(void) {
	uint32_t x1 = 54U;
	int64_t x2 = 158LL;
	static volatile uint32_t x3 = 3680558U;
	uint16_t x4 = 43U;

	t0 = ((x1<=x2)-(x3-x4));

	if (t0 != 4291286782U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static uint32_t t1 = 0U;

	t1 = ((x5<=x6)-(x7-x8));

	if (t1 != 4294967169U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	volatile int16_t x10 = 15;
	uint32_t x11 = UINT32_MAX;
	uint16_t x12 = UINT16_MAX;
	uint32_t t2 = 3U;

	t2 = ((x9<=x10)-(x11-x12));

	if (t2 != 65537U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint64_t x14 = 6LLU;
	uint64_t x15 = UINT64_MAX;
	static int32_t x16 = 98943;
	static volatile uint64_t t3 = 829050900914LLU;

	t3 = ((x13<=x14)-(x15-x16));

	if (t3 != 98944LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 933167268U;
	int8_t x19 = INT8_MIN;
	int32_t t4 = -35;

	t4 = ((x17<=x18)-(x19-x20));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = 5U;
	static int16_t x24 = INT16_MIN;
	int64_t t5 = -37LL;

	t5 = ((x21<=x22)-(x23-x24));

	if (t5 != -33224LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	int16_t x30 = INT16_MIN;
	int16_t x31 = INT16_MIN;

	t6 = ((x29<=x30)-(x31-x32));

	if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	int16_t x35 = -1;
	int16_t x36 = -1;
	int32_t t7 = 0;

	t7 = ((x33<=x34)-(x35-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x38 = 2013U;
	uint32_t x39 = 85031U;
	static volatile int8_t x40 = INT8_MIN;

	t8 = ((x37<=x38)-(x39-x40));

	if (t8 != 4294882138U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x41 = 952721LL;
	int64_t x42 = INT64_MIN;
	static volatile int64_t x43 = 25189471LL;
	static uint64_t x44 = UINT64_MAX;
	static volatile uint64_t t9 = 24663238449355732LLU;

	t9 = ((x41<=x42)-(x43-x44));

	if (t9 != 18446744073684362144LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -2227637149198LL;
	int32_t x46 = 7980;
	uint16_t x47 = 16U;
	uint8_t x48 = 1U;
	static volatile int32_t t10 = -1;

	t10 = ((x45<=x46)-(x47-x48));

	if (t10 != -14) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MAX;
	static volatile int16_t x50 = -1;
	uint16_t x52 = 4587U;

	t11 = ((x49<=x50)-(x51-x52));

	if (t11 != 37355) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = -1;
	uint16_t x54 = UINT16_MAX;
	uint8_t x55 = UINT8_MAX;
	static volatile uint32_t x56 = UINT32_MAX;

	t12 = ((x53<=x54)-(x55-x56));

	if (t12 != 4294967041U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = INT32_MIN;
	static uint64_t x59 = 3503LLU;
	uint64_t x60 = 3801248842975397LLU;
	static volatile uint64_t t13 = 218983253030267404LLU;

	t13 = ((x57<=x58)-(x59-x60));

	if (t13 != 3801248842971895LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -6;
	int8_t x63 = 1;

	t14 = ((x61<=x62)-(x63-x64));

	if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x71 = INT8_MAX;
	volatile int32_t t15 = -58;

	t15 = ((x69<=x70)-(x71-x72));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -2;
	int32_t x74 = INT32_MIN;
	uint64_t x75 = 40851LLU;
	int8_t x76 = -8;
	uint64_t t16 = 208559477LLU;

	t16 = ((x73<=x74)-(x75-x76));

	if (t16 != 18446744073709510757LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = 1;
	int64_t x84 = INT64_MIN;
	volatile int64_t t17 = -11113356481LL;

	t17 = ((x81<=x82)-(x83-x84));

	if (t17 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 6868LLU;
	static volatile int64_t x86 = -4LL;
	uint64_t x87 = 0LLU;
	uint64_t x88 = UINT64_MAX;
	uint64_t t18 = 3949708852LLU;

	t18 = ((x85<=x86)-(x87-x88));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x93 = 74;
	static int32_t x94 = -334245;
	int32_t x95 = -1;
	volatile uint64_t x96 = 63322188294452810LLU;
	uint64_t t19 = 264044888465666LLU;

	t19 = ((x93<=x94)-(x95-x96));

	if (t19 != 63322188294452811LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x101 = 0;
	int32_t x102 = INT32_MIN;
	static int8_t x103 = 6;
	static volatile int8_t x104 = 47;
	volatile int32_t t20 = -1419666;

	t20 = ((x101<=x102)-(x103-x104));

	if (t20 != 41) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x105 = UINT16_MAX;
	volatile int32_t x106 = -3257379;
	int64_t x107 = -1LL;
	static uint64_t x108 = 96496484246185LLU;
	static volatile uint64_t t21 = 63576591935227LLU;

	t21 = ((x105<=x106)-(x107-x108));

	if (t21 != 96496484246186LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = -91642;
	volatile int64_t x110 = -1LL;
	uint64_t x111 = UINT64_MAX;
	uint16_t x112 = UINT16_MAX;
	volatile uint64_t t22 = 15LLU;

	t22 = ((x109<=x110)-(x111-x112));

	if (t22 != 65537LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x114 = UINT64_MAX;
	volatile int8_t x116 = -1;
	volatile int64_t t23 = -4876711185630464LL;

	t23 = ((x113<=x114)-(x115-x116));

	if (t23 != 3LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x118 = 16720047240108LLU;
	int16_t x119 = INT16_MIN;
	int8_t x120 = INT8_MIN;
	int32_t t24 = -3083064;

	t24 = ((x117<=x118)-(x119-x120));

	if (t24 != 32641) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x121 = -1;
	volatile uint64_t t25 = 7512921338406845791LLU;

	t25 = ((x121<=x122)-(x123-x124));

	if (t25 != 4005693210293679LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x125 = 506U;
	static uint64_t x126 = 213670LLU;
	volatile uint64_t x127 = 8LLU;
	int16_t x128 = 16;
	uint64_t t26 = 30101798534LLU;

	t26 = ((x125<=x126)-(x127-x128));

	if (t26 != 9LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x129 = UINT16_MAX;
	uint16_t x130 = 14U;
	static int32_t x131 = 610805641;
	static int8_t x132 = 1;

	t27 = ((x129<=x130)-(x131-x132));

	if (t27 != -610805640) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MAX;
	static volatile int16_t x134 = -2;
	uint8_t x136 = 0U;
	int32_t t28 = -70888;

	t28 = ((x133<=x134)-(x135-x136));

	if (t28 != -15) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = 2U;
	int8_t x142 = INT8_MIN;
	int64_t x143 = 1106844835444945LL;
	int32_t x144 = INT32_MAX;
	static volatile int64_t t29 = -23794135356288117LL;

	t29 = ((x141<=x142)-(x143-x144));

	if (t29 != -1106842687961298LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = 102064568859085LL;
	int64_t x147 = INT64_MIN;
	volatile int16_t x148 = -1;
	volatile int64_t t30 = INT64_MAX;

	t30 = ((x145<=x146)-(x147-x148));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x149 = -62454692LL;
	int8_t x150 = -13;
	static volatile int32_t x151 = 54949864;
	int8_t x152 = -1;
	volatile int32_t t31 = -53339807;

	t31 = ((x149<=x150)-(x151-x152));

	if (t31 != -54949864) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = 4148535467299796115LLU;
	int64_t x156 = -1LL;
	volatile int64_t t32 = -107LL;

	t32 = ((x153<=x154)-(x155-x156));

	if (t32 != 2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x157 = INT64_MIN;
	int32_t x158 = INT32_MIN;
	int32_t x159 = -1;
	int32_t t33 = 0;

	t33 = ((x157<=x158)-(x159-x160));

	if (t33 != 257) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = -1LL;
	static volatile int8_t x162 = INT8_MAX;
	int8_t x164 = -1;
	static volatile uint64_t t34 = 102480476535114LLU;

	t34 = ((x161<=x162)-(x163-x164));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = -761;
	int16_t x166 = 47;
	int16_t x168 = -1;
	uint64_t t35 = 8118746924838LLU;

	t35 = ((x165<=x166)-(x167-x168));

	if (t35 != 18446744071713084846LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x170 = -70;
	int64_t x171 = -1972640010864LL;
	int64_t x172 = INT64_MIN;
	static int64_t t36 = 1LL;

	t36 = ((x169<=x170)-(x171-x172));

	if (t36 != -9223370064214764944LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x173 = INT64_MAX;
	volatile uint32_t x174 = 15693U;
	static uint32_t x175 = 8U;
	uint32_t t37 = 57U;

	t37 = ((x173<=x174)-(x175-x176));

	if (t37 != 4294934520U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x177 = INT16_MIN;
	uint8_t x179 = 2U;
	int64_t x180 = -1LL;
	volatile int64_t t38 = -467663263456LL;

	t38 = ((x177<=x178)-(x179-x180));

	if (t38 != -2LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = 334U;
	int8_t x182 = INT8_MIN;
	int32_t x184 = -1;
	int32_t t39 = -51678;

	t39 = ((x181<=x182)-(x183-x184));

	if (t39 != -98) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = INT8_MAX;
	int16_t x186 = -9244;
	int8_t x187 = -1;
	int64_t t40 = -557933312306LL;

	t40 = ((x185<=x186)-(x187-x188));

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x190 = 511U;
	int32_t x191 = 3908;
	volatile int64_t x192 = -1LL;

	t41 = ((x189<=x190)-(x191-x192));

	if (t41 != -3908LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = 4049;
	uint16_t x194 = UINT16_MAX;
	uint32_t x195 = UINT32_MAX;
	uint64_t x196 = 39001884488453600LLU;

	t42 = ((x193<=x194)-(x195-x196));

	if (t42 != 39001880193486306LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x197 = 68U;
	static int8_t x198 = 5;
	static uint32_t x199 = 7925U;
	static uint8_t x200 = 16U;
	uint32_t t43 = 77604334U;

	t43 = ((x197<=x198)-(x199-x200));

	if (t43 != 4294959387U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x201 = INT8_MIN;
	uint64_t x204 = UINT64_MAX;
	uint64_t t44 = 2425596397831LLU;

	t44 = ((x201<=x202)-(x203-x204));

	if (t44 != 2147483647LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = INT8_MAX;
	int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MAX;
	volatile int8_t x208 = -13;

	t45 = ((x205<=x206)-(x207-x208));

	if (t45 != -32780) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = -45;
	int32_t x211 = INT32_MIN;
	volatile int32_t t46 = 0;

	t46 = ((x209<=x210)-(x211-x212));

	if (t46 != 2147483520) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = INT8_MAX;
	int64_t x214 = INT64_MIN;
	static int16_t x215 = -1;
	volatile int64_t x216 = INT64_MIN;
	static volatile int64_t t47 = 187958430320LL;

	t47 = ((x213<=x214)-(x215-x216));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = 61;
	uint64_t x222 = 139278828274645436LLU;
	uint64_t x223 = 8958328971063918LLU;
	uint64_t x224 = 12792LLU;
	uint64_t t48 = 324LLU;

	t48 = ((x221<=x222)-(x223-x224));

	if (t48 != 18437785744738500491LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = -12450;
	int8_t x226 = -1;
	int8_t x227 = -1;
	uint32_t x228 = UINT32_MAX;
	volatile uint32_t t49 = 827745U;

	t49 = ((x225<=x226)-(x227-x228));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = INT8_MIN;
	volatile int32_t x230 = INT32_MAX;
	int16_t x231 = -1;
	int8_t x232 = -2;
	static volatile int32_t t50 = 8;

	t50 = ((x229<=x230)-(x231-x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = INT8_MAX;
	int32_t x234 = INT32_MIN;
	int8_t x235 = -1;
	int16_t x236 = 3917;
	volatile int32_t t51 = 0;

	t51 = ((x233<=x234)-(x235-x236));

	if (t51 != 3918) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x237 = -819134278433LL;
	uint32_t x238 = 1291219025U;
	uint32_t x239 = 414U;
	static uint32_t t52 = 922549894U;

	t52 = ((x237<=x238)-(x239-x240));

	if (t52 != 4294966922U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x241 = -1LL;
	static int16_t x242 = -1;
	volatile int32_t x243 = 40782902;
	static int16_t x244 = -1;
	volatile int32_t t53 = -27014;

	t53 = ((x241<=x242)-(x243-x244));

	if (t53 != -40782902) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x245 = INT16_MIN;
	uint8_t x247 = 10U;
	static int64_t x248 = -1LL;
	volatile int64_t t54 = 412173094301LL;

	t54 = ((x245<=x246)-(x247-x248));

	if (t54 != -10LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x249 = INT32_MIN;
	uint16_t x250 = 77U;
	uint64_t x251 = UINT64_MAX;
	int8_t x252 = INT8_MAX;
	uint64_t t55 = 2178315LLU;

	t55 = ((x249<=x250)-(x251-x252));

	if (t55 != 129LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x254 = 2031;
	uint8_t x255 = 14U;
	int8_t x256 = -3;
	static int32_t t56 = 6;

	t56 = ((x253<=x254)-(x255-x256));

	if (t56 != -16) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = 118LLU;
	static uint8_t x258 = 49U;
	int16_t x259 = -1;
	static volatile uint8_t x260 = 0U;
	int32_t t57 = -7;

	t57 = ((x257<=x258)-(x259-x260));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x261 = INT8_MIN;
	static int8_t x262 = -1;
	uint16_t x263 = 1702U;
	uint32_t x264 = 442767U;

	t58 = ((x261<=x262)-(x263-x264));

	if (t58 != 441066U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x266 = -4987;
	int32_t x267 = 7403;
	int32_t x268 = -1;
	volatile int32_t t59 = 12;

	t59 = ((x265<=x266)-(x267-x268));

	if (t59 != -7404) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = 25;
	volatile int8_t x270 = -1;
	uint16_t x272 = 4502U;
	volatile int32_t t60 = 52862;

	t60 = ((x269<=x270)-(x271-x272));

	if (t60 != 4502) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x273 = 384LL;
	int8_t x274 = INT8_MIN;
	int16_t x275 = -1;
	static volatile int64_t x276 = INT64_MIN;
	int64_t t61 = -2026316LL;

	t61 = ((x273<=x274)-(x275-x276));

	if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = INT16_MIN;
	int8_t x279 = INT8_MAX;
	uint8_t x280 = 12U;
	volatile int32_t t62 = 321427126;

	t62 = ((x277<=x278)-(x279-x280));

	if (t62 != -114) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = -11691193510726LL;
	int8_t x282 = INT8_MAX;
	uint32_t x284 = UINT32_MAX;
	volatile int64_t t63 = 106110051857082LL;

	t63 = ((x281<=x282)-(x283-x284));

	if (t63 != 4294967297LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x285 = INT8_MIN;
	uint32_t x287 = 3377766U;
	static int32_t x288 = -1;

	t64 = ((x285<=x286)-(x287-x288));

	if (t64 != 4291589530U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x290 = INT32_MAX;
	int64_t x291 = -6582454684LL;
	int64_t t65 = -5592LL;

	t65 = ((x289<=x290)-(x291-x292));

	if (t65 != 6582454688LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = -1LL;
	volatile int32_t x294 = -1;
	int8_t x296 = INT8_MIN;
	int32_t t66 = -30617133;

	t66 = ((x293<=x294)-(x295-x296));

	if (t66 != 2147483521) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x298 = INT16_MIN;
	volatile uint8_t x299 = UINT8_MAX;
	volatile int32_t x300 = INT32_MAX;

	t67 = ((x297<=x298)-(x299-x300));

	if (t67 != 2147483393) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x304 = UINT8_MAX;

	t68 = ((x301<=x302)-(x303-x304));

	if (t68 != -65279) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x305 = UINT8_MAX;
	volatile int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;

	t69 = ((x305<=x306)-(x307-x308));

	if (t69 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x309 = -2045246576384479801LL;
	int32_t x310 = INT32_MIN;
	static volatile uint64_t x311 = 4549LLU;
	int16_t x312 = INT16_MIN;
	static volatile uint64_t t70 = 272763326849969LLU;

	t70 = ((x309<=x310)-(x311-x312));

	if (t70 != 18446744073709514300LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x314 = INT8_MIN;
	static int32_t x315 = -473;
	volatile int32_t t71 = -44179;

	t71 = ((x313<=x314)-(x315-x316));

	if (t71 != -2147483175) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x317 = 49U;
	uint64_t x319 = UINT64_MAX;
	static int8_t x320 = INT8_MIN;
	static uint64_t t72 = 54461796350045LLU;

	t72 = ((x317<=x318)-(x319-x320));

	if (t72 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x321 = UINT16_MAX;
	int32_t x322 = INT32_MIN;
	uint8_t x323 = 70U;
	uint16_t x324 = 29U;

	t73 = ((x321<=x322)-(x323-x324));

	if (t73 != -41) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x333 = INT16_MIN;
	static uint32_t x334 = 14187U;
	volatile int64_t x336 = INT64_MIN;
	int64_t t74 = -64870LL;

	t74 = ((x333<=x334)-(x335-x336));

	if (t74 != -9223371813183689770LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x337 = -22LL;
	volatile uint64_t x338 = 245LLU;
	int32_t x339 = INT32_MIN;
	static volatile int32_t t75 = 5841;

	t75 = ((x337<=x338)-(x339-x340));

	if (t75 != 2147478781) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x344 = 326LLU;

	t76 = ((x341<=x342)-(x343-x344));

	if (t76 != 9223372036854776136LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x345 = 106U;
	static int16_t x347 = INT16_MAX;
	int32_t x348 = 180704091;
	static int32_t t77 = 238;

	t77 = ((x345<=x346)-(x347-x348));

	if (t77 != 180671325) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x349 = 262U;
	int32_t x351 = INT32_MIN;
	uint64_t x352 = 59509673107270LLU;
	volatile uint64_t t78 = 4799951873556860LLU;

	t78 = ((x349<=x350)-(x351-x352));

	if (t78 != 59511820590919LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x353 = INT16_MAX;
	volatile int8_t x355 = INT8_MAX;
	static volatile int64_t x356 = INT64_MAX;
	int64_t t79 = 269775885259LL;

	t79 = ((x353<=x354)-(x355-x356));

	if (t79 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x357 = 247334562843LLU;
	int32_t x358 = INT32_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t80 = 93082179;

	t80 = ((x357<=x358)-(x359-x360));

	if (t80 != 32640) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = INT8_MAX;
	int16_t x362 = INT16_MIN;
	uint16_t x363 = 61U;
	volatile uint8_t x364 = 2U;
	int32_t t81 = 25782953;

	t81 = ((x361<=x362)-(x363-x364));

	if (t81 != -59) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x365 = -15;
	uint64_t x366 = UINT64_MAX;
	int16_t x368 = -29;
	uint64_t t82 = 47075628236LLU;

	t82 = ((x365<=x366)-(x367-x368));

	if (t82 != 17864387589918683852LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x370 = INT32_MIN;
	volatile int16_t x371 = INT16_MIN;

	t83 = ((x369<=x370)-(x371-x372));

	if (t83 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x378 = UINT8_MAX;
	volatile int64_t x379 = -1LL;
	volatile int16_t x380 = -1;
	volatile int64_t t84 = 320044091810286LL;

	t84 = ((x377<=x378)-(x379-x380));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x381 = 190U;
	int64_t x382 = INT64_MIN;
	volatile int8_t x383 = INT8_MAX;

	t85 = ((x381<=x382)-(x383-x384));

	if (t85 != 46277047550881LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = INT32_MAX;
	uint16_t x386 = 930U;
	uint8_t x387 = UINT8_MAX;
	static int64_t x388 = 34017LL;

	t86 = ((x385<=x386)-(x387-x388));

	if (t86 != 33762LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x393 = UINT8_MAX;
	int16_t x395 = INT16_MIN;
	volatile uint64_t x396 = 53856LLU;
	uint64_t t87 = 82927620661365LLU;

	t87 = ((x393<=x394)-(x395-x396));

	if (t87 != 86625LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x397 = INT16_MAX;
	volatile uint8_t x398 = 1U;
	int32_t x399 = -1;
	static int16_t x400 = -1;
	volatile int32_t t88 = 1;

	t88 = ((x397<=x398)-(x399-x400));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x405 = UINT64_MAX;
	static uint8_t x406 = 116U;
	int32_t x407 = INT32_MIN;
	int32_t x408 = INT32_MIN;
	int32_t t89 = 480604177;

	t89 = ((x405<=x406)-(x407-x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x413 = -33526659681452526LL;
	int64_t x414 = 1939596235845LL;
	static uint32_t x415 = 0U;
	static uint64_t x416 = UINT64_MAX;
	uint64_t t90 = 7981807564LLU;

	t90 = ((x413<=x414)-(x415-x416));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x417 = -1818;
	uint32_t x418 = UINT32_MAX;
	uint8_t x419 = UINT8_MAX;
	static uint16_t x420 = UINT16_MAX;

	t91 = ((x417<=x418)-(x419-x420));

	if (t91 != 65281) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x425 = 4013U;
	uint32_t x426 = 26845284U;
	int32_t x427 = 26;
	volatile int32_t x428 = -16927;
	int32_t t92 = 7;

	t92 = ((x425<=x426)-(x427-x428));

	if (t92 != -16952) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x429 = 4;
	int32_t x430 = -933997395;
	volatile uint32_t x431 = UINT32_MAX;
	volatile uint32_t t93 = 189518587U;

	t93 = ((x429<=x430)-(x431-x432));

	if (t93 != 33094U) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x433 = -1;
	static volatile int64_t x434 = INT64_MIN;
	uint64_t x435 = 69886122443470LLU;
	static int32_t x436 = INT32_MIN;
	uint64_t t94 = 1917LLU;

	t94 = ((x433<=x434)-(x435-x436));

	if (t94 != 18446674185439624498LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x438 = 3311040;
	int64_t x439 = 43736694552162LL;
	int64_t x440 = INT64_MAX;
	static int64_t t95 = 23781290061LL;

	t95 = ((x437<=x438)-(x439-x440));

	if (t95 != 9223328300160223646LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x441 = 501U;
	int8_t x442 = 18;
	volatile int8_t x443 = -1;
	int8_t x444 = -31;

	t96 = ((x441<=x442)-(x443-x444));

	if (t96 != -30) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = -1658;
	static uint8_t x446 = 1U;
	int64_t x448 = -67663242710393942LL;

	t97 = ((x445<=x446)-(x447-x448));

	if (t97 != -67663242710361173LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x451 = 3739001937861626274LL;
	uint8_t x452 = 24U;

	t98 = ((x449<=x450)-(x451-x452));

	if (t98 != -3739001937861626249LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x453 = INT32_MAX;
	uint64_t x454 = 2678172709329845LLU;
	int8_t x456 = INT8_MAX;
	int32_t t99 = 1963846;

	t99 = ((x453<=x454)-(x455-x456));

	if (t99 != -46227899) { NG(); } else { ; }
	
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

