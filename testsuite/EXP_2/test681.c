#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x8 = INT16_MIN;
static int8_t x10 = -1;
int64_t x12 = INT64_MIN;
int16_t x15 = -2238;
uint32_t x21 = 7U;
int16_t x25 = -204;
int64_t t6 = -16178619484LL;
uint32_t x32 = UINT32_MAX;
static uint32_t t7 = 256870187U;
static uint32_t x34 = 8U;
uint32_t x37 = UINT32_MAX;
static int16_t x49 = INT16_MAX;
uint64_t x50 = UINT64_MAX;
int8_t x53 = INT8_MIN;
static volatile int16_t x55 = INT16_MIN;
uint16_t x57 = UINT16_MAX;
volatile int64_t t13 = -175752899538588165LL;
static volatile int32_t x63 = INT32_MIN;
int64_t x66 = 3005LL;
int64_t x67 = 21036639LL;
int16_t x68 = -1;
uint64_t t18 = 1226269531413826439LLU;
uint32_t x100 = UINT32_MAX;
uint64_t x101 = UINT64_MAX;
static uint64_t x103 = 1933618691787906LLU;
uint64_t t23 = 93LLU;
uint8_t x109 = UINT8_MAX;
int16_t x112 = INT16_MAX;
volatile int32_t t25 = -4462530;
static int16_t x116 = INT16_MAX;
volatile uint64_t t26 = 49276178948081LLU;
static uint16_t x118 = 39U;
int16_t x120 = INT16_MIN;
volatile uint8_t x125 = UINT8_MAX;
int32_t x127 = INT32_MAX;
int64_t t29 = 94896513LL;
static volatile int16_t x143 = INT16_MIN;
volatile int64_t t34 = -3LL;
int8_t x149 = -1;
uint32_t x152 = 12U;
int32_t t36 = -156918;
int8_t x157 = INT8_MIN;
int32_t x163 = INT32_MIN;
static volatile int16_t x166 = INT16_MAX;
int8_t x169 = INT8_MIN;
int64_t x180 = INT64_MIN;
static int8_t x189 = INT8_MAX;
int32_t x190 = INT32_MAX;
int16_t x194 = -1;
static int64_t x201 = INT64_MAX;
static volatile int64_t x203 = INT64_MAX;
int8_t x208 = INT8_MIN;
volatile uint64_t x222 = 165LLU;
int16_t x223 = INT16_MAX;
static uint64_t t52 = 0LLU;
volatile uint64_t t53 = 1670LLU;
int8_t x239 = 1;
static int32_t x248 = 1;
volatile int64_t t57 = -265775983290845LL;
volatile int16_t x251 = INT16_MIN;
int16_t x252 = INT16_MIN;
volatile uint8_t x253 = 59U;
int32_t x254 = 0;
static int8_t x260 = INT8_MIN;
static uint64_t x261 = 22802050868LLU;
static uint16_t x283 = 1U;
volatile int64_t x290 = -325421470912158194LL;
uint16_t x292 = UINT16_MAX;
static int32_t x302 = INT32_MAX;
volatile int32_t x303 = INT32_MIN;
int32_t x311 = 2943100;
int32_t x315 = INT32_MIN;
uint64_t x316 = UINT64_MAX;
static volatile uint64_t x317 = 184780043LLU;
uint64_t x325 = 178269776739912LLU;
int64_t x326 = -305514459573LL;
volatile uint32_t x332 = 1094287035U;
uint32_t x334 = 44793594U;
int32_t x335 = -345486683;
volatile int32_t x345 = 336;
uint16_t x347 = 15887U;
uint64_t x348 = 1007455616870824911LLU;
int64_t x353 = -731090137LL;
uint32_t x354 = UINT32_MAX;
int32_t x361 = -1;
int16_t x370 = 89;
volatile uint16_t x371 = 24184U;
volatile uint32_t t84 = 968815U;
int32_t t85 = 115606;
static int8_t x382 = -1;
volatile int64_t x383 = INT64_MIN;
volatile int64_t t87 = -81083348029786LL;
uint16_t x388 = UINT16_MAX;
uint16_t x391 = UINT16_MAX;
volatile int32_t t90 = -2022;
volatile int16_t x407 = -28;
int64_t x412 = INT64_MIN;
volatile int64_t t92 = 110LL;
static int32_t x416 = INT32_MAX;
uint16_t x421 = 173U;
volatile int8_t x423 = 9;
int8_t x430 = INT8_MIN;
volatile int8_t x446 = INT8_MAX;
int32_t x447 = INT32_MIN;


