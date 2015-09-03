#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
int8_t x2 = -6;
volatile int16_t x7 = INT16_MIN;
uint64_t t1 = 815LLU;
volatile int32_t x17 = 104755;
volatile int32_t t4 = 141;
uint64_t x23 = 202653396045846LLU;
uint32_t x27 = UINT32_MAX;
int16_t x31 = INT16_MIN;
int64_t t8 = 233607623228LL;
uint16_t x37 = 3U;
int64_t x41 = INT64_MAX;
int16_t x52 = INT16_MAX;
volatile int64_t t12 = -1075LL;
int16_t x53 = INT16_MIN;
int32_t x57 = INT32_MIN;
int64_t t14 = INT64_MAX;
int8_t x61 = -1;
int16_t x63 = -367;
uint16_t x65 = 956U;
volatile int64_t t17 = 14LL;
static volatile uint64_t t18 = 44170843457410365LLU;
int16_t x83 = INT16_MIN;
int64_t x85 = INT64_MIN;
int8_t x88 = INT8_MAX;
uint8_t x95 = UINT8_MAX;
volatile int16_t x99 = 8739;
uint64_t t23 = 7600991LLU;
volatile int32_t x102 = INT32_MIN;
static int32_t x107 = -1;
volatile int64_t x112 = -52245906145090LL;
uint8_t x120 = UINT8_MAX;
static uint16_t x122 = 295U;
volatile int16_t x123 = -712;
volatile uint32_t x125 = 1279U;
uint32_t x129 = 66330257U;
static volatile int64_t t31 = 6LL;
volatile uint8_t x148 = 12U;
uint64_t x149 = 3826532325LLU;
static int8_t x153 = INT8_MIN;
int8_t x157 = 25;
int16_t x158 = 1;
uint64_t x162 = 21906629151LLU;
volatile uint64_t t39 = 2732884416220LLU;
int8_t x172 = INT8_MAX;
static int16_t x179 = INT16_MIN;
uint16_t x180 = 602U;
volatile int32_t t45 = -1355;
static int64_t x195 = INT64_MAX;
int16_t x196 = INT16_MIN;
volatile int16_t x206 = 219;
static volatile int8_t x211 = INT8_MIN;
static volatile int64_t t50 = -1LL;
volatile int64_t t51 = -51901142285045291LL;
int64_t x217 = -1LL;
int32_t x218 = INT32_MIN;
static volatile int8_t x228 = -13;
int8_t x229 = -1;
int8_t x232 = INT8_MIN;
int16_t x233 = -1;
static volatile int32_t x239 = INT32_MAX;
volatile uint64_t t56 = 963809275877LLU;
int32_t x246 = INT32_MIN;
volatile uint64_t t57 = 106270LLU;
uint32_t x266 = UINT32_MAX;
static int8_t x270 = -1;
volatile int64_t t62 = -12711534363135933LL;
uint64_t x276 = 3272164726456332628LLU;
volatile int32_t x280 = INT32_MAX;
int8_t x284 = INT8_MIN;
int8_t x285 = -1;
uint8_t x290 = 2U;
uint64_t x295 = 692935356055242627LLU;
static volatile int64_t x299 = 19854086755LL;
int64_t x301 = INT64_MAX;
int16_t x318 = INT16_MIN;
int64_t x322 = -5223432003LL;
int8_t x326 = -1;
int32_t x333 = INT32_MIN;
volatile int8_t x335 = INT8_MAX;
int32_t x336 = INT32_MIN;
volatile int16_t x338 = 2;
volatile uint16_t x343 = 55U;
int64_t x346 = 23369LL;
int32_t x349 = -2967;
uint64_t t81 = 10LLU;
static int64_t x353 = INT64_MIN;
uint64_t t82 = 18353183670LLU;
volatile uint32_t t83 = 10457U;
static volatile uint64_t x375 = 123632164860LLU;
static int64_t x383 = -1LL;
int16_t x396 = 9;
uint32_t x399 = 31780U;
volatile int32_t x405 = -1;
int16_t x406 = -1;
volatile int64_t x408 = -1LL;
uint16_t x419 = 0U;
static int16_t x423 = 1;
static int8_t x428 = -1;
volatile uint64_t t99 = 1656734084LLU;


