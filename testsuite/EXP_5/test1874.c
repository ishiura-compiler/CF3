#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 122U;
int64_t x4 = INT64_MIN;
static int32_t x5 = 4;
static int16_t x6 = INT16_MAX;
static uint64_t x18 = 3854905LLU;
uint8_t x28 = UINT8_MAX;
int32_t x31 = INT32_MIN;
static uint8_t x32 = 27U;
static volatile int16_t x35 = INT16_MAX;
uint16_t x47 = 7U;
uint64_t x52 = 71500980LLU;
static uint64_t t11 = 1481345468LLU;
static int16_t x53 = INT16_MIN;
int32_t x62 = 483;
int32_t x64 = 5690710;
uint16_t x68 = UINT16_MAX;
volatile uint32_t x69 = 275U;
uint16_t x80 = 30346U;
static volatile int32_t x90 = 17;
volatile int32_t x92 = INT32_MIN;
uint8_t x93 = UINT8_MAX;
volatile int64_t t22 = -15455945151824823LL;
volatile int8_t x99 = 2;
int16_t x109 = 1;
int32_t t26 = 1;
int32_t t27 = 10;
int16_t x120 = INT16_MIN;
uint32_t x126 = 2096U;
uint32_t x131 = 16U;
uint32_t x143 = 4U;
uint8_t x147 = 113U;
uint32_t t35 = 1U;
int8_t x150 = INT8_MIN;
int64_t x172 = 6922486007LL;
int64_t t40 = -42076334785LL;
int64_t x173 = -3595970029128594494LL;
int8_t x175 = 1;
int8_t x176 = 0;
volatile uint32_t x187 = 51573443U;
static int8_t x189 = -5;
uint32_t x191 = 1302U;
int64_t x198 = INT64_MIN;
static uint64_t x202 = 264LLU;
int64_t x206 = -1LL;
int32_t x208 = INT32_MAX;
uint8_t x209 = 0U;
int16_t x211 = INT16_MIN;
int8_t x212 = INT8_MIN;
int32_t t50 = 238925029;
static int8_t x214 = INT8_MIN;
int8_t x215 = INT8_MAX;
int16_t x217 = -1;
int64_t t52 = INT64_MAX;
uint8_t x222 = 10U;
uint32_t x224 = 6587U;
volatile uint8_t x235 = UINT8_MAX;
static int64_t x240 = -1LL;
uint64_t t57 = 10402807351109LLU;
uint16_t x249 = 1U;
uint16_t x251 = UINT16_MAX;
uint64_t t59 = 15943118230936459LLU;
int64_t x267 = -9340327092513LL;
volatile uint64_t t60 = 1302LLU;
int8_t x274 = 41;
static int16_t x281 = -1;
int8_t x287 = -54;
static int8_t x291 = INT8_MAX;
uint64_t t66 = 2075385949085724LLU;
int64_t x293 = INT64_MIN;
uint16_t x304 = 1246U;
volatile int64_t t69 = -1454775LL;
volatile int16_t x311 = INT16_MIN;
int32_t x312 = -16;
volatile int64_t t71 = 1756589LL;
volatile int64_t t72 = 40542649354LL;
int32_t x326 = INT32_MAX;
int64_t x328 = -1064769292558788222LL;
int64_t t73 = 17LL;
volatile int8_t x334 = INT8_MAX;
uint32_t x339 = 531082536U;
int64_t x342 = -1LL;
volatile int64_t t78 = 38960LL;
int32_t x355 = INT32_MIN;
static int32_t t80 = -138;
volatile int64_t x357 = -177794798LL;
static int16_t x361 = -1;
uint16_t x376 = UINT16_MAX;
int32_t x377 = 153066155;
int32_t x378 = -1;
uint32_t t84 = 7969U;
uint64_t t85 = 1297736LLU;
int64_t t86 = -14684697LL;
int16_t x390 = 1;
int16_t x404 = -1;
uint64_t x409 = UINT64_MAX;
static uint64_t t91 = 1176875369390LLU;
uint32_t x418 = UINT32_MAX;
uint32_t t92 = 114981466U;
volatile uint8_t x431 = UINT8_MAX;
int64_t x435 = 11398759719LL;
volatile int64_t x443 = INT64_MIN;
int32_t t99 = -822;