void f0(void) {
	int32_t x1 = -1;
	uint32_t x2 = 33531740U;
	uint8_t x3 = UINT8_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 31627680LL;

	t0 = ((x1+(x2%x3))%x4);

	if (t0 != 4LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	static int16_t x6 = INT16_MAX;
	int16_t x7 = INT16_MIN;
	int32_t t1 = -375587;

	t1 = ((x5+(x6%x7))%x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int32_t x11 = INT32_MAX;
	static int64_t t2 = -15308515605683LL;

	t2 = ((x9+(x10%x11))%x12);

	if (t2 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint16_t x14 = UINT16_MAX;
	int32_t x16 = -1;
	int32_t t3 = -1972247;

	t3 = ((x13+(x14%x15))%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x17 = -1;
	uint32_t x18 = 38666131U;
	static uint64_t x19 = UINT64_MAX;
	uint16_t x20 = UINT16_MAX;
	static uint64_t t4 = 1154578798LLU;

	t4 = ((x17+(x18%x19))%x20);

	if (t4 != 480LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	int16_t x23 = INT16_MIN;
	static int16_t x24 = INT16_MAX;
	uint32_t t5 = 98U;

	t5 = ((x21+(x22%x23))%x24);

	if (t5 != 6U) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x26 = 1;
	uint8_t x27 = 4U;
	static int64_t x28 = 1569615399LL;

	t6 = ((x25+(x26%x27))%x28);

	if (t6 != -203LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	int32_t x30 = INT32_MIN;
	uint8_t x31 = 4U;

	t7 = ((x29+(x30%x31))%x32);

	if (t7 != 2147483647U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	uint16_t x35 = 4U;
	int32_t x36 = 136;
	uint32_t t8 = 4U;

	t8 = ((x33+(x34%x35))%x36);

	if (t8 != 119U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -2725;
	int16_t x39 = -1;
	int8_t x40 = -1;
	static uint32_t t9 = 24247285U;

	t9 = ((x37+(x38%x39))%x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x42 = INT8_MIN;
	uint16_t x43 = UINT16_MAX;
	volatile int8_t x44 = INT8_MIN;
	volatile uint32_t t10 = 11434521U;

	t10 = ((x41+(x42%x43))%x44);

	if (t10 != 4294967167U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x51 = -1587771774988369LL;
	static uint32_t x52 = UINT32_MAX;
	uint64_t t11 = 20425211229LLU;

	t11 = ((x49+(x50%x51))%x52);

	if (t11 != 3970438240LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = INT32_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t12 = 101LLU;

	t12 = ((x53+(x54%x55))%x56);

	if (t12 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x58 = 1U;
	int64_t x59 = INT64_MAX;
	uint8_t x60 = 108U;

	t13 = ((x57+(x58%x59))%x60);

	if (t13 != 88LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MIN;
	uint16_t x62 = 1507U;
	uint16_t x64 = 24835U;
	volatile int32_t t14 = -2018059;

	t14 = ((x61+(x62%x63))%x64);

	if (t14 != -6426) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = -1;
	volatile int64_t t15 = 1253491487963LL;

	t15 = ((x65+(x66%x67))%x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 1869570LLU;
	int64_t x74 = INT64_MAX;
	uint16_t x75 = 3U;
	volatile int64_t x76 = 445457073238605LL;
	volatile uint64_t t16 = 1LLU;

	t16 = ((x73+(x74%x75))%x76);

	if (t16 != 1869571LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = -1LL;
	uint64_t x78 = 337LLU;
	int32_t x79 = INT32_MIN;
	volatile uint32_t x80 = 137705U;
	static volatile uint64_t t17 = 98185717LLU;

	t17 = ((x77+(x78%x79))%x80);

	if (t17 != 336LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	int32_t x82 = -1;
	uint64_t x83 = 207735089852975275LLU;
	uint16_t x84 = UINT16_MAX;

	t18 = ((x81+(x82%x83))%x84);

	if (t18 != 42118LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MAX;
	int64_t x86 = 505277LL;
	volatile uint64_t x87 = UINT64_MAX;
	volatile uint16_t x88 = 28677U;
	volatile uint64_t t19 = 1397854142453795LLU;

	t19 = ((x85+(x86%x87))%x88);

	if (t19 != 21858LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x89 = 903U;
	volatile int16_t x90 = -7;
	int32_t x91 = -1;
	int32_t x92 = -1;
	int32_t t20 = 3929;

	t20 = ((x89+(x90%x91))%x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x93 = UINT16_MAX;
	uint32_t x94 = UINT32_MAX;
	int16_t x95 = INT16_MAX;
	uint16_t x96 = 24867U;
	static uint32_t t21 = 191U;

	t21 = ((x93+(x94%x95))%x96);

	if (t21 != 15804U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 35059288139895598LLU;
	int8_t x98 = -2;
	volatile int16_t x99 = -1;
	uint64_t t22 = 273733311547LLU;

	t22 = ((x97+(x98%x99))%x100);

	if (t22 != 2686755178LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x102 = INT32_MIN;
	int16_t x104 = -1;

	t23 = ((x101+(x102%x103))%x104);

	if (t23 != 21751905444727LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = 4218749139973756701LL;
	int32_t x106 = -28580582;
	static int64_t x107 = 5LL;
	static int8_t x108 = INT8_MIN;
	int64_t t24 = -1081069LL;

	t24 = ((x105+(x106%x107))%x108);

	if (t24 != 27LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x110 = 27U;
	int16_t x111 = 1;

	t25 = ((x109+(x110%x111))%x112);

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = 3844942;
	static uint64_t x114 = 1462627297142LLU;
	int32_t x115 = -1;

	t26 = ((x113+(x114%x115))%x116);

	if (t26 != 12110LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 1806703LLU;
	int8_t x119 = -1;
	volatile uint64_t t27 = 17665551031546511LLU;

	t27 = ((x117+(x118%x119))%x120);

	if (t27 != 1806703LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = 211790129U;
	uint8_t x122 = 1U;
	uint16_t x123 = UINT16_MAX;
	int64_t x124 = -1687831439995995LL;
	int64_t t28 = -34969324624841LL;

	t28 = ((x121+(x122%x123))%x124);

	if (t28 != 211790130LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x126 = -44;
	int64_t x128 = INT64_MIN;

	t29 = ((x125+(x126%x127))%x128);

	if (t29 != 211LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = 6;
	int64_t x130 = -14807504804LL;
	int32_t x131 = INT32_MIN;
	uint64_t x132 = 1569917LLU;
	uint64_t t30 = 490878496387382LLU;

	t30 = ((x129+(x130%x131))%x132);

	if (t30 != 410359LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = -2136731854LL;
	int32_t x134 = -1;
	static int32_t x135 = INT32_MAX;
	int32_t x136 = -61;
	int64_t t31 = 95723592017733LL;

	t31 = ((x133+(x134%x135))%x136);

	if (t31 != -4LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x137 = -1;
	uint64_t x138 = UINT64_MAX;
	static uint32_t x139 = UINT32_MAX;
	uint8_t x140 = 59U;
	uint64_t t32 = 30112LLU;

	t32 = ((x137+(x138%x139))%x140);

	if (t32 != 4LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MIN;
	uint8_t x144 = 1U;
	static int32_t t33 = 9;

	t33 = ((x141+(x142%x143))%x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x145 = 49U;
	static int64_t x146 = INT64_MIN;
	uint8_t x147 = 1U;
	int16_t x148 = INT16_MIN;

	t34 = ((x145+(x146%x147))%x148);

	if (t34 != 49LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x150 = -1;
	int64_t x151 = INT64_MIN;
	int64_t t35 = 1LL;

	t35 = ((x149+(x150%x151))%x152);

	if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = -1;
	volatile uint8_t x154 = 15U;
	volatile uint8_t x155 = UINT8_MAX;
	static uint8_t x156 = UINT8_MAX;

	t36 = ((x153+(x154%x155))%x156);

	if (t36 != 14) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x158 = 144845459;
	int8_t x159 = -1;
	uint32_t x160 = UINT32_MAX;
	volatile uint32_t t37 = 29009154U;

	t37 = ((x157+(x158%x159))%x160);

	if (t37 != 4294967168U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = INT16_MAX;
	int16_t x162 = -24;
	int32_t x164 = INT32_MIN;
	static int32_t t38 = 1470677;

	t38 = ((x161+(x162%x163))%x164);

	if (t38 != 32743) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	static int32_t x167 = -1;
	volatile uint16_t x168 = 5235U;
	int32_t t39 = -126;

	t39 = ((x165+(x166%x167))%x168);

	if (t39 != -1358) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x170 = 372;
	volatile uint32_t x171 = UINT32_MAX;
	static uint8_t x172 = 22U;
	uint32_t t40 = 1U;

	t40 = ((x169+(x170%x171))%x172);

	if (t40 != 2U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	static int64_t x174 = INT64_MIN;
	static uint32_t x175 = 28251971U;
	static int32_t x176 = 28466118;
	volatile int64_t t41 = 2395732263799LL;

	t41 = ((x173+(x174%x175))%x176);

	if (t41 != -6297386LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x177 = -8;
	uint64_t x178 = UINT64_MAX;
	static volatile int8_t x179 = INT8_MIN;
	volatile uint64_t t42 = 1649LLU;

	t42 = ((x177+(x178%x179))%x180);

	if (t42 != 119LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = 10;
	volatile int16_t x182 = 145;
	int32_t x183 = INT32_MAX;
	int64_t x184 = INT64_MIN;
	volatile int64_t t43 = 14LL;

	t43 = ((x181+(x182%x183))%x184);

	if (t43 != 155LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x191 = -41195966831541794LL;
	int16_t x192 = 341;
	static volatile int64_t t44 = 973920LL;

	t44 = ((x189+(x190%x191))%x192);

	if (t44 != 128LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = 978022LL;
	int16_t x195 = 8215;
	int64_t x196 = INT64_MAX;
	volatile int64_t t45 = 21339492590985514LL;

	t45 = ((x193+(x194%x195))%x196);

	if (t45 != 978021LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = 52141403U;
	static uint64_t x198 = UINT64_MAX;
	volatile int8_t x199 = INT8_MAX;
	uint8_t x200 = 100U;
	uint64_t t46 = 115430LLU;

	t46 = ((x197+(x198%x199))%x200);

	if (t46 != 4LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x202 = -22;
	int16_t x204 = 92;
	int64_t t47 = 57769018772798260LL;

	t47 = ((x201+(x202%x203))%x204);

	if (t47 != 49LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = -1;
	int16_t x206 = INT16_MAX;
	int64_t x207 = 46LL;
	volatile int64_t t48 = 447570103LL;

	t48 = ((x205+(x206%x207))%x208);

	if (t48 != 14LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = 1;
	static int16_t x210 = -4158;
	int64_t x211 = INT64_MIN;
	int8_t x212 = INT8_MIN;
	int64_t t49 = 12LL;

	t49 = ((x209+(x210%x211))%x212);

	if (t49 != -61LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = UINT64_MAX;
	int16_t x214 = INT16_MAX;
	int16_t x215 = -833;
	volatile int16_t x216 = 6;
	uint64_t t50 = 521858LLU;

	t50 = ((x213+(x214%x215))%x216);

	if (t50 != 3LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x217 = -1;
	int16_t x218 = -1;
	static volatile uint64_t x219 = UINT64_MAX;
	static volatile int8_t x220 = INT8_MAX;
	uint64_t t51 = 4497797877806474308LLU;

	t51 = ((x217+(x218%x219))%x220);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x221 = -1LL;
	uint16_t x224 = 1U;

	t52 = ((x221+(x222%x223))%x224);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x225 = INT8_MAX;
	uint32_t x226 = UINT32_MAX;
	volatile int16_t x227 = INT16_MIN;
	uint64_t x228 = 185LLU;

	t53 = ((x225+(x226%x227))%x228);

	if (t53 != 149LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 0U;
	int64_t x230 = INT64_MIN;
	int8_t x231 = -1;
	volatile uint16_t x232 = 1865U;
	int64_t t54 = 208645282134567LL;

	t54 = ((x229+(x230%x231))%x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = INT8_MIN;
	int32_t x234 = 176256733;
	int32_t x235 = 1044682;
	volatile int32_t x236 = INT32_MAX;
	volatile int32_t t55 = 959;

	t55 = ((x233+(x234%x235))%x236);

	if (t55 != 750029) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x237 = -11186;
	static int64_t x238 = INT64_MIN;
	int64_t x240 = INT64_MIN;
	int64_t t56 = 58LL;

	t56 = ((x237+(x238%x239))%x240);

	if (t56 != -11186LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = UINT8_MAX;
	int16_t x246 = INT16_MIN;
	volatile int64_t x247 = -61142LL;

	t57 = ((x245+(x246%x247))%x248);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = -1;
	static int64_t x250 = INT64_MIN;
	int64_t t58 = -569919LL;

	t58 = ((x249+(x250%x251))%x252);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x255 = 5;
	volatile uint64_t x256 = UINT64_MAX;
	volatile uint64_t t59 = 14121870723LLU;

	t59 = ((x253+(x254%x255))%x256);

	if (t59 != 59LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x257 = INT32_MIN;
	static uint64_t x258 = 87609LLU;
	int64_t x259 = -1LL;
	volatile uint64_t t60 = 106LLU;

	t60 = ((x257+(x258%x259))%x260);

	if (t60 != 18446744071562155577LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x262 = -1;
	int8_t x263 = INT8_MAX;
	int64_t x264 = -4989976851LL;
	volatile uint64_t t61 = 12LLU;

	t61 = ((x261+(x262%x263))%x264);

	if (t61 != 22802050867LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x265 = 19U;
	static int8_t x266 = INT8_MAX;
	static uint32_t x267 = UINT32_MAX;
	volatile uint16_t x268 = 158U;
	volatile uint32_t t62 = 228U;

	t62 = ((x265+(x266%x267))%x268);

	if (t62 != 146U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = -29;
	int64_t x270 = INT64_MIN;
	volatile int64_t x271 = 1503776484441LL;
	int64_t x272 = -1LL;
	volatile int64_t t63 = 117939270991212600LL;

	t63 = ((x269+(x270%x271))%x272);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x273 = UINT32_MAX;
	int16_t x274 = INT16_MAX;
	int64_t x275 = 9746168LL;
	uint16_t x276 = UINT16_MAX;
	volatile int64_t t64 = 486346LL;

	t64 = ((x273+(x274%x275))%x276);

	if (t64 != 32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x281 = 1810668380522LLU;
	uint32_t x282 = 0U;
	int16_t x284 = -10363;
	uint64_t t65 = 238250805884639LLU;

	t65 = ((x281+(x282%x283))%x284);

	if (t65 != 1810668380522LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x285 = 300U;
	int64_t x286 = INT64_MIN;
	uint16_t x287 = 13U;
	int8_t x288 = INT8_MAX;
	int64_t t66 = -3233460361720LL;

	t66 = ((x285+(x286%x287))%x288);

	if (t66 != 38LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x289 = 0U;
	uint16_t x291 = 7U;
	volatile int64_t t67 = 46811216120731140LL;

	t67 = ((x289+(x290%x291))%x292);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x293 = -1LL;
	int16_t x294 = INT16_MAX;
	int32_t x295 = INT32_MIN;
	int32_t x296 = -1;
	int64_t t68 = 270101710LL;

	t68 = ((x293+(x294%x295))%x296);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = -1;
	int16_t x304 = INT16_MIN;
	volatile int32_t t69 = 2;

	t69 = ((x301+(x302%x303))%x304);

	if (t69 != 32766) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x305 = 6U;
	uint8_t x306 = 22U;
	static uint64_t x307 = 14881149428LLU;
	volatile int8_t x308 = -1;
	volatile uint64_t t70 = 11024420860342596LLU;

	t70 = ((x305+(x306%x307))%x308);

	if (t70 != 28LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x309 = INT32_MIN;
	static int64_t x310 = INT64_MIN;
	int8_t x312 = INT8_MAX;
	volatile int64_t t71 = 25018LL;

	t71 = ((x309+(x310%x311))%x312);

	if (t71 != -53LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x313 = INT16_MIN;
	uint16_t x314 = 103U;
	volatile uint64_t t72 = 429963LLU;

	t72 = ((x313+(x314%x315))%x316);

	if (t72 != 18446744073709518951LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x318 = INT64_MAX;
	volatile int32_t x319 = -2;
	static volatile uint8_t x320 = 31U;
	volatile uint64_t t73 = 58799836813LLU;

	t73 = ((x317+(x318%x319))%x320);

	if (t73 != 18LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x321 = -1;
	int16_t x322 = 0;
	int32_t x323 = INT32_MIN;
	uint32_t x324 = 592932462U;
	volatile uint32_t t74 = 91191978U;

	t74 = ((x321+(x322%x323))%x324);

	if (t74 != 144440061U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x327 = 6U;
	static volatile int32_t x328 = INT32_MAX;
	static volatile uint64_t t75 = 215002LLU;

	t75 = ((x325+(x326%x327))%x328);

	if (t75 != 716751498LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = -6;
	int32_t x330 = INT32_MAX;
	static volatile int32_t x331 = INT32_MAX;
	uint32_t t76 = 219U;

	t76 = ((x329+(x330%x331))%x332);

	if (t76 != 1012106185U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x333 = 30087116U;
	int16_t x336 = INT16_MIN;
	uint32_t t77 = 3U;

	t77 = ((x333+(x334%x335))%x336);

	if (t77 != 74880710U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x341 = INT16_MIN;
	static uint32_t x342 = 6U;
	int16_t x343 = -1;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t78 = 36307737241006959LLU;

	t78 = ((x341+(x342%x343))%x344);

	if (t78 != 4294934534LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x346 = INT32_MIN;
	uint64_t t79 = 2823LLU;

	t79 = ((x345+(x346%x347))%x348);

	if (t79 != 312542970034697470LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x355 = -430;
	int32_t x356 = INT32_MIN;
	int64_t t80 = -302158360800351LL;

	t80 = ((x353+(x354%x355))%x356);

	if (t80 != -731089708LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x357 = 106U;
	int16_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = -1;
	volatile uint32_t t81 = 74051220U;

	t81 = ((x357+(x358%x359))%x360);

	if (t81 != 106U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x362 = -1;
	uint64_t x363 = UINT64_MAX;
	uint64_t x364 = 71466256108LLU;
	uint64_t t82 = 34581772549066293LLU;

	t82 = ((x361+(x362%x363))%x364);

	if (t82 != 42122110019LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x365 = -1598461659777767LL;
	volatile uint16_t x366 = 228U;
	int8_t x367 = 8;
	uint8_t x368 = 1U;
	volatile int64_t t83 = 235976LL;

	t83 = ((x365+(x366%x367))%x368);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x369 = UINT8_MAX;
	static volatile uint32_t x372 = UINT32_MAX;

	t84 = ((x369+(x370%x371))%x372);

	if (t84 != 344U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x373 = 7099U;
	volatile uint16_t x374 = 11U;
	int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MAX;

	t85 = ((x373+(x374%x375))%x376);

	if (t85 != 7110) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x377 = -1LL;
	int16_t x378 = INT16_MAX;
	int32_t x379 = INT32_MIN;
	int64_t x380 = -9LL;
	int64_t t86 = -46650067441LL;

	t86 = ((x377+(x378%x379))%x380);

	if (t86 != 6LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x381 = 1U;
	volatile int16_t x384 = -1;

	t87 = ((x381+(x382%x383))%x384);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = -1;
	int64_t x386 = -1LL;
	int64_t x387 = -1LL;
	volatile int64_t t88 = 129909LL;

	t88 = ((x385+(x386%x387))%x388);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x389 = 24468887888LLU;
	int32_t x390 = -30323;
	volatile int8_t x392 = 57;
	static volatile uint64_t t89 = 156386LLU;

	t89 = ((x389+(x390%x391))%x392);

	if (t89 != 51LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x397 = -1;
	uint8_t x398 = UINT8_MAX;
	int8_t x399 = INT8_MIN;
	static int8_t x400 = INT8_MIN;

	t90 = ((x397+(x398%x399))%x400);

	if (t90 != 126) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x405 = 45584022267413427LLU;
	uint32_t x406 = UINT32_MAX;
	volatile uint8_t x408 = 3U;
	uint64_t t91 = 1990065015LLU;

	t91 = ((x405+(x406%x407))%x408);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = INT16_MIN;
	int32_t x410 = INT32_MAX;
	static volatile int64_t x411 = INT64_MAX;

	t92 = ((x409+(x410%x411))%x412);

	if (t92 != 2147450879LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x413 = 30439U;
	uint32_t x414 = UINT32_MAX;
	int16_t x415 = 1422;
	uint32_t t93 = 591524U;

	t93 = ((x413+(x414%x415))%x416);

	if (t93 != 31594U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x422 = INT32_MIN;
	static int8_t x424 = INT8_MAX;
	int32_t t94 = 55;

	t94 = ((x421+(x422%x423))%x424);

	if (t94 != 44) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x425 = -1;
	static volatile int64_t x426 = INT64_MIN;
	uint64_t x427 = 2362561865LLU;
	uint16_t x428 = 26U;
	static uint64_t t95 = 3891915LLU;

	t95 = ((x425+(x426%x427))%x428);

	if (t95 != 8LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x429 = 6U;
	static int64_t x431 = INT64_MIN;
	int16_t x432 = -1;
	int64_t t96 = -44896009LL;

	t96 = ((x429+(x430%x431))%x432);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = 6;
	volatile int64_t x434 = 7LL;
	int64_t x435 = INT64_MIN;
	int16_t x436 = -1606;
	static volatile int64_t t97 = 2089908889LL;

	t97 = ((x433+(x434%x435))%x436);

	if (t97 != 13LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = -1LL;
	int16_t x438 = INT16_MAX;
	int16_t x439 = INT16_MAX;
	volatile uint16_t x440 = 3U;
	static int64_t t98 = -16212456638LL;

	t98 = ((x437+(x438%x439))%x440);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x445 = -1;
	uint8_t x448 = 1U;
	int32_t t99 = 26318;

	t99 = ((x445+(x446%x447))%x448);

	if (t99 != 0) { NG(); } else { ; }
	
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

