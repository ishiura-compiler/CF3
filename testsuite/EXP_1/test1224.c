#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -11;
static volatile int32_t t2 = 356759906;
int16_t x17 = INT16_MIN;
int8_t x18 = INT8_MIN;
static volatile uint32_t t4 = 107323U;
volatile int64_t x24 = -1LL;
static volatile int64_t x27 = INT64_MIN;
int32_t x32 = -1;
volatile int32_t t7 = 659416;
int32_t x33 = -645472943;
uint16_t x35 = 37U;
int8_t x49 = INT8_MAX;
uint8_t x58 = UINT8_MAX;
static uint64_t x61 = UINT64_MAX;
uint64_t x68 = 7288073LLU;
static int64_t x70 = INT64_MIN;
int64_t x74 = INT64_MIN;
uint16_t x79 = 4516U;
static int8_t x80 = INT8_MIN;
static volatile int32_t t19 = 713;
uint32_t x93 = 1U;
int8_t x112 = INT8_MAX;
volatile int16_t x117 = INT16_MAX;
uint64_t t26 = 1344736154788037LLU;
static int64_t x134 = INT64_MAX;
int8_t x138 = INT8_MIN;
int64_t x139 = INT64_MAX;
int8_t x143 = 1;
volatile uint16_t x144 = 36U;
volatile int32_t x151 = 7;
volatile int32_t x153 = 1692;
static uint16_t x156 = 3000U;
volatile int64_t x157 = INT64_MAX;
int8_t x159 = -1;
static volatile int8_t x160 = INT8_MIN;
static int8_t x164 = 51;
int32_t x175 = 49355555;
int64_t x182 = INT64_MAX;
int32_t x183 = INT32_MIN;
volatile int64_t t40 = 36505303LL;
static int16_t x190 = INT16_MIN;
uint64_t t42 = 88492263LLU;
volatile uint64_t t43 = 14674651142210LLU;
int8_t x197 = INT8_MAX;
static int32_t x203 = INT32_MIN;
int16_t x214 = INT16_MIN;
static int32_t x216 = 208;
int32_t x217 = -1;
static uint32_t x226 = UINT32_MAX;
uint32_t t51 = 364230188U;
uint64_t t52 = 36249367445LLU;
uint8_t x241 = 1U;
uint8_t x247 = UINT8_MAX;
int32_t x255 = 21669644;
uint16_t x263 = UINT16_MAX;
volatile int32_t t59 = 43993;
uint32_t x265 = UINT32_MAX;
volatile int32_t x270 = INT32_MIN;
volatile uint64_t t61 = 157LLU;
volatile uint8_t x275 = UINT8_MAX;
volatile uint16_t x277 = 31U;
static volatile int8_t x278 = 2;
int8_t x285 = -1;
int8_t x292 = -1;
uint32_t x296 = 105U;
int64_t x297 = 3138135LL;
volatile uint64_t x301 = 1853480376LLU;
static int64_t x320 = -382134LL;
uint32_t x333 = 81U;
int32_t x335 = INT32_MIN;
uint32_t x338 = 30640023U;
static uint64_t x339 = UINT64_MAX;
int16_t x340 = 2822;
uint64_t t75 = 23LLU;
int8_t x346 = 6;
uint64_t t76 = 24928257074086LLU;
static int16_t x355 = -24;
int32_t x356 = -1;
int64_t x359 = INT64_MIN;
static uint64_t x375 = 112LLU;
int16_t x381 = -1;
int64_t x384 = -1LL;
uint64_t x386 = 15LLU;
int8_t x389 = 42;
int32_t x390 = 30;
uint32_t x392 = UINT32_MAX;
uint16_t x398 = UINT16_MAX;
uint64_t x400 = 3194255894946LLU;
static int8_t x406 = INT8_MIN;
uint16_t x417 = 414U;
static int64_t t94 = -188598775452540LL;
int64_t t95 = 142447857508LL;
volatile uint16_t x443 = 4682U;


