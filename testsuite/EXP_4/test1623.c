#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = 7;
int64_t x16 = INT64_MIN;
int32_t x20 = -123390539;
static uint32_t t4 = 189U;
int32_t x29 = -1;
volatile int8_t x34 = -51;
int32_t x35 = -1;
int64_t t8 = 22511LL;
int16_t x37 = INT16_MIN;
int64_t x40 = INT64_MIN;
int32_t x44 = INT32_MAX;
uint32_t x45 = 496319641U;
uint32_t t11 = 41392529U;
static int8_t x51 = 28;
uint32_t t13 = 1691U;
int64_t x60 = INT64_MAX;
uint64_t x61 = 3391014537370349LLU;
int8_t x62 = INT8_MIN;
int64_t x65 = 2879927003853714LL;
int64_t x66 = -1LL;
static volatile int32_t x67 = 1;
int64_t x68 = -99643638534922LL;
volatile int64_t t16 = 40297211035203LL;
int16_t x83 = -1;
int64_t x92 = 7619LL;
volatile int32_t t25 = 370922;
volatile uint64_t t26 = 4160329692293129326LLU;
uint16_t x116 = 3U;
int8_t x118 = 0;
volatile int32_t t29 = -60988;
static volatile int32_t x121 = 96828;
static int32_t t30 = -67051219;
int32_t x131 = INT32_MAX;
volatile uint32_t x135 = UINT32_MAX;
uint8_t x138 = 7U;
int8_t x140 = INT8_MIN;
uint32_t x142 = 982566305U;
int8_t x144 = INT8_MAX;
static int32_t x163 = INT32_MIN;
uint64_t x164 = UINT64_MAX;
volatile int64_t t41 = 1066LL;
volatile int32_t x171 = INT32_MAX;
uint16_t x173 = 1U;
int32_t x176 = 127289584;
volatile int16_t x178 = -13;
uint32_t x182 = 3U;
volatile int64_t t46 = 3240039431680953LL;
static uint16_t x207 = 442U;
volatile int32_t t51 = -30;
static int16_t x209 = INT16_MIN;
int64_t x214 = INT64_MIN;
volatile uint8_t x215 = 1U;
uint32_t x217 = 11697701U;
int8_t x219 = -15;
int16_t x223 = INT16_MIN;
int32_t x227 = INT32_MIN;
int64_t x240 = -1LL;
volatile int16_t x244 = INT16_MIN;
static volatile uint32_t x246 = 3U;
int64_t t61 = 32211787332LL;
static volatile int64_t x254 = -8258032LL;
int16_t x258 = 89;
volatile int8_t x267 = -1;
int16_t x269 = INT16_MAX;
volatile int64_t x275 = INT64_MAX;
volatile int32_t t70 = 0;
static uint64_t x287 = 79020572629LLU;
static int32_t x298 = 2;
int64_t x304 = INT64_MIN;
int64_t x306 = INT64_MIN;
int16_t x308 = -1444;
volatile int32_t t76 = 5331;
volatile uint32_t x309 = UINT32_MAX;
int16_t x311 = -1;
static int32_t x313 = -728643;
static int16_t x314 = INT16_MIN;
uint8_t x316 = 0U;
int32_t x324 = INT32_MIN;
int16_t x329 = 2;
volatile int64_t x331 = 10075207LL;
static int8_t x346 = INT8_MIN;
volatile int32_t x350 = INT32_MIN;
uint32_t x352 = 1339703U;
volatile int32_t t88 = -3380107;
static uint64_t x358 = UINT64_MAX;
volatile int32_t t89 = 26;
uint64_t x361 = UINT64_MAX;
static volatile int64_t x364 = INT64_MIN;
int32_t x370 = INT32_MIN;
int64_t x371 = INT64_MIN;
int8_t x381 = 49;
int32_t t98 = -103506;
int8_t x398 = INT8_MIN;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	int8_t x2 = -4;
	static volatile int64_t x3 = -4293LL;
	int32_t x4 = -20212693;
	int32_t t0 = 295112826;

	t0 = (x1&(x2==(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 198341719LLU;
	uint32_t x6 = UINT32_MAX;
	int32_t x7 = INT32_MAX;
	int32_t x8 = 71;
	static volatile uint64_t t1 = 2646781342LLU;

	t1 = (x5&(x6==(x7<=x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile int32_t x10 = INT32_MIN;
	int32_t x11 = INT32_MIN;
	uint16_t x12 = UINT16_MAX;

	t2 = (x9&(x10==(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile int8_t x14 = 1;
	int16_t x15 = -1;
	static volatile int64_t t3 = 27910050988LL;

	t3 = (x13&(x14==(x15<=x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	int64_t x18 = INT64_MIN;
	int16_t x19 = INT16_MIN;

	t4 = (x17&(x18==(x19<=x20)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	volatile int64_t x22 = -1LL;
	uint16_t x23 = UINT16_MAX;
	uint64_t x24 = UINT64_MAX;
	uint64_t t5 = 24563882480232LLU;

	t5 = (x21&(x22==(x23<=x24)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = INT8_MAX;
	int64_t x26 = -81374642342004091LL;
	uint32_t x27 = UINT32_MAX;
	static int8_t x28 = -1;
	volatile int32_t t6 = 88578;

	t6 = (x25&(x26==(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x30 = 3824331277419148LLU;
	int32_t x31 = INT32_MAX;
	uint16_t x32 = UINT16_MAX;
	static volatile int32_t t7 = 267671319;

	t7 = (x29&(x30==(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 4298472642LL;
	uint8_t x36 = 27U;

	t8 = (x33&(x34==(x35<=x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x38 = -1LL;
	int8_t x39 = -1;
	volatile int32_t t9 = 1655;

	t9 = (x37&(x38==(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -15498298;
	uint16_t x42 = 427U;
	int64_t x43 = 3772623178025679LL;
	int32_t t10 = 10996;

	t10 = (x41&(x42==(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MIN;
	volatile uint32_t x47 = 322U;
	int8_t x48 = INT8_MIN;

	t11 = (x45&(x46==(x47<=x48)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	uint32_t x50 = 68U;
	static volatile uint32_t x52 = 3U;
	volatile int32_t t12 = -54;

	t12 = (x49&(x50==(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = 432993180U;
	static int8_t x54 = INT8_MIN;
	int16_t x55 = -1;
	static volatile int8_t x56 = -1;

	t13 = (x53&(x54==(x55<=x56)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 4120464449768LLU;
	int64_t x58 = INT64_MIN;
	int16_t x59 = -13997;
	uint64_t t14 = 2623398666699353LLU;

	t14 = (x57&(x58==(x59<=x60)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x63 = INT16_MAX;
	uint32_t x64 = 313725232U;
	uint64_t t15 = 1920483LLU;

	t15 = (x61&(x62==(x63<=x64)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {


	t16 = (x65&(x66==(x67<=x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -45913738722083LL;
	volatile int16_t x70 = INT16_MAX;
	int8_t x71 = 11;
	int64_t x72 = INT64_MIN;
	volatile int64_t t17 = -3LL;

	t17 = (x69&(x70==(x71<=x72)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	int64_t x75 = INT64_MAX;
	volatile int16_t x76 = 1;
	static volatile int32_t t18 = 1;

	t18 = (x73&(x74==(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MIN;
	int16_t x78 = INT16_MIN;
	static volatile uint64_t x79 = 33190841558LLU;
	volatile int32_t x80 = INT32_MAX;
	volatile int32_t t19 = 1;

	t19 = (x77&(x78==(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = -451671944859314LL;
	static int32_t x84 = INT32_MIN;
	volatile int32_t t20 = -43041486;

	t20 = (x81&(x82==(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	static uint64_t x86 = 29559LLU;
	int8_t x87 = INT8_MIN;
	int64_t x88 = -1LL;
	static int32_t t21 = 39033;

	t21 = (x85&(x86==(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 1360;
	int8_t x90 = -1;
	static int32_t x91 = 1;
	static volatile int32_t t22 = 2;

	t22 = (x89&(x90==(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -1;
	volatile uint64_t x94 = 16640807619383122LLU;
	int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MAX;
	volatile int32_t t23 = -19102625;

	t23 = (x93&(x94==(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 7U;
	static int16_t x98 = -5;
	volatile int64_t x99 = INT64_MIN;
	int8_t x100 = INT8_MAX;
	int32_t t24 = -5;

	t24 = (x97&(x98==(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	uint16_t x102 = 1256U;
	static int16_t x103 = INT16_MIN;
	static int16_t x104 = INT16_MIN;

	t25 = (x101&(x102==(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 518219970353LLU;
	volatile uint16_t x106 = 5580U;
	int64_t x107 = INT64_MIN;
	int8_t x108 = 49;

	t26 = (x105&(x106==(x107<=x108)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	int32_t x110 = 2295890;
	int32_t x111 = 49879771;
	int32_t x112 = INT32_MAX;
	volatile int32_t t27 = 42739;

	t27 = (x109&(x110==(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MAX;
	static int16_t x114 = -2848;
	int32_t x115 = -1;
	volatile int64_t t28 = 760LL;

	t28 = (x113&(x114==(x115<=x116)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = 83U;
	int8_t x119 = -1;
	int16_t x120 = INT16_MIN;

	t29 = (x117&(x118==(x119<=x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MIN;
	uint64_t x124 = 108144449938907169LLU;

	t30 = (x121&(x122==(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 0;
	int16_t x126 = INT16_MIN;
	volatile int16_t x127 = -429;
	static int16_t x128 = -112;
	volatile int32_t t31 = 1;

	t31 = (x125&(x126==(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x129 = INT64_MAX;
	int64_t x130 = INT64_MAX;
	int16_t x132 = -2;
	int64_t t32 = 139113646884570LL;

	t32 = (x129&(x130==(x131<=x132)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -2328;
	uint32_t x134 = 981U;
	volatile int16_t x136 = INT16_MIN;
	int32_t t33 = 27655;

	t33 = (x133&(x134==(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = 2606U;
	volatile int64_t x139 = -1LL;
	static uint32_t t34 = 120090U;

	t34 = (x137&(x138==(x139<=x140)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	int64_t x143 = INT64_MIN;
	static volatile int32_t t35 = -5;

	t35 = (x141&(x142==(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int32_t x146 = 1;
	uint64_t x147 = UINT64_MAX;
	int64_t x148 = -5LL;
	volatile int64_t t36 = -776728211LL;

	t36 = (x145&(x146==(x147<=x148)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int8_t x150 = INT8_MIN;
	volatile int32_t x151 = 62515335;
	int16_t x152 = INT16_MAX;
	int32_t t37 = -39019286;

	t37 = (x149&(x150==(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = 2;
	static int64_t x154 = INT64_MAX;
	uint16_t x155 = UINT16_MAX;
	static int32_t x156 = INT32_MAX;
	volatile int32_t t38 = -2760;

	t38 = (x153&(x154==(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = INT16_MIN;
	int16_t x158 = -629;
	uint32_t x159 = UINT32_MAX;
	int8_t x160 = INT8_MAX;
	static int32_t t39 = 97085390;

	t39 = (x157&(x158==(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 2U;
	uint16_t x162 = UINT16_MAX;
	int32_t t40 = 34;

	t40 = (x161&(x162==(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x165 = INT64_MAX;
	int8_t x166 = INT8_MIN;
	int32_t x167 = INT32_MAX;
	int8_t x168 = 2;

	t41 = (x165&(x166==(x167<=x168)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 5;
	uint16_t x170 = UINT16_MAX;
	static volatile uint32_t x172 = 13U;
	static int32_t t42 = -949;

	t42 = (x169&(x170==(x171<=x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = -23527296;
	int16_t x175 = INT16_MAX;
	static volatile int32_t t43 = 19399;

	t43 = (x173&(x174==(x175<=x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int64_t x179 = INT64_MIN;
	static int16_t x180 = INT16_MIN;
	volatile int32_t t44 = 55248189;

	t44 = (x177&(x178==(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x181 = INT8_MIN;
	volatile int32_t x183 = 2023;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t45 = 126983118;

	t45 = (x181&(x182==(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = -1LL;
	static int64_t x186 = INT64_MAX;
	uint16_t x187 = 1325U;
	volatile uint8_t x188 = 32U;

	t46 = (x185&(x186==(x187<=x188)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	static uint64_t x190 = 2587590626832771518LLU;
	uint32_t x191 = 350421285U;
	uint8_t x192 = 1U;
	volatile uint32_t t47 = 110118926U;

	t47 = (x189&(x190==(x191<=x192)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = -95;
	int32_t x195 = INT32_MAX;
	static int16_t x196 = INT16_MIN;
	volatile int32_t t48 = -108925840;

	t48 = (x193&(x194==(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	int64_t x198 = -2018LL;
	static int16_t x199 = INT16_MIN;
	int16_t x200 = -1;
	int32_t t49 = -398;

	t49 = (x197&(x198==(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x201 = 12076U;
	static uint16_t x202 = UINT16_MAX;
	int64_t x203 = -1LL;
	int8_t x204 = INT8_MAX;
	int32_t t50 = 23;

	t50 = (x201&(x202==(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = -1019;
	static uint8_t x206 = UINT8_MAX;
	volatile uint16_t x208 = 1U;

	t51 = (x205&(x206==(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = 0;
	uint16_t x211 = 27U;
	uint32_t x212 = 14640U;
	static int32_t t52 = 45494;

	t52 = (x209&(x210==(x211<=x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MAX;
	int32_t x216 = 4;
	int64_t t53 = 2906058181974147LL;

	t53 = (x213&(x214==(x215<=x216)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MAX;
	uint16_t x220 = 24U;
	static uint32_t t54 = 11936U;

	t54 = (x217&(x218==(x219<=x220)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = INT8_MIN;
	int64_t x222 = -1LL;
	int8_t x224 = -1;
	volatile int32_t t55 = 46650;

	t55 = (x221&(x222==(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 23446U;
	int8_t x226 = INT8_MIN;
	int64_t x228 = INT64_MAX;
	uint32_t t56 = 211314470U;

	t56 = (x225&(x226==(x227<=x228)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = INT32_MAX;
	volatile int32_t x230 = -64944;
	static uint64_t x231 = UINT64_MAX;
	static uint8_t x232 = 1U;
	volatile int32_t t57 = 199;

	t57 = (x229&(x230==(x231<=x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MAX;
	volatile uint64_t x234 = UINT64_MAX;
	volatile int32_t x235 = -1;
	volatile int16_t x236 = 2505;
	static int32_t t58 = -786433;

	t58 = (x233&(x234==(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = 6296;
	int8_t x238 = INT8_MAX;
	int8_t x239 = INT8_MIN;
	int32_t t59 = 273;

	t59 = (x237&(x238==(x239<=x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	int16_t x242 = 15262;
	static volatile uint16_t x243 = 814U;
	int32_t t60 = -45;

	t60 = (x241&(x242==(x243<=x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -5709675528744LL;
	uint32_t x247 = 180U;
	volatile int32_t x248 = 5176660;

	t61 = (x245&(x246==(x247<=x248)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 0;
	int32_t x250 = INT32_MIN;
	int8_t x251 = INT8_MAX;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t62 = 2011661;

	t62 = (x249&(x250==(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = 10;
	int8_t x255 = INT8_MAX;
	uint32_t x256 = 73U;
	int32_t t63 = 1039393;

	t63 = (x253&(x254==(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 560407483U;
	uint8_t x259 = 22U;
	static int16_t x260 = INT16_MIN;
	volatile uint32_t t64 = 58619656U;

	t64 = (x257&(x258==(x259<=x260)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -1;
	int64_t x262 = INT64_MIN;
	int64_t x263 = 28241677925171016LL;
	static int8_t x264 = -1;
	int32_t t65 = -829283990;

	t65 = (x261&(x262==(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MIN;
	volatile int64_t x266 = INT64_MIN;
	static int16_t x268 = -1;
	static volatile int32_t t66 = 828413;

	t66 = (x265&(x266==(x267<=x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x270 = UINT16_MAX;
	volatile int32_t x271 = INT32_MIN;
	static int8_t x272 = INT8_MIN;
	int32_t t67 = -732;

	t67 = (x269&(x270==(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = 29013346;
	volatile int8_t x274 = INT8_MAX;
	int8_t x276 = -9;
	int32_t t68 = -426;

	t68 = (x273&(x274==(x275<=x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -242840445393128LL;
	static uint32_t x278 = 2959U;
	int8_t x279 = -1;
	static uint8_t x280 = 30U;
	volatile int64_t t69 = -62LL;

	t69 = (x277&(x278==(x279<=x280)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = INT32_MAX;
	static int64_t x282 = 0LL;
	uint16_t x283 = 7U;
	int32_t x284 = INT32_MIN;

	t70 = (x281&(x282==(x283<=x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = UINT64_MAX;
	int32_t x286 = INT32_MIN;
	int64_t x288 = INT64_MIN;
	static uint64_t t71 = 121LLU;

	t71 = (x285&(x286==(x287<=x288)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x289 = INT64_MIN;
	volatile int32_t x290 = -1;
	uint32_t x291 = UINT32_MAX;
	int64_t x292 = INT64_MIN;
	volatile int64_t t72 = -9262620573959LL;

	t72 = (x289&(x290==(x291<=x292)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = -1;
	uint32_t x294 = 65094U;
	int64_t x295 = INT64_MIN;
	static uint64_t x296 = 133247395300611LLU;
	int32_t t73 = 960756;

	t73 = (x293&(x294==(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MIN;
	static volatile uint16_t x299 = UINT16_MAX;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 7;

	t74 = (x297&(x298==(x299<=x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = 733680616300LL;
	static int64_t x302 = -150104475744LL;
	int32_t x303 = INT32_MIN;
	int64_t t75 = 110462480858065252LL;

	t75 = (x301&(x302==(x303<=x304)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = -2;
	static volatile int64_t x307 = INT64_MAX;

	t76 = (x305&(x306==(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x310 = UINT64_MAX;
	int64_t x312 = INT64_MIN;
	uint32_t t77 = 147U;

	t77 = (x309&(x310==(x311<=x312)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x315 = -1LL;
	static volatile int32_t t78 = 489;

	t78 = (x313&(x314==(x315<=x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 302LL;
	volatile uint8_t x318 = 2U;
	static int64_t x319 = -1LL;
	static volatile int8_t x320 = 42;
	static volatile int64_t t79 = 6598735LL;

	t79 = (x317&(x318==(x319<=x320)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = 2302U;
	uint8_t x322 = 1U;
	volatile int16_t x323 = INT16_MIN;
	volatile int32_t t80 = -74346549;

	t80 = (x321&(x322==(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = -1LL;
	uint64_t x326 = UINT64_MAX;
	static uint16_t x327 = 906U;
	static int8_t x328 = 46;
	int64_t t81 = -204723LL;

	t81 = (x325&(x326==(x327<=x328)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x330 = -1;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t82 = -9018028;

	t82 = (x329&(x330==(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = 1U;
	volatile uint32_t x334 = UINT32_MAX;
	volatile uint8_t x335 = 14U;
	static uint64_t x336 = 55147457902LLU;
	static volatile int32_t t83 = 3113693;

	t83 = (x333&(x334==(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 5308;
	static volatile int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	uint16_t x340 = 1742U;
	int32_t t84 = 3861;

	t84 = (x337&(x338==(x339<=x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 165U;
	int64_t x342 = 495LL;
	uint32_t x343 = 104558U;
	int8_t x344 = -1;
	static int32_t t85 = 252576;

	t85 = (x341&(x342==(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = 61808909LL;
	uint8_t x347 = 5U;
	volatile int64_t x348 = INT64_MIN;
	volatile int64_t t86 = 47318649617LL;

	t86 = (x345&(x346==(x347<=x348)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 13218386U;
	uint8_t x351 = 31U;
	uint32_t t87 = 2U;

	t87 = (x349&(x350==(x351<=x352)));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = 17588U;
	volatile uint32_t x354 = UINT32_MAX;
	int64_t x355 = -1LL;
	uint32_t x356 = UINT32_MAX;

	t88 = (x353&(x354==(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 4941U;
	uint8_t x359 = 95U;
	static volatile int64_t x360 = -3789035132663867LL;

	t89 = (x357&(x358==(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x362 = 29LLU;
	int64_t x363 = -918923572LL;
	volatile uint64_t t90 = 63LLU;

	t90 = (x361&(x362==(x363<=x364)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = -1;
	int16_t x366 = 0;
	int64_t x367 = INT64_MIN;
	volatile int8_t x368 = 6;
	static volatile int32_t t91 = -7181675;

	t91 = (x365&(x366==(x367<=x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 21928480920750847LLU;
	int64_t x372 = -1LL;
	volatile uint64_t t92 = 64317158LLU;

	t92 = (x369&(x370==(x371<=x372)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x373 = 5U;
	int16_t x374 = INT16_MIN;
	volatile int64_t x375 = -1LL;
	int16_t x376 = INT16_MIN;
	volatile int32_t t93 = 1;

	t93 = (x373&(x374==(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	int64_t x378 = INT64_MAX;
	int64_t x379 = INT64_MAX;
	int64_t x380 = INT64_MIN;
	int32_t t94 = -174670;

	t94 = (x377&(x378==(x379<=x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -1;
	uint32_t x383 = UINT32_MAX;
	volatile int8_t x384 = 37;
	int32_t t95 = -85343626;

	t95 = (x381&(x382==(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	static int32_t x386 = 19897;
	int16_t x387 = INT16_MIN;
	volatile uint64_t x388 = 3LLU;
	int32_t t96 = -168;

	t96 = (x385&(x386==(x387<=x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 26;
	volatile int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MAX;
	volatile int64_t x392 = INT64_MIN;
	volatile int32_t t97 = 406555290;

	t97 = (x389&(x390==(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	static uint64_t x394 = UINT64_MAX;
	uint32_t x395 = UINT32_MAX;
	int64_t x396 = INT64_MAX;

	t98 = (x393&(x394==(x395<=x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	uint16_t x399 = 15123U;
	int8_t x400 = INT8_MIN;
	int32_t t99 = -84997;

	t99 = (x397&(x398==(x399<=x400)));

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