void f0(void) {
	static uint64_t x2 = 3LLU;
	uint16_t x3 = UINT16_MAX;
	static uint64_t t0 = 16234624571321213LLU;

	t0 = (x1-((x2|x3)-x4));

	if (t0 != 9223372036854710395LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x7 = -1LL;
	int32_t x8 = INT32_MIN;
	volatile int64_t t1 = -88765131992LL;

	t1 = (x5-((x6|x7)-x8));

	if (t1 != -2147483643LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint64_t x10 = 8448968606315722733LLU;
	static uint64_t x11 = UINT64_MAX;
	volatile uint16_t x12 = 9204U;
	volatile uint64_t t2 = 162LLU;

	t2 = (x9-((x10|x11)-x12));

	if (t2 != 18446744071562077173LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 26U;
	static int32_t x14 = INT32_MIN;
	uint16_t x15 = 2U;
	volatile int8_t x16 = INT8_MIN;
	volatile uint32_t t3 = 0U;

	t3 = (x13-((x14|x15)-x16));

	if (t3 != 2147483544U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	int64_t x19 = INT64_MAX;
	volatile uint32_t x20 = UINT32_MAX;
	volatile uint64_t t4 = 229207799496702330LLU;

	t4 = (x17-((x18|x19)-x20));

	if (t4 != 9223372041149742976LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -280;
	uint32_t x22 = 65U;
	int64_t x23 = -1LL;
	int32_t x24 = -9;
	int64_t t5 = -359971177982LL;

	t5 = (x21-((x22|x23)-x24));

	if (t5 != -288LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 29310U;
	int16_t x26 = 77;
	volatile uint64_t x27 = 2761248321825968452LLU;
	uint64_t t6 = 1256060674624830048LLU;

	t6 = (x25-((x26|x27)-x28));

	if (t6 != 15685495751883612720LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -15;
	static int8_t x30 = INT8_MAX;
	volatile int32_t t7 = -7400;

	t7 = (x29-((x30|x31)-x32));

	if (t7 != 2147483533) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static int32_t x34 = -98;
	volatile int8_t x36 = -1;
	int64_t t8 = INT64_MIN;

	t8 = (x33-((x34|x35)-x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -24495LL;
	volatile uint8_t x42 = UINT8_MAX;
	uint32_t x43 = 832498649U;
	volatile int8_t x44 = INT8_MIN;
	static int64_t t9 = -13251LL;

	t9 = (x41-((x42|x43)-x44));

	if (t9 != -832523310LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	int8_t x46 = -1;
	int64_t x48 = INT64_MAX;
	int64_t t10 = INT64_MAX;

	t10 = (x45-((x46|x47)-x48));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	static int32_t x50 = INT32_MIN;
	uint16_t x51 = 0U;

	t11 = (x49-((x50|x51)-x52));

	if (t11 != 2218984627LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x54 = UINT32_MAX;
	int64_t x55 = INT64_MIN;
	int64_t x56 = -180625LL;
	static volatile int64_t t12 = 29966927451LL;

	t12 = (x53-((x54|x55)-x56));

	if (t12 != 9223372032559595120LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -1;
	int64_t x58 = -1LL;
	uint16_t x59 = UINT16_MAX;
	uint16_t x60 = 5U;
	volatile int64_t t13 = -1302LL;

	t13 = (x57-((x58|x59)-x60));

	if (t13 != 5LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	static uint32_t x63 = 70561219U;
	uint32_t t14 = 145U;

	t14 = (x61-((x62|x63)-x64));

	if (t14 != 4230063987U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = INT64_MIN;
	volatile int64_t x66 = INT64_MIN;
	static int64_t x67 = -1LL;
	volatile int64_t t15 = -11LL;

	t15 = (x65-((x66|x67)-x68));

	if (t15 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = INT8_MIN;
	int16_t x71 = -1;
	int64_t x72 = INT64_MIN;
	int64_t t16 = 81LL;

	t16 = (x69-((x70|x71)-x72));

	if (t16 != -9223372036854775532LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	uint64_t x74 = 27467721LLU;
	static uint16_t x75 = 73U;
	int16_t x76 = INT16_MIN;
	static volatile uint64_t t17 = 71LLU;

	t17 = (x73-((x74|x75)-x76));

	if (t17 != 18446744071534567479LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 2;
	int32_t x78 = INT32_MIN;
	uint32_t x79 = 59751U;
	volatile uint32_t t18 = 481545U;

	t18 = (x77-((x78|x79)-x80));

	if (t18 != 2147454245U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	uint32_t x82 = UINT32_MAX;
	volatile int8_t x83 = -1;
	uint64_t x84 = UINT64_MAX;
	static uint64_t t19 = 5649424041754LLU;

	t19 = (x81-((x82|x83)-x84));

	if (t19 != 18446744069414584319LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	uint8_t x86 = 37U;
	volatile uint16_t x87 = 10560U;
	int8_t x88 = -14;
	volatile int32_t t20 = 711181;

	t20 = (x85-((x86|x87)-x88));

	if (t20 != -10739) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -1;
	int16_t x91 = INT16_MIN;
	static volatile int32_t t21 = -5;

	t21 = (x89-((x90|x91)-x92));

	if (t21 != -2147450898) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = -1LL;
	int8_t x95 = INT8_MIN;
	int64_t x96 = -16LL;

	t22 = (x93-((x94|x95)-x96));

	if (t22 != 240LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x97 = 11U;
	int64_t x98 = -1LL;
	int64_t x100 = -766423LL;
	int64_t t23 = 7960993408LL;

	t23 = (x97-((x98|x99)-x100));

	if (t23 != -766411LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -1;
	volatile uint32_t x102 = 14765682U;
	int64_t x103 = INT64_MAX;
	int32_t x104 = INT32_MAX;
	volatile int64_t t24 = 61068674398LL;

	t24 = (x101-((x102|x103)-x104));

	if (t24 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x105 = UINT8_MAX;
	volatile int16_t x106 = -1;
	int64_t x107 = -159LL;
	int32_t x108 = -78759;
	int64_t t25 = 49451872201960LL;

	t25 = (x105-((x106|x107)-x108));

	if (t25 != -78503LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x110 = 26U;
	int16_t x111 = -164;
	int32_t x112 = -22068755;

	t26 = (x109-((x110|x111)-x112));

	if (t26 != -22068592) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = 77227443;
	uint8_t x114 = UINT8_MAX;
	int8_t x115 = INT8_MIN;
	int32_t x116 = INT32_MIN;

	t27 = (x113-((x114|x115)-x116));

	if (t27 != -2070256204) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = 6445;
	int8_t x118 = INT8_MIN;
	static volatile int16_t x119 = -1;
	int32_t t28 = 73;

	t28 = (x117-((x118|x119)-x120));

	if (t28 != -26322) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = INT8_MIN;
	uint64_t x122 = UINT64_MAX;
	int16_t x123 = INT16_MIN;
	int8_t x124 = 9;
	volatile uint64_t t29 = 136714344LLU;

	t29 = (x121-((x122|x123)-x124));

	if (t29 != 18446744073709551498LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = UINT32_MAX;
	uint16_t x127 = UINT16_MAX;
	int32_t x128 = -1;
	static volatile uint32_t t30 = 672U;

	t30 = (x125-((x126|x127)-x128));

	if (t30 != 4294901759U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = 15428;
	int8_t x130 = -1;
	volatile uint8_t x132 = 14U;
	uint32_t t31 = 2077288U;

	t31 = (x129-((x130|x131)-x132));

	if (t31 != 15443U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x133 = INT64_MIN;
	static int32_t x134 = -1;
	int8_t x135 = -1;
	static uint16_t x136 = 113U;
	int64_t t32 = 1310974834763884251LL;

	t32 = (x133-((x134|x135)-x136));

	if (t32 != -9223372036854775694LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = -1LL;
	static uint32_t x139 = UINT32_MAX;
	uint64_t x140 = UINT64_MAX;
	uint64_t t33 = 21037826694829LLU;

	t33 = (x137-((x138|x139)-x140));

	if (t33 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -1;
	int64_t x142 = INT64_MIN;
	static int8_t x144 = -3;
	int64_t t34 = -31021884186765LL;

	t34 = (x141-((x142|x143)-x144));

	if (t34 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 2U;
	uint8_t x146 = 0U;
	static int16_t x148 = -2740;

	t35 = (x145-((x146|x147)-x148));

	if (t35 != 4294964445U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MAX;
	static int8_t x151 = 4;
	uint32_t x152 = 28347815U;
	uint32_t t36 = 5769U;

	t36 = (x149-((x150|x151)-x152));

	if (t36 != 28348066U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = UINT64_MAX;
	int8_t x154 = INT8_MAX;
	int8_t x155 = INT8_MIN;
	static int16_t x156 = INT16_MAX;
	uint64_t t37 = 149LLU;

	t37 = (x153-((x154|x155)-x156));

	if (t37 != 32767LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MIN;
	uint8_t x158 = UINT8_MAX;
	volatile int16_t x159 = -1;
	int64_t x160 = 215949794705054LL;
	int64_t t38 = -2290321195857LL;

	t38 = (x157-((x158|x159)-x160));

	if (t38 != 215947647221407LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 24U;
	uint64_t x162 = UINT64_MAX;
	static int8_t x163 = INT8_MAX;
	volatile int64_t x164 = INT64_MIN;
	volatile uint64_t t39 = 63366052982561LLU;

	t39 = (x161-((x162|x163)-x164));

	if (t39 != 9223372036854775833LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = UINT32_MAX;
	int32_t x170 = 525484;
	static volatile int32_t x171 = -1;

	t40 = (x169-((x170|x171)-x172));

	if (t40 != 11217453303LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x174 = 1822834U;
	volatile int64_t t41 = -13204512640947965LL;

	t41 = (x173-((x174|x175)-x176));

	if (t41 != -3595970029130417329LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 1871U;
	int16_t x178 = -1;
	uint16_t x179 = 207U;
	int16_t x180 = -1;
	static uint32_t t42 = 55U;

	t42 = (x177-((x178|x179)-x180));

	if (t42 != 1871U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = -374629;
	volatile uint64_t x182 = 1672893LLU;
	volatile int64_t x183 = -1LL;
	int64_t x184 = 938LL;
	volatile uint64_t t43 = 467359768221LLU;

	t43 = (x181-((x182|x183)-x184));

	if (t43 != 18446744073709177926LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = UINT64_MAX;
	int64_t x186 = -1LL;
	int8_t x188 = INT8_MIN;
	uint64_t t44 = 1LLU;

	t44 = (x185-((x186|x187)-x188));

	if (t44 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x190 = -1;
	volatile int32_t x192 = INT32_MIN;
	static volatile uint32_t t45 = 973384U;

	t45 = (x189-((x190|x191)-x192));

	if (t45 != 2147483644U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 43887829LLU;
	static int8_t x194 = INT8_MIN;
	static int8_t x195 = INT8_MAX;
	static int64_t x196 = 17208796526025LL;
	static volatile uint64_t t46 = 54LLU;

	t46 = (x193-((x194|x195)-x196));

	if (t46 != 17208840413855LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = -12;
	uint32_t x199 = UINT32_MAX;
	uint64_t x200 = UINT64_MAX;
	uint64_t t47 = 2078587268459LLU;

	t47 = (x197-((x198|x199)-x200));

	if (t47 != 9223372032559808500LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x201 = 7;
	volatile int16_t x203 = 13;
	int8_t x204 = -1;
	volatile uint64_t t48 = 21848157825230470LLU;

	t48 = (x201-((x202|x203)-x204));

	if (t48 != 18446744073709551353LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x205 = UINT32_MAX;
	static int8_t x207 = -7;
	int64_t t49 = -435029293LL;

	t49 = (x205-((x206|x207)-x208));

	if (t49 != 6442450943LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x210 = -1;

	t50 = (x209-((x210|x211)-x212));

	if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = UINT8_MAX;
	static int8_t x216 = -1;
	static volatile int32_t t51 = -72685568;

	t51 = (x213-((x214|x215)-x216));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x218 = -1;
	static int64_t x219 = INT64_MAX;
	int64_t x220 = INT64_MAX;

	t52 = (x217-((x218|x219)-x220));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x221 = INT32_MIN;
	uint32_t x223 = 27U;
	volatile uint32_t t53 = 0U;

	t53 = (x221-((x222|x223)-x224));

	if (t53 != 2147490208U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = -3212;
	int64_t x226 = 629LL;
	volatile int32_t x227 = INT32_MAX;
	static int8_t x228 = INT8_MIN;
	int64_t t54 = 635LL;

	t54 = (x225-((x226|x227)-x228));

	if (t54 != -2147486987LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x229 = 1306;
	static int8_t x230 = INT8_MAX;
	int32_t x231 = INT32_MIN;
	volatile int32_t x232 = INT32_MIN;
	static int32_t t55 = 370462979;

	t55 = (x229-((x230|x231)-x232));

	if (t55 != 1179) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = UINT8_MAX;
	volatile uint64_t x234 = 43940518163LLU;
	int64_t x236 = INT64_MIN;
	volatile uint64_t t56 = 4087676286441853473LLU;

	t56 = (x233-((x234|x235)-x236));

	if (t56 != 9223371992914257664LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MIN;
	volatile uint8_t x238 = UINT8_MAX;
	volatile uint64_t x239 = 134439662523540265LLU;

	t57 = (x237-((x238|x239)-x240));

	if (t57 != 18312304411185978368LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x250 = 3903;
	int8_t x252 = INT8_MIN;
	int32_t t58 = -344975779;

	t58 = (x249-((x250|x251)-x252));

	if (t58 != -65662) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = INT64_MIN;
	static int32_t x254 = INT32_MIN;
	volatile int16_t x255 = 0;
	uint64_t x256 = 3258359392LLU;

	t59 = (x253-((x254|x255)-x256));

	if (t59 != 9223372042260618848LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = INT32_MAX;
	uint16_t x266 = 429U;
	static uint64_t x268 = 244348776492809063LLU;

	t60 = (x265-((x266|x267)-x268));

	if (t60 != 244358118967384935LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MIN;
	int64_t x271 = -1LL;
	int16_t x272 = INT16_MIN;
	static volatile int64_t t61 = 41029055LL;

	t61 = (x269-((x270|x271)-x272));

	if (t61 != -65535LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x273 = -1246;
	uint16_t x275 = 3456U;
	int32_t x276 = INT32_MAX;
	int32_t t62 = 18677;

	t62 = (x273-((x274|x275)-x276));

	if (t62 != 2147478904) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x277 = 1114773900LL;
	uint32_t x278 = 936U;
	uint64_t x279 = UINT64_MAX;
	uint8_t x280 = 42U;
	static volatile uint64_t t63 = 359035414LLU;

	t63 = (x277-((x278|x279)-x280));

	if (t63 != 1114773943LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x282 = INT64_MAX;
	int32_t x283 = -1;
	int64_t x284 = -1LL;
	int64_t t64 = 458LL;

	t64 = (x281-((x282|x283)-x284));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x285 = -1;
	int64_t x286 = -6661LL;
	uint16_t x288 = UINT16_MAX;
	int64_t t65 = -725903LL;

	t65 = (x285-((x286|x287)-x288));

	if (t65 != 65539LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x289 = 6883672877356718051LLU;
	volatile int32_t x290 = INT32_MIN;
	int16_t x292 = -1;

	t66 = (x289-((x290|x291)-x292));

	if (t66 != 6883672879504201571LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x294 = 7366358471329604LLU;
	static uint64_t x295 = 819192LLU;
	volatile int32_t x296 = 858190511;
	static uint64_t t67 = 2LLU;

	t67 = (x293-((x294|x295)-x296));

	if (t67 != 9216005679241360051LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = INT32_MAX;
	uint16_t x302 = UINT16_MAX;
	uint16_t x303 = UINT16_MAX;
	volatile int32_t t68 = -11742;

	t68 = (x301-((x302|x303)-x304));

	if (t68 != 2147419358) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = INT16_MIN;
	volatile int64_t x306 = INT64_MIN;
	int64_t x307 = -86413721097467762LL;
	volatile uint8_t x308 = UINT8_MAX;

	t69 = (x305-((x306|x307)-x308));

	if (t69 != 86413721097435249LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = 29;
	volatile int32_t x310 = -1;
	static int32_t t70 = 682;

	t70 = (x309-((x310|x311)-x312));

	if (t70 != 14) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = INT64_MAX;
	int16_t x314 = INT16_MAX;
	int32_t x315 = INT32_MAX;
	static uint8_t x316 = 0U;

	t71 = (x313-((x314|x315)-x316));

	if (t71 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x321 = INT32_MIN;
	int64_t x322 = -1LL;
	int16_t x323 = INT16_MIN;
	volatile int32_t x324 = INT32_MAX;

	t72 = (x321-((x322|x323)-x324));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x325 = -3123063083LL;
	static uint16_t x327 = 5U;

	t73 = (x325-((x326|x327)-x328));

	if (t73 != -1064769297829334952LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MAX;
	uint16_t x331 = 4375U;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t74 = 2037U;

	t74 = (x329-((x330|x331)-x332));

	if (t74 != 4294901760U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = INT64_MIN;
	static volatile int8_t x335 = INT8_MIN;
	volatile int64_t x336 = INT64_MAX;
	int64_t t75 = -1LL;

	t75 = (x333-((x334|x335)-x336));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = -1766005366332LL;
	uint64_t x338 = 579104301899080751LLU;
	static uint64_t x340 = UINT64_MAX;
	uint64_t t76 = 18744695374276591LLU;

	t76 = (x337-((x338|x339)-x340));

	if (t76 != 17867638005718627476LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = INT16_MIN;
	static volatile uint64_t x343 = 4534591LLU;
	volatile uint8_t x344 = 89U;
	volatile uint64_t t77 = 15154825409852918LLU;

	t77 = (x341-((x342|x343)-x344));

	if (t77 != 18446744073709518938LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x345 = 46U;
	int32_t x346 = INT32_MAX;
	uint16_t x347 = UINT16_MAX;
	static int64_t x348 = -527577748LL;

	t78 = (x345-((x346|x347)-x348));

	if (t78 != -2675061349LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x349 = 20U;
	static volatile int64_t x350 = INT64_MIN;
	static uint64_t x351 = UINT64_MAX;
	uint32_t x352 = 33420416U;
	static volatile uint64_t t79 = 1221514503LLU;

	t79 = (x349-((x350|x351)-x352));

	if (t79 != 33420437LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x353 = INT8_MIN;
	int16_t x354 = -1;
	int32_t x356 = -1;

	t80 = (x353-((x354|x355)-x356));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x358 = -858793;
	static int8_t x359 = -2;
	int8_t x360 = -1;
	int64_t t81 = 460645991LL;

	t81 = (x357-((x358|x359)-x360));

	if (t81 != -177794798LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x362 = 77543;
	static int8_t x363 = INT8_MAX;
	int64_t x364 = -1LL;
	int64_t t82 = 31982LL;

	t82 = (x361-((x362|x363)-x364));

	if (t82 != -77569LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x373 = INT8_MIN;
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MIN;
	int64_t t83 = -1828998102174702567LL;

	t83 = (x373-((x374|x375)-x376));

	if (t83 != 98175LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x379 = 1;
	uint32_t x380 = 1307107049U;

	t84 = (x377-((x378|x379)-x380));

	if (t84 != 1460173205U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x381 = 1U;
	uint64_t x382 = UINT64_MAX;
	static int16_t x383 = INT16_MAX;
	static int32_t x384 = INT32_MIN;

	t85 = (x381-((x382|x383)-x384));

	if (t85 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x385 = INT16_MAX;
	static int64_t x386 = INT64_MAX;
	int64_t x387 = INT64_MIN;
	static int32_t x388 = -1;

	t86 = (x385-((x386|x387)-x388));

	if (t86 != 32767LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x389 = INT8_MAX;
	uint16_t x391 = 469U;
	uint64_t x392 = 16388131259LLU;
	uint64_t t87 = 3572137524234LLU;

	t87 = (x389-((x390|x391)-x392));

	if (t87 != 16388130917LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = 1;
	volatile uint32_t x402 = 7451366U;
	int8_t x403 = INT8_MIN;
	static uint32_t t88 = 364571026U;

	t88 = (x401-((x402|x403)-x404));

	if (t88 != 26U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x405 = 2446083633LL;
	static uint16_t x406 = UINT16_MAX;
	int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MAX;
	int64_t t89 = -1LL;

	t89 = (x405-((x406|x407)-x408));

	if (t89 != 2446116401LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x410 = INT32_MAX;
	int64_t x411 = 26439462547LL;
	int32_t x412 = INT32_MIN;
	volatile uint64_t t90 = 2223734689466663878LLU;

	t90 = (x409-((x410|x411)-x412));

	if (t90 != 18446744043644780544LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x413 = 7;
	uint64_t x414 = 637591324566494971LLU;
	static uint16_t x415 = UINT16_MAX;
	int8_t x416 = -2;

	t91 = (x413-((x414|x415)-x416));

	if (t91 != 17809152749142999046LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x417 = 299U;
	int32_t x419 = INT32_MIN;
	uint8_t x420 = UINT8_MAX;

	t92 = (x417-((x418|x419)-x420));

	if (t92 != 555U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x421 = 23LLU;
	int64_t x422 = -58992812535154LL;
	static int32_t x423 = INT32_MIN;
	uint32_t x424 = 3957U;
	volatile uint64_t t93 = 239406499897783793LLU;

	t93 = (x421-((x422|x423)-x424));

	if (t93 != 1436728574LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x425 = INT32_MIN;
	int8_t x426 = -1;
	static uint16_t x427 = 3U;
	static volatile int32_t x428 = 3;
	volatile int32_t t94 = 213226061;

	t94 = (x425-((x426|x427)-x428));

	if (t94 != -2147483644) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x429 = 20773066066LLU;
	int8_t x430 = -14;
	int64_t x432 = INT64_MAX;
	static volatile uint64_t t95 = 50376966199193450LLU;

	t95 = (x429-((x430|x431)-x432));

	if (t95 != 9223372057627841874LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x433 = 1;
	int16_t x434 = INT16_MAX;
	int16_t x436 = INT16_MIN;
	static int64_t t96 = 0LL;

	t96 = (x433-((x434|x435)-x436));

	if (t96 != -11398807550LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x437 = -1LL;
	int64_t x438 = INT64_MAX;
	int16_t x439 = -71;
	static int64_t x440 = INT64_MIN;
	volatile int64_t t97 = INT64_MIN;

	t97 = (x437-((x438|x439)-x440));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x441 = 0U;
	volatile int16_t x442 = INT16_MAX;
	static uint8_t x444 = 2U;
	static int64_t t98 = 321LL;

	t98 = (x441-((x442|x443)-x444));

	if (t98 != 9223372036854743043LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x449 = 25U;
	int16_t x450 = INT16_MAX;
	int32_t x451 = INT32_MIN;
	volatile int32_t x452 = -1;

	t99 = (x449-((x450|x451)-x452));

	if (t99 != 2147450905) { NG(); } else { ; }
	
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