void f0(void) {
	uint64_t x1 = 125689LLU;
	static int16_t x2 = INT16_MIN;
	static int16_t x3 = -1;
	static volatile int8_t x4 = INT8_MIN;

	t0 = (((x1==x2)/x3)-x4);

	if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int64_t x6 = -233413462629266798LL;
	int64_t x7 = INT64_MAX;
	int16_t x8 = 63;
	int64_t t1 = -737798789LL;

	t1 = (((x5==x6)/x7)-x8);

	if (t1 != -63LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	uint32_t x10 = 26U;
	volatile int16_t x11 = INT16_MIN;
	uint16_t x12 = 7U;

	t2 = (((x9==x10)/x11)-x12);

	if (t2 != -7) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 7388;
	volatile uint64_t x14 = 9179059LLU;
	uint8_t x15 = 56U;
	uint16_t x16 = 30U;
	static int32_t t3 = 0;

	t3 = (((x13==x14)/x15)-x16);

	if (t3 != -30) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x19 = UINT32_MAX;
	int16_t x20 = INT16_MAX;

	t4 = (((x17==x18)/x19)-x20);

	if (t4 != 4294934529U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	static int8_t x22 = INT8_MIN;
	int32_t x23 = INT32_MIN;
	static volatile int64_t t5 = 923983680450586406LL;

	t5 = (((x21==x22)/x23)-x24);

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 25557LLU;
	static uint8_t x26 = 4U;
	static uint8_t x28 = 1U;
	volatile int64_t t6 = 63318LL;

	t6 = (((x25==x26)/x27)-x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = INT8_MIN;
	int16_t x31 = -3;

	t7 = (((x29==x30)/x31)-x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	int32_t x36 = INT32_MAX;
	volatile int32_t t8 = -6748;

	t8 = (((x33==x34)/x35)-x36);

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 7U;
	volatile uint8_t x38 = 121U;
	volatile uint32_t x39 = 433903U;
	int32_t x40 = -279;
	uint32_t t9 = 25540U;

	t9 = (((x37==x38)/x39)-x40);

	if (t9 != 279U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x45 = 7236LLU;
	int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MIN;
	static int16_t x48 = 0;
	volatile int32_t t10 = 0;

	t10 = (((x45==x46)/x47)-x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x50 = 1U;
	static volatile uint32_t x51 = 42934U;
	static int16_t x52 = 551;
	volatile uint32_t t11 = 19U;

	t11 = (((x49==x50)/x51)-x52);

	if (t11 != 4294966745U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = -58067685;
	uint8_t x59 = 3U;
	int16_t x60 = 83;
	volatile int32_t t12 = -187;

	t12 = (((x57==x58)/x59)-x60);

	if (t12 != -83) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x62 = UINT64_MAX;
	static volatile int8_t x63 = -28;
	static uint8_t x64 = UINT8_MAX;
	int32_t t13 = 112524647;

	t13 = (((x61==x62)/x63)-x64);

	if (t13 != -255) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MIN;
	static int16_t x66 = -1;
	volatile int16_t x67 = INT16_MIN;
	uint64_t t14 = 1048950559349906LLU;

	t14 = (((x65==x66)/x67)-x68);

	if (t14 != 18446744073702263543LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -497431245381074990LL;
	static uint8_t x71 = 11U;
	volatile int8_t x72 = INT8_MIN;
	int32_t t15 = -21;

	t15 = (((x69==x70)/x71)-x72);

	if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x73 = INT64_MAX;
	int64_t x75 = -25561LL;
	int32_t x76 = -1;
	int64_t t16 = -33561663415048LL;

	t16 = (((x73==x74)/x75)-x76);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	volatile int8_t x78 = 20;
	volatile int32_t t17 = -3;

	t17 = (((x77==x78)/x79)-x80);

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x81 = UINT8_MAX;
	volatile int64_t x82 = -249458993LL;
	int8_t x83 = -40;
	int16_t x84 = -2;
	volatile int32_t t18 = -37847735;

	t18 = (((x81==x82)/x83)-x84);

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = 12;
	int64_t x86 = -67477300852082LL;
	uint16_t x87 = UINT16_MAX;
	static int16_t x88 = INT16_MAX;

	t19 = (((x85==x86)/x87)-x88);

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = UINT8_MAX;
	int64_t x90 = INT64_MIN;
	uint64_t x91 = 2125869613844491LLU;
	uint16_t x92 = UINT16_MAX;
	uint64_t t20 = 65LLU;

	t20 = (((x89==x90)/x91)-x92);

	if (t20 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x94 = -1;
	int8_t x95 = INT8_MAX;
	volatile int8_t x96 = INT8_MAX;
	int32_t t21 = 4303;

	t21 = (((x93==x94)/x95)-x96);

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x97 = INT8_MAX;
	uint64_t x98 = 6LLU;
	int32_t x99 = INT32_MIN;
	uint16_t x100 = 22U;
	int32_t t22 = 320;

	t22 = (((x97==x98)/x99)-x100);

	if (t22 != -22) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MAX;
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = 26;
	volatile int8_t x104 = -1;
	static volatile int32_t t23 = 230;

	t23 = (((x101==x102)/x103)-x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x105 = 12U;
	uint64_t x106 = 1279705868337537LLU;
	static uint8_t x107 = 40U;
	int8_t x108 = -6;
	volatile int32_t t24 = -7358;

	t24 = (((x105==x106)/x107)-x108);

	if (t24 != 6) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x109 = 80U;
	uint8_t x110 = 76U;
	int64_t x111 = -1LL;
	int64_t t25 = 13969132LL;

	t25 = (((x109==x110)/x111)-x112);

	if (t25 != -127LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x118 = UINT8_MAX;
	int16_t x119 = -1;
	uint64_t x120 = UINT64_MAX;

	t26 = (((x117==x118)/x119)-x120);

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = 31U;
	uint32_t x122 = 1U;
	uint32_t x123 = 3913213U;
	static int8_t x124 = -9;
	volatile uint32_t t27 = 52960U;

	t27 = (((x121==x122)/x123)-x124);

	if (t27 != 9U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x125 = INT64_MIN;
	int32_t x126 = -64333116;
	volatile int16_t x127 = INT16_MIN;
	volatile int64_t x128 = 20866504LL;
	volatile int64_t t28 = 11332LL;

	t28 = (((x125==x126)/x127)-x128);

	if (t28 != -20866504LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x129 = UINT64_MAX;
	int32_t x130 = -1;
	int8_t x131 = INT8_MIN;
	static int16_t x132 = -1;
	volatile int32_t t29 = 21476;

	t29 = (((x129==x130)/x131)-x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x135 = UINT32_MAX;
	int8_t x136 = -1;
	uint32_t t30 = 3184U;

	t30 = (((x133==x134)/x135)-x136);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 2562U;
	static volatile uint8_t x140 = UINT8_MAX;
	int64_t t31 = -297712834639104329LL;

	t31 = (((x137==x138)/x139)-x140);

	if (t31 != -255LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x141 = INT8_MIN;
	uint32_t x142 = 2U;
	int32_t t32 = -16478540;

	t32 = (((x141==x142)/x143)-x144);

	if (t32 != -36) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = UINT32_MAX;
	int64_t x146 = -1LL;
	int64_t x147 = INT64_MIN;
	int16_t x148 = 551;
	int64_t t33 = -99263679934LL;

	t33 = (((x145==x146)/x147)-x148);

	if (t33 != -551LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x149 = UINT8_MAX;
	int32_t x150 = INT32_MIN;
	static volatile int8_t x152 = INT8_MIN;
	volatile int32_t t34 = 14245354;

	t34 = (((x149==x150)/x151)-x152);

	if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x154 = -1;
	int16_t x155 = 2;
	int32_t t35 = -3872;

	t35 = (((x153==x154)/x155)-x156);

	if (t35 != -3000) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x158 = 124U;
	volatile int32_t t36 = 782259640;

	t36 = (((x157==x158)/x159)-x160);

	if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MAX;
	static int64_t x162 = -110897548365LL;
	int64_t x163 = INT64_MIN;
	static int64_t t37 = -126LL;

	t37 = (((x161==x162)/x163)-x164);

	if (t37 != -51LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 1327175LLU;
	volatile uint32_t x166 = 80538230U;
	int16_t x167 = 22;
	uint32_t x168 = 9080U;
	volatile uint32_t t38 = 4U;

	t38 = (((x165==x166)/x167)-x168);

	if (t38 != 4294958216U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	int64_t x174 = INT64_MIN;
	static int16_t x176 = INT16_MIN;
	volatile int32_t t39 = -1;

	t39 = (((x173==x174)/x175)-x176);

	if (t39 != 32768) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = INT8_MIN;
	int64_t x184 = INT64_MAX;

	t40 = (((x181==x182)/x183)-x184);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = INT64_MIN;
	volatile uint16_t x186 = 44U;
	static uint8_t x187 = 115U;
	int8_t x188 = 55;
	volatile int32_t t41 = -230;

	t41 = (((x185==x186)/x187)-x188);

	if (t41 != -55) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = 25U;
	uint8_t x191 = 48U;
	uint64_t x192 = UINT64_MAX;

	t42 = (((x189==x190)/x191)-x192);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x193 = 6LLU;
	int16_t x194 = 7669;
	int32_t x195 = INT32_MAX;
	uint64_t x196 = UINT64_MAX;

	t43 = (((x193==x194)/x195)-x196);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x198 = UINT16_MAX;
	static volatile int8_t x199 = INT8_MAX;
	uint64_t x200 = 965375016LLU;
	volatile uint64_t t44 = 769115926022432LLU;

	t44 = (((x197==x198)/x199)-x200);

	if (t44 != 18446744072744176600LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = INT64_MIN;
	int64_t x202 = INT64_MIN;
	static volatile int8_t x204 = INT8_MIN;
	volatile int32_t t45 = -1;

	t45 = (((x201==x202)/x203)-x204);

	if (t45 != 128) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = 9U;
	int16_t x212 = INT16_MAX;
	volatile int32_t t46 = 62803107;

	t46 = (((x209==x210)/x211)-x212);

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = INT16_MAX;
	int8_t x215 = INT8_MAX;
	volatile int32_t t47 = -823;

	t47 = (((x213==x214)/x215)-x216);

	if (t47 != -208) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x218 = INT16_MAX;
	static int64_t x219 = INT64_MIN;
	static uint16_t x220 = UINT16_MAX;
	volatile int64_t t48 = -9174068970LL;

	t48 = (((x217==x218)/x219)-x220);

	if (t48 != -65535LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x221 = -1;
	int64_t x222 = -25806717LL;
	static int32_t x223 = 223462;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t49 = 3449833016825LLU;

	t49 = (((x221==x222)/x223)-x224);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x225 = -1;
	static int32_t x227 = -1;
	int16_t x228 = INT16_MAX;
	int32_t t50 = -3751927;

	t50 = (((x225==x226)/x227)-x228);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = INT32_MAX;
	static volatile uint64_t x230 = 477LLU;
	uint32_t x231 = 385732U;
	uint8_t x232 = 125U;

	t51 = (((x229==x230)/x231)-x232);

	if (t51 != 4294967171U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x233 = UINT16_MAX;
	int32_t x234 = -879214013;
	uint64_t x235 = 3160209379LLU;
	int64_t x236 = INT64_MAX;

	t52 = (((x233==x234)/x235)-x236);

	if (t52 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x237 = -1LL;
	volatile uint64_t x238 = 5674LLU;
	volatile int16_t x239 = 27;
	int8_t x240 = INT8_MIN;
	int32_t t53 = 15016992;

	t53 = (((x237==x238)/x239)-x240);

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x242 = 3;
	int32_t x243 = INT32_MIN;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t54 = 24736;

	t54 = (((x241==x242)/x243)-x244);

	if (t54 != -65535) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x245 = 701;
	uint64_t x246 = 389720140LLU;
	int64_t x248 = 68169033093352LL;
	static int64_t t55 = -48070063LL;

	t55 = (((x245==x246)/x247)-x248);

	if (t55 != -68169033093352LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = INT32_MAX;
	int32_t x250 = -1;
	int64_t x251 = -227851405LL;
	static int16_t x252 = INT16_MIN;
	int64_t t56 = 48973885550488530LL;

	t56 = (((x249==x250)/x251)-x252);

	if (t56 != 32768LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x253 = 18LLU;
	int16_t x254 = 378;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t57 = -333234492;

	t57 = (((x253==x254)/x255)-x256);

	if (t57 != -65535) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x257 = INT16_MIN;
	int32_t x258 = INT32_MIN;
	static int8_t x259 = INT8_MIN;
	uint32_t x260 = 18U;
	static volatile uint32_t t58 = 24635567U;

	t58 = (((x257==x258)/x259)-x260);

	if (t58 != 4294967278U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x261 = INT32_MAX;
	int16_t x262 = -1;
	uint16_t x264 = UINT16_MAX;

	t59 = (((x261==x262)/x263)-x264);

	if (t59 != -65535) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x266 = -1;
	static uint32_t x267 = 6078U;
	static volatile int64_t x268 = INT64_MAX;
	int64_t t60 = 33724895724361LL;

	t60 = (((x265==x266)/x267)-x268);

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = -1;
	int64_t x271 = -649LL;
	uint64_t x272 = 10LLU;

	t61 = (((x269==x270)/x271)-x272);

	if (t61 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = 865U;
	int64_t x276 = 33930676LL;
	int64_t t62 = -496934952718LL;

	t62 = (((x273==x274)/x275)-x276);

	if (t62 != -33930676LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x279 = UINT16_MAX;
	uint64_t x280 = 13053LLU;
	uint64_t t63 = 31708826821165LLU;

	t63 = (((x277==x278)/x279)-x280);

	if (t63 != 18446744073709538563LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x286 = INT32_MAX;
	int8_t x287 = INT8_MIN;
	static uint16_t x288 = 82U;
	int32_t t64 = -1002;

	t64 = (((x285==x286)/x287)-x288);

	if (t64 != -82) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x289 = -584948LL;
	uint32_t x290 = 56403U;
	volatile uint64_t x291 = UINT64_MAX;
	volatile uint64_t t65 = 177732051LLU;

	t65 = (((x289==x290)/x291)-x292);

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = -1;
	int16_t x294 = INT16_MIN;
	uint64_t x295 = 143248029123571243LLU;
	volatile uint64_t t66 = 26301925361561859LLU;

	t66 = (((x293==x294)/x295)-x296);

	if (t66 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x298 = INT64_MIN;
	static volatile int64_t x299 = 58119168417435LL;
	int32_t x300 = INT32_MIN;
	int64_t t67 = -293LL;

	t67 = (((x297==x298)/x299)-x300);

	if (t67 != 2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x302 = -1LL;
	int16_t x303 = INT16_MIN;
	uint8_t x304 = UINT8_MAX;
	int32_t t68 = 343;

	t68 = (((x301==x302)/x303)-x304);

	if (t68 != -255) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = 1;
	static uint16_t x318 = 573U;
	uint32_t x319 = 864199U;
	volatile int64_t t69 = 76536LL;

	t69 = (((x317==x318)/x319)-x320);

	if (t69 != 382134LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = INT8_MIN;
	int64_t x322 = -62968LL;
	int64_t x323 = INT64_MIN;
	static uint8_t x324 = 3U;
	volatile int64_t t70 = -213LL;

	t70 = (((x321==x322)/x323)-x324);

	if (t70 != -3LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = 959894073911LL;
	int8_t x326 = 1;
	static uint32_t x327 = 224344179U;
	int8_t x328 = INT8_MIN;
	uint32_t t71 = 117733U;

	t71 = (((x325==x326)/x327)-x328);

	if (t71 != 128U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = INT32_MIN;
	static volatile int8_t x330 = INT8_MIN;
	uint32_t x331 = UINT32_MAX;
	volatile int16_t x332 = INT16_MIN;
	volatile uint32_t t72 = 31910U;

	t72 = (((x329==x330)/x331)-x332);

	if (t72 != 32768U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x334 = 621412902U;
	int16_t x336 = -1;
	volatile int32_t t73 = 574;

	t73 = (((x333==x334)/x335)-x336);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = -1;
	volatile uint64_t t74 = 125LLU;

	t74 = (((x337==x338)/x339)-x340);

	if (t74 != 18446744073709548794LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x341 = -1;
	int32_t x342 = -1;
	static uint64_t x343 = 8772130LLU;
	int16_t x344 = INT16_MIN;

	t75 = (((x341==x342)/x343)-x344);

	if (t75 != 32768LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x345 = INT64_MAX;
	uint64_t x347 = 407401037202732LLU;
	volatile int64_t x348 = -62840898LL;

	t76 = (((x345==x346)/x347)-x348);

	if (t76 != 62840898LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x353 = 1481U;
	uint32_t x354 = 16869682U;
	int32_t t77 = 0;

	t77 = (((x353==x354)/x355)-x356);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x357 = UINT64_MAX;
	int32_t x358 = INT32_MIN;
	volatile int64_t x360 = -997290190265LL;
	volatile int64_t t78 = -52LL;

	t78 = (((x357==x358)/x359)-x360);

	if (t78 != 997290190265LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x361 = INT16_MIN;
	int16_t x362 = 0;
	static int8_t x363 = INT8_MAX;
	int64_t x364 = 3624606362064LL;
	int64_t t79 = -33345289969960LL;

	t79 = (((x361==x362)/x363)-x364);

	if (t79 != -3624606362064LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x365 = -42;
	static uint32_t x366 = UINT32_MAX;
	int64_t x367 = 6LL;
	uint32_t x368 = UINT32_MAX;
	int64_t t80 = 170244654460LL;

	t80 = (((x365==x366)/x367)-x368);

	if (t80 != -4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x369 = -1;
	volatile int8_t x370 = 27;
	int8_t x371 = -61;
	int8_t x372 = INT8_MAX;
	volatile int32_t t81 = 1;

	t81 = (((x369==x370)/x371)-x372);

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x373 = 0LL;
	int8_t x374 = 5;
	int64_t x376 = INT64_MIN;
	volatile uint64_t t82 = 4809379060753LLU;

	t82 = (((x373==x374)/x375)-x376);

	if (t82 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x377 = 12U;
	int8_t x378 = INT8_MIN;
	uint32_t x379 = UINT32_MAX;
	int32_t x380 = 10;
	volatile uint32_t t83 = 7827U;

	t83 = (((x377==x378)/x379)-x380);

	if (t83 != 4294967286U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x382 = UINT32_MAX;
	int32_t x383 = INT32_MIN;
	static int64_t t84 = 1673606735464542LL;

	t84 = (((x381==x382)/x383)-x384);

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x385 = 2396U;
	int8_t x387 = -1;
	int8_t x388 = INT8_MIN;
	volatile int32_t t85 = -702409615;

	t85 = (((x385==x386)/x387)-x388);

	if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x391 = UINT64_MAX;
	volatile uint64_t t86 = 3284127147LLU;

	t86 = (((x389==x390)/x391)-x392);

	if (t86 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x393 = 0U;
	int8_t x394 = INT8_MIN;
	static uint32_t x395 = 1577U;
	int16_t x396 = 2;
	uint32_t t87 = 2425U;

	t87 = (((x393==x394)/x395)-x396);

	if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x397 = 21516U;
	uint16_t x399 = 4472U;
	volatile uint64_t t88 = 29745LLU;

	t88 = (((x397==x398)/x399)-x400);

	if (t88 != 18446740879453656670LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x401 = -1;
	int16_t x402 = -1;
	volatile int32_t x403 = INT32_MIN;
	volatile uint16_t x404 = 1297U;
	volatile int32_t t89 = -15176;

	t89 = (((x401==x402)/x403)-x404);

	if (t89 != -1297) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x405 = -1;
	int8_t x407 = -1;
	uint16_t x408 = 3U;
	int32_t t90 = 0;

	t90 = (((x405==x406)/x407)-x408);

	if (t90 != -3) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x409 = INT8_MIN;
	volatile uint8_t x410 = 1U;
	int8_t x411 = 3;
	int16_t x412 = -114;
	int32_t t91 = -48556623;

	t91 = (((x409==x410)/x411)-x412);

	if (t91 != 114) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x413 = -1;
	int64_t x414 = -1LL;
	uint64_t x415 = 496761408LLU;
	int8_t x416 = INT8_MIN;
	static volatile uint64_t t92 = 4571LLU;

	t92 = (((x413==x414)/x415)-x416);

	if (t92 != 128LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x418 = INT32_MIN;
	int64_t x419 = INT64_MIN;
	int64_t x420 = -1LL;
	static volatile int64_t t93 = 294334687LL;

	t93 = (((x417==x418)/x419)-x420);

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x421 = UINT64_MAX;
	int64_t x422 = INT64_MAX;
	static int64_t x423 = INT64_MIN;
	volatile int16_t x424 = 30;

	t94 = (((x421==x422)/x423)-x424);

	if (t94 != -30LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x425 = UINT32_MAX;
	int8_t x426 = INT8_MIN;
	int32_t x427 = INT32_MAX;
	int64_t x428 = -1LL;

	t95 = (((x425==x426)/x427)-x428);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x429 = 392U;
	static int64_t x430 = INT64_MIN;
	int32_t x431 = -1;
	uint8_t x432 = 0U;
	int32_t t96 = 0;

	t96 = (((x429==x430)/x431)-x432);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x433 = UINT32_MAX;
	int64_t x434 = -125468801599174107LL;
	int16_t x435 = 112;
	int32_t x436 = -1;
	static int32_t t97 = -2;

	t97 = (((x433==x434)/x435)-x436);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x437 = 3U;
	volatile int8_t x438 = INT8_MIN;
	int32_t x439 = -7881186;
	static uint64_t x440 = UINT64_MAX;
	static volatile uint64_t t98 = 2733530341LLU;

	t98 = (((x437==x438)/x439)-x440);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x441 = INT64_MAX;
	int64_t x442 = INT64_MIN;
	uint64_t x444 = 91001311LLU;
	uint64_t t99 = 916LLU;

	t99 = (((x441==x442)/x443)-x444);

	if (t99 != 18446744073618550305LLU) { NG(); } else { ; }
	
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