void f0(void) {
	static uint64_t x3 = 32669LLU;
	volatile int32_t x4 = INT32_MIN;
	static uint64_t t0 = 31183239LLU;

	t0 = (((x1%x2)|x3)-x4);

	if (t0 != 2147516317LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	volatile int64_t x6 = INT64_MIN;
	uint64_t x8 = 30787698092530LLU;

	t1 = (((x5%x6)|x7)-x8);

	if (t1 != 18446713286011459085LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	int64_t x10 = INT64_MAX;
	uint16_t x11 = 0U;
	int64_t x12 = -7LL;
	static volatile int64_t t2 = 1805975095119276LL;

	t2 = (((x9%x10)|x11)-x12);

	if (t2 != -121LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	volatile int32_t x14 = INT32_MIN;
	int64_t x15 = -14236649138626798LL;
	int64_t x16 = -1LL;
	int64_t t3 = -13113811454LL;

	t3 = (((x13%x14)|x15)-x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -32;
	static int8_t x19 = INT8_MIN;
	int16_t x20 = INT16_MAX;

	t4 = (((x17%x18)|x19)-x20);

	if (t4 != -32876) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int32_t x22 = -1;
	int64_t x24 = INT64_MIN;
	uint64_t t5 = 31025797LLU;

	t5 = (((x21%x22)|x23)-x24);

	if (t5 != 9223574690250821654LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MAX;
	int64_t x26 = -1LL;
	int32_t x28 = INT32_MIN;
	volatile int64_t t6 = 0LL;

	t6 = (((x25%x26)|x27)-x28);

	if (t6 != 6442450943LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -1LL;
	static int64_t x30 = INT64_MAX;
	int16_t x32 = INT16_MIN;
	int64_t t7 = -490735608232907279LL;

	t7 = (((x29%x30)|x31)-x32);

	if (t7 != 32767LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = 14;
	int16_t x34 = -1;
	int64_t x35 = 225009752LL;
	int32_t x36 = -16123466;

	t8 = (((x33%x34)|x35)-x36);

	if (t8 != 241133218LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;
	int16_t x39 = -1;
	int64_t x40 = 115LL;
	volatile int64_t t9 = -13843LL;

	t9 = (((x37%x38)|x39)-x40);

	if (t9 != -116LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x42 = INT8_MAX;
	uint16_t x43 = UINT16_MAX;
	static int16_t x44 = INT16_MAX;
	static volatile int64_t t10 = 73374LL;

	t10 = (((x41%x42)|x43)-x44);

	if (t10 != 32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	uint16_t x46 = UINT16_MAX;
	int64_t x47 = INT64_MIN;
	int16_t x48 = -2;
	int64_t t11 = -102377LL;

	t11 = (((x45%x46)|x47)-x48);

	if (t11 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int64_t x50 = INT64_MIN;
	uint32_t x51 = UINT32_MAX;

	t12 = (((x49%x50)|x51)-x52);

	if (t12 != -32768LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -60149;
	uint64_t x55 = 209LLU;
	volatile int64_t x56 = -1LL;
	volatile uint64_t t13 = 24952142105768LLU;

	t13 = (((x53%x54)|x55)-x56);

	if (t13 != 18446744073709519058LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -1;
	int16_t x59 = -1;
	int64_t x60 = INT64_MIN;

	t14 = (((x57%x58)|x59)-x60);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x62 = 11;
	volatile uint8_t x64 = 38U;
	int32_t t15 = -202;

	t15 = (((x61%x62)|x63)-x64);

	if (t15 != -39) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x66 = INT64_MAX;
	volatile uint32_t x67 = 26140682U;
	volatile int16_t x68 = -1;
	volatile int64_t t16 = 3392107740311LL;

	t16 = (((x65%x66)|x67)-x68);

	if (t16 != 26141631LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	int16_t x70 = -1;
	int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MIN;

	t17 = (((x69%x70)|x71)-x72);

	if (t17 != 32640LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 0LLU;
	int64_t x74 = 161945LL;
	int16_t x75 = INT16_MIN;
	int32_t x76 = -27659;

	t18 = (((x73%x74)|x75)-x76);

	if (t18 != 18446744073709546507LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	volatile int64_t x82 = INT64_MAX;
	int64_t x84 = INT64_MAX;
	static volatile int64_t t19 = INT64_MIN;

	t19 = (((x81%x82)|x83)-x84);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x86 = INT32_MIN;
	volatile int64_t x87 = INT64_MAX;
	int64_t t20 = -417LL;

	t20 = (((x85%x86)|x87)-x88);

	if (t20 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x89 = 0LL;
	int8_t x90 = INT8_MIN;
	uint32_t x91 = UINT32_MAX;
	int8_t x92 = INT8_MIN;
	volatile int64_t t21 = 2LL;

	t21 = (((x89%x90)|x91)-x92);

	if (t21 != 4294967423LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x93 = INT32_MAX;
	int8_t x94 = INT8_MAX;
	uint16_t x96 = 754U;
	volatile int32_t t22 = 855;

	t22 = (((x93%x94)|x95)-x96);

	if (t22 != -499) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = 1;
	uint64_t x98 = 26826014285179002LLU;
	uint16_t x100 = 2449U;

	t23 = (((x97%x98)|x99)-x100);

	if (t23 != 6290LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = INT16_MIN;
	uint8_t x103 = UINT8_MAX;
	uint8_t x104 = 3U;
	int32_t t24 = -1672524;

	t24 = (((x101%x102)|x103)-x104);

	if (t24 != -32516) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MAX;
	int8_t x106 = -1;
	int8_t x108 = 5;
	int64_t t25 = 16LL;

	t25 = (((x105%x106)|x107)-x108);

	if (t25 != -6LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = -1;
	volatile int16_t x110 = INT16_MIN;
	int32_t x111 = -1;
	int64_t t26 = -28255197805565LL;

	t26 = (((x109%x110)|x111)-x112);

	if (t26 != 52245906145089LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x113 = 90U;
	volatile uint16_t x114 = 2766U;
	volatile int8_t x115 = 1;
	uint64_t x116 = UINT64_MAX;
	static volatile uint64_t t27 = 1684857649LLU;

	t27 = (((x113%x114)|x115)-x116);

	if (t27 != 92LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = UINT64_MAX;
	int64_t x118 = INT64_MIN;
	int8_t x119 = INT8_MAX;
	uint64_t t28 = 44182680219188827LLU;

	t28 = (((x117%x118)|x119)-x120);

	if (t28 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = 3U;
	int16_t x124 = INT16_MIN;
	int32_t t29 = -39;

	t29 = (((x121%x122)|x123)-x124);

	if (t29 != 32059) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x126 = INT16_MIN;
	int32_t x127 = -23;
	int16_t x128 = INT16_MAX;
	uint32_t t30 = 18U;

	t30 = (((x125%x126)|x127)-x128);

	if (t30 != 4294934528U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MIN;
	int16_t x131 = -1;
	static volatile int64_t x132 = INT64_MAX;

	t31 = (((x129%x130)|x131)-x132);

	if (t31 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x133 = 24U;
	static volatile uint8_t x134 = 2U;
	uint16_t x135 = 15U;
	static int32_t x136 = 14942;
	volatile int32_t t32 = 42187;

	t32 = (((x133%x134)|x135)-x136);

	if (t32 != -14927) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = UINT8_MAX;
	int64_t x138 = -1LL;
	uint16_t x139 = 0U;
	uint16_t x140 = 3U;
	volatile int64_t t33 = 25LL;

	t33 = (((x137%x138)|x139)-x140);

	if (t33 != -3LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x141 = INT16_MIN;
	static uint16_t x142 = UINT16_MAX;
	volatile int32_t x143 = -1;
	uint16_t x144 = 74U;
	int32_t t34 = -105;

	t34 = (((x141%x142)|x143)-x144);

	if (t34 != -75) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x145 = 110U;
	uint16_t x146 = UINT16_MAX;
	int32_t x147 = -1;
	volatile int32_t t35 = 0;

	t35 = (((x145%x146)|x147)-x148);

	if (t35 != -13) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x150 = 2;
	volatile int8_t x151 = 62;
	volatile int16_t x152 = INT16_MIN;
	volatile uint64_t t36 = 57607979853124LLU;

	t36 = (((x149%x150)|x151)-x152);

	if (t36 != 32831LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x154 = INT32_MIN;
	int32_t x155 = INT32_MAX;
	uint64_t x156 = 44738467515032101LLU;
	uint64_t t37 = 20LLU;

	t37 = (((x153%x154)|x155)-x156);

	if (t37 != 18402005606194519514LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x159 = -1;
	uint32_t x160 = UINT32_MAX;
	uint32_t t38 = 12583367U;

	t38 = (((x157%x158)|x159)-x160);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x161 = UINT16_MAX;
	uint32_t x163 = 88075509U;
	static uint16_t x164 = UINT16_MAX;

	t39 = (((x161%x162)|x163)-x164);

	if (t39 != 88014848LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x165 = 81732406U;
	static uint32_t x166 = 65755464U;
	static int16_t x167 = -2510;
	volatile uint32_t x168 = UINT32_MAX;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = (((x165%x166)|x167)-x168);

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = -1;
	uint64_t x170 = 82521LLU;
	uint64_t x171 = UINT64_MAX;
	uint64_t t41 = 591870LLU;

	t41 = (((x169%x170)|x171)-x172);

	if (t41 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x173 = UINT16_MAX;
	static volatile int32_t x174 = 2591;
	uint8_t x175 = UINT8_MAX;
	static int32_t x176 = -1;
	int32_t t42 = -92;

	t42 = (((x173%x174)|x175)-x176);

	if (t42 != 768) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	uint32_t x178 = 452026511U;
	int64_t t43 = -24LL;

	t43 = (((x177%x178)|x179)-x180);

	if (t43 != -11979LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x185 = UINT64_MAX;
	static int16_t x186 = INT16_MIN;
	volatile uint64_t x187 = 3661830229243648956LLU;
	volatile uint8_t x188 = 55U;
	uint64_t t44 = 3299769587715610787LLU;

	t44 = (((x185%x186)|x187)-x188);

	if (t44 != 3661830229243658184LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x189 = 12;
	int32_t x190 = INT32_MIN;
	int16_t x191 = -14491;
	volatile int8_t x192 = 19;

	t45 = (((x189%x190)|x191)-x192);

	if (t45 != -14502) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = -1;
	uint16_t x194 = 345U;
	static volatile int64_t t46 = -196576LL;

	t46 = (((x193%x194)|x195)-x196);

	if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x197 = UINT16_MAX;
	uint8_t x198 = UINT8_MAX;
	volatile int16_t x199 = INT16_MIN;
	int64_t x200 = -1LL;
	int64_t t47 = -21800971498LL;

	t47 = (((x197%x198)|x199)-x200);

	if (t47 != -32767LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x201 = INT16_MAX;
	uint64_t x202 = 11894231365525LLU;
	static uint64_t x203 = 1627LLU;
	uint64_t x204 = UINT64_MAX;
	static volatile uint64_t t48 = 1652372215992414LLU;

	t48 = (((x201%x202)|x203)-x204);

	if (t48 != 32768LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x205 = INT16_MIN;
	static volatile uint64_t x207 = 1710232530LLU;
	int32_t x208 = INT32_MAX;
	static volatile uint64_t t49 = 2342LLU;

	t49 = (((x205%x206)|x207)-x208);

	if (t49 != 18446744071562067960LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x209 = UINT8_MAX;
	int8_t x210 = INT8_MAX;
	static int64_t x212 = 781817930LL;

	t50 = (((x209%x210)|x211)-x212);

	if (t50 != -781818057LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = -1;
	static int64_t x214 = 2522544LL;
	volatile int16_t x215 = -42;
	uint8_t x216 = 3U;

	t51 = (((x213%x214)|x215)-x216);

	if (t51 != -4LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x219 = 0LLU;
	static int16_t x220 = INT16_MIN;
	static uint64_t t52 = 5087LLU;

	t52 = (((x217%x218)|x219)-x220);

	if (t52 != 32767LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = -32;
	int16_t x226 = -28;
	int8_t x227 = INT8_MIN;
	int32_t t53 = 5;

	t53 = (((x225%x226)|x227)-x228);

	if (t53 != 9) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x230 = INT16_MIN;
	static int32_t x231 = INT32_MIN;
	volatile int32_t t54 = -1;

	t54 = (((x229%x230)|x231)-x232);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x234 = -9;
	int64_t x235 = INT64_MAX;
	static uint8_t x236 = 35U;
	volatile int64_t t55 = -864LL;

	t55 = (((x233%x234)|x235)-x236);

	if (t55 != -36LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x237 = UINT8_MAX;
	uint64_t x238 = 286999557LLU;
	volatile int8_t x240 = -1;

	t56 = (((x237%x238)|x239)-x240);

	if (t56 != 2147483648LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x245 = -404;
	int64_t x247 = -1LL;
	static volatile uint64_t x248 = 763334LLU;

	t57 = (((x245%x246)|x247)-x248);

	if (t57 != 18446744073708788281LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x249 = INT64_MIN;
	static int32_t x250 = INT32_MIN;
	volatile int32_t x251 = INT32_MAX;
	int16_t x252 = INT16_MAX;
	volatile int64_t t58 = -556739467LL;

	t58 = (((x249%x250)|x251)-x252);

	if (t58 != 2147450880LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x253 = 0U;
	volatile int8_t x254 = INT8_MIN;
	int32_t x255 = INT32_MIN;
	uint32_t x256 = UINT32_MAX;
	uint32_t t59 = 4547393U;

	t59 = (((x253%x254)|x255)-x256);

	if (t59 != 2147483649U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x261 = -12;
	int16_t x262 = INT16_MIN;
	static int64_t x263 = -2097654569032385LL;
	static int8_t x264 = INT8_MAX;
	int64_t t60 = -26600854LL;

	t60 = (((x261%x262)|x263)-x264);

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x265 = 4U;
	int8_t x267 = 4;
	volatile int8_t x268 = -1;
	uint32_t t61 = 1864U;

	t61 = (((x265%x266)|x267)-x268);

	if (t61 != 5U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = -1;
	int64_t x271 = -390131572LL;
	int64_t x272 = -1LL;

	t62 = (((x269%x270)|x271)-x272);

	if (t62 != -390131571LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x273 = 396U;
	int64_t x274 = INT64_MAX;
	int32_t x275 = 9;
	volatile uint64_t t63 = 13950958689244LLU;

	t63 = (((x273%x274)|x275)-x276);

	if (t63 != 15174579347253219385LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x277 = UINT32_MAX;
	int64_t x278 = -1LL;
	uint16_t x279 = 12159U;
	int64_t t64 = -1513138745LL;

	t64 = (((x277%x278)|x279)-x280);

	if (t64 != -2147471488LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = -11;
	int16_t x282 = INT16_MAX;
	int16_t x283 = -6;
	volatile int32_t t65 = 9001686;

	t65 = (((x281%x282)|x283)-x284);

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x286 = -1;
	uint32_t x287 = 159426293U;
	volatile uint32_t x288 = 1U;
	volatile uint32_t t66 = 1U;

	t66 = (((x285%x286)|x287)-x288);

	if (t66 != 159426292U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = 1;
	int8_t x291 = 1;
	volatile uint32_t x292 = 157446649U;
	uint32_t t67 = 2U;

	t67 = (((x289%x290)|x291)-x292);

	if (t67 != 4137520648U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = 1098661;
	uint32_t x294 = UINT32_MAX;
	static int16_t x296 = -2;
	uint64_t t68 = 272403760082LLU;

	t68 = (((x293%x294)|x295)-x296);

	if (t68 != 692935356055275433LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = INT64_MIN;
	int8_t x298 = 5;
	uint64_t x300 = UINT64_MAX;
	uint64_t t69 = 11627LLU;

	t69 = (((x297%x298)|x299)-x300);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x302 = 738U;
	int16_t x303 = INT16_MAX;
	uint32_t x304 = 272314U;
	int64_t t70 = -59796773455888817LL;

	t70 = (((x301%x302)|x303)-x304);

	if (t70 != -239547LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = -1;
	int32_t x310 = INT32_MAX;
	static int32_t x311 = -1;
	int16_t x312 = 7059;
	int32_t t71 = 56095;

	t71 = (((x309%x310)|x311)-x312);

	if (t71 != -7060) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x313 = -5091331LL;
	int8_t x314 = 46;
	uint32_t x315 = 471922851U;
	static int32_t x316 = -771;
	int64_t t72 = 2133055900420515987LL;

	t72 = (((x313%x314)|x315)-x316);

	if (t72 != 766LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x317 = 7096LLU;
	uint16_t x319 = UINT16_MAX;
	static volatile int8_t x320 = INT8_MAX;
	volatile uint64_t t73 = 15139035LLU;

	t73 = (((x317%x318)|x319)-x320);

	if (t73 != 65408LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = INT16_MAX;
	uint8_t x323 = 97U;
	int32_t x324 = INT32_MIN;
	volatile int64_t t74 = 537LL;

	t74 = (((x321%x322)|x323)-x324);

	if (t74 != 2147516415LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x325 = INT64_MIN;
	static int8_t x327 = INT8_MAX;
	volatile int8_t x328 = -1;
	static int64_t t75 = 0LL;

	t75 = (((x325%x326)|x327)-x328);

	if (t75 != 128LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = -1;
	int32_t x330 = 6012195;
	int64_t x331 = 732822916LL;
	int64_t x332 = -92309329808454423LL;
	volatile int64_t t76 = -133518838LL;

	t76 = (((x329%x330)|x331)-x332);

	if (t76 != 92309329808454422LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x334 = -1LL;
	int64_t t77 = 13LL;

	t77 = (((x333%x334)|x335)-x336);

	if (t77 != 2147483775LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x337 = -1;
	int32_t x339 = -234214;
	volatile int32_t x340 = -1;
	int32_t t78 = -203842334;

	t78 = (((x337%x338)|x339)-x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x341 = 7LLU;
	volatile int8_t x342 = INT8_MAX;
	volatile int64_t x344 = -2LL;
	volatile uint64_t t79 = 68053LLU;

	t79 = (((x341%x342)|x343)-x344);

	if (t79 != 57LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x345 = 444U;
	int16_t x347 = INT16_MAX;
	int64_t x348 = INT64_MAX;
	int64_t t80 = -409306593434LL;

	t80 = (((x345%x346)|x347)-x348);

	if (t80 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x350 = UINT16_MAX;
	volatile uint64_t x351 = 2270LLU;
	static uint16_t x352 = 11U;

	t81 = (((x349%x350)|x351)-x352);

	if (t81 != 18446744073709550836LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x354 = 320875U;
	uint32_t x355 = 13U;
	uint64_t x356 = UINT64_MAX;

	t82 = (((x353%x354)|x355)-x356);

	if (t82 != 18446744073709355310LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x357 = -1;
	uint32_t x358 = UINT32_MAX;
	uint8_t x359 = 6U;
	int8_t x360 = INT8_MIN;

	t83 = (((x357%x358)|x359)-x360);

	if (t83 != 134U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x361 = INT32_MAX;
	int64_t x362 = INT64_MIN;
	static int8_t x363 = -28;
	uint16_t x364 = 4053U;
	int64_t t84 = 46157294737066LL;

	t84 = (((x361%x362)|x363)-x364);

	if (t84 != -4054LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x365 = 0;
	uint64_t x366 = 4983069852932274512LLU;
	static uint32_t x367 = UINT32_MAX;
	int64_t x368 = -1LL;
	uint64_t t85 = 25927443LLU;

	t85 = (((x365%x366)|x367)-x368);

	if (t85 != 4294967296LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x373 = UINT64_MAX;
	volatile uint16_t x374 = 197U;
	int16_t x376 = INT16_MIN;
	uint64_t t86 = 91909LLU;

	t86 = (((x373%x374)|x375)-x376);

	if (t86 != 123632197628LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = -33;
	uint32_t x378 = 176U;
	volatile uint16_t x379 = 2U;
	uint8_t x380 = 12U;
	volatile uint32_t t87 = 905086934U;

	t87 = (((x377%x378)|x379)-x380);

	if (t87 != 3U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x381 = 2973LLU;
	int32_t x382 = -1;
	volatile int64_t x384 = -1301LL;
	volatile uint64_t t88 = 15LLU;

	t88 = (((x381%x382)|x383)-x384);

	if (t88 != 1300LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x385 = 18795LLU;
	uint32_t x386 = UINT32_MAX;
	uint8_t x387 = UINT8_MAX;
	uint16_t x388 = 61U;
	volatile uint64_t t89 = 1LLU;

	t89 = (((x385%x386)|x387)-x388);

	if (t89 != 18882LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x389 = 168579U;
	int16_t x390 = INT16_MIN;
	static uint32_t x391 = UINT32_MAX;
	uint32_t x392 = 2134880786U;
	volatile uint32_t t90 = 16971U;

	t90 = (((x389%x390)|x391)-x392);

	if (t90 != 2160086509U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = INT32_MIN;
	volatile int32_t x394 = 5835245;
	uint64_t x395 = 439375345677790LLU;
	volatile uint64_t t91 = 2644654204162120LLU;

	t91 = (((x393%x394)|x395)-x396);

	if (t91 != 18446744073709483509LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x397 = 5U;
	uint64_t x398 = 7535613LLU;
	static uint64_t x400 = UINT64_MAX;
	static uint64_t t92 = 1298598549199992415LLU;

	t92 = (((x397%x398)|x399)-x400);

	if (t92 != 31782LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x407 = INT32_MIN;
	int64_t t93 = 2526497773863389236LL;

	t93 = (((x405%x406)|x407)-x408);

	if (t93 != -2147483647LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x409 = -1;
	int16_t x410 = INT16_MIN;
	static int64_t x411 = 0LL;
	static uint64_t x412 = UINT64_MAX;
	uint64_t t94 = 2893473LLU;

	t94 = (((x409%x410)|x411)-x412);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x413 = UINT16_MAX;
	static uint64_t x414 = UINT64_MAX;
	static uint32_t x415 = 0U;
	uint32_t x416 = UINT32_MAX;
	static uint64_t t95 = 22081616608539557LLU;

	t95 = (((x413%x414)|x415)-x416);

	if (t95 != 18446744069414649856LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x417 = INT64_MIN;
	uint16_t x418 = UINT16_MAX;
	uint64_t x420 = 575712121240352123LLU;
	volatile uint64_t t96 = 352505830814596914LLU;

	t96 = (((x417%x418)|x419)-x420);

	if (t96 != 17871031952469166725LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = INT8_MAX;
	static int64_t x422 = INT64_MIN;
	uint32_t x424 = UINT32_MAX;
	volatile int64_t t97 = 1LL;

	t97 = (((x421%x422)|x423)-x424);

	if (t97 != -4294967168LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = -173474333851243LL;
	int64_t x426 = INT64_MIN;
	int64_t x427 = -31600529223015762LL;
	int64_t t98 = -3496740LL;

	t98 = (((x425%x426)|x427)-x428);

	if (t98 != -4956459981888LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x429 = UINT32_MAX;
	uint64_t x430 = 1225600502762LLU;
	uint8_t x431 = 55U;
	uint64_t x432 = UINT64_MAX;

	t99 = (((x429%x430)|x431)-x432);

	if (t99 != 4294967296LLU) { NG(); } else { ; }
	
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

