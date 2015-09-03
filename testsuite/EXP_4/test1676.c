#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x6 = 32U;
int32_t x8 = INT32_MIN;
int16_t x10 = -1;
int32_t x24 = INT32_MAX;
int16_t x30 = -12;
int32_t t7 = 202;
int64_t t9 = 151940556841412031LL;
volatile uint32_t t11 = 26981471U;
uint32_t x49 = 3892U;
int8_t x50 = INT8_MIN;
int16_t x64 = INT16_MIN;
volatile uint32_t x65 = 1574695047U;
static int8_t x67 = INT8_MIN;
int64_t x68 = INT64_MIN;
volatile int8_t x69 = INT8_MIN;
int8_t x72 = -7;
static volatile uint16_t x76 = 13U;
int64_t t18 = INT64_MAX;
static int8_t x79 = INT8_MIN;
int16_t x82 = INT16_MAX;
int64_t x84 = -1LL;
int64_t x95 = -1LL;
int32_t t23 = 275;
volatile int32_t x98 = INT32_MAX;
int32_t x104 = INT32_MIN;
static uint8_t x106 = 0U;
static int16_t x113 = INT16_MIN;
static uint16_t x123 = UINT16_MAX;
uint64_t x124 = 6667723711115LLU;
int64_t x132 = INT64_MIN;
int64_t t32 = 68685125270572412LL;
int32_t x133 = -56061;
uint32_t t34 = UINT32_MAX;
static int32_t x141 = INT32_MIN;
int64_t x144 = -40967938591999016LL;
int32_t t36 = 1038623039;
uint64_t x149 = 1014976910LLU;
volatile uint64_t t37 = 1777060238030204LLU;
uint16_t x153 = 1689U;
int8_t x159 = INT8_MIN;
uint16_t x161 = 54U;
uint64_t x168 = 717260202496571414LLU;
uint64_t x169 = UINT64_MAX;
static int64_t x182 = INT64_MIN;
volatile int64_t t45 = -1667464LL;
static volatile int64_t x188 = -1178690489LL;
static uint64_t t46 = UINT64_MAX;
int8_t x191 = INT8_MAX;
static uint32_t x197 = 91180U;
volatile int16_t x198 = -1;
uint8_t x199 = 14U;
uint32_t t49 = UINT32_MAX;
int64_t t50 = -13244LL;
int8_t x209 = -55;
uint16_t x213 = 50U;
uint8_t x214 = 121U;
volatile int32_t t53 = 11485;
uint8_t x219 = UINT8_MAX;
int32_t x224 = 19;
int32_t x229 = INT32_MIN;
int64_t x230 = -1LL;
int16_t x233 = INT16_MAX;
int64_t x237 = INT64_MAX;
static int16_t x241 = INT16_MAX;
uint8_t x243 = UINT8_MAX;
int16_t x244 = -1;
volatile uint32_t x245 = UINT32_MAX;
uint64_t x246 = UINT64_MAX;
static int16_t x248 = INT16_MIN;
uint16_t x251 = 323U;
static uint8_t x255 = 59U;
int64_t t63 = INT64_MAX;
static int32_t x258 = -1;
static uint8_t x260 = 95U;
int32_t x263 = 71836628;
volatile int16_t x268 = -2;
static volatile int8_t x273 = INT8_MIN;
int64_t x276 = 172252LL;
static int64_t x279 = INT64_MAX;
uint32_t x289 = 3U;
uint32_t t72 = 199696447U;
volatile int8_t x293 = 1;
static volatile uint8_t x306 = 0U;
int32_t t76 = -15241894;
int64_t x310 = 160779LL;
int32_t x312 = INT32_MAX;
int64_t x313 = INT64_MIN;
static int32_t x315 = INT32_MAX;
volatile uint64_t x316 = 4419306796LLU;
static volatile uint8_t x319 = 3U;
uint8_t x326 = 6U;
volatile int16_t x332 = INT16_MIN;
int64_t t82 = -986488004LL;
static volatile uint16_t x342 = 22831U;
int8_t x343 = INT8_MIN;
uint8_t x346 = 15U;
uint32_t x349 = 53947U;
static int32_t t88 = -1;
int32_t x357 = INT32_MIN;
static int8_t x360 = INT8_MAX;
uint64_t x365 = UINT64_MAX;
int32_t x371 = INT32_MAX;
volatile uint64_t x372 = UINT64_MAX;
static volatile int64_t t92 = 7334249780LL;
uint64_t x373 = 970734094234267276LLU;
int16_t x375 = INT16_MIN;
int16_t x376 = 4708;
static volatile uint64_t x377 = 382333959008405181LLU;
uint64_t x385 = UINT64_MAX;
static volatile uint64_t t96 = UINT64_MAX;
uint16_t x389 = 178U;
uint8_t x392 = 5U;
static volatile uint8_t x394 = 45U;
int32_t t98 = -1631536;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	int16_t x2 = 7;
	int8_t x3 = INT8_MIN;
	uint64_t x4 = 55LLU;
	int32_t t0 = 687291535;

	t0 = (x1|(x2|(x3<=x4)));

	if (t0 != -2147483641) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	uint8_t x7 = UINT8_MAX;
	volatile int32_t t1 = 320;

	t1 = (x5|(x6|(x7<=x8)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	uint16_t x11 = UINT16_MAX;
	static volatile int16_t x12 = INT16_MIN;
	int32_t t2 = -19912644;

	t2 = (x9|(x10|(x11<=x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint64_t x14 = 1865568LLU;
	static int64_t x15 = INT64_MAX;
	int16_t x16 = -12;
	uint64_t t3 = UINT64_MAX;

	t3 = (x13|(x14|(x15<=x16)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = INT32_MIN;
	int32_t x19 = -1;
	uint64_t x20 = UINT64_MAX;
	static int32_t t4 = 25623864;

	t4 = (x17|(x18|(x19<=x20)));

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	int32_t x22 = 5;
	int32_t x23 = INT32_MIN;
	volatile int32_t t5 = -60682;

	t5 = (x21|(x22|(x23<=x24)));

	if (t5 != -2147483643) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 5252U;
	int32_t x26 = -46640847;
	int16_t x27 = INT16_MIN;
	int32_t x28 = -1;
	static volatile uint32_t t6 = 10785U;

	t6 = (x25|(x26|(x27<=x28)));

	if (t6 != 4248327605U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = INT16_MAX;
	uint64_t x31 = 517685939955840856LLU;
	int64_t x32 = INT64_MAX;

	t7 = (x29|(x30|(x31<=x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 1183771U;
	uint32_t x34 = UINT32_MAX;
	uint64_t x35 = UINT64_MAX;
	int8_t x36 = INT8_MAX;
	volatile uint32_t t8 = UINT32_MAX;

	t8 = (x33|(x34|(x35<=x36)));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int64_t x38 = INT64_MIN;
	int32_t x39 = -1;
	volatile int32_t x40 = -1;

	t9 = (x37|(x38|(x39<=x40)));

	if (t9 != -2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	volatile uint64_t x42 = 241403203LLU;
	int32_t x43 = 108;
	static volatile int8_t x44 = -3;
	uint64_t t10 = UINT64_MAX;

	t10 = (x41|(x42|(x43<=x44)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 308856U;
	volatile uint8_t x46 = 3U;
	int16_t x47 = -1;
	volatile int16_t x48 = 2;

	t11 = (x45|(x46|(x47<=x48)));

	if (t11 != 308859U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x51 = UINT8_MAX;
	int8_t x52 = 0;
	static uint32_t t12 = 23U;

	t12 = (x49|(x50|(x51<=x52)));

	if (t12 != 4294967220U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 5120U;
	volatile int64_t x54 = 1LL;
	int32_t x55 = -1846103;
	volatile uint32_t x56 = UINT32_MAX;
	volatile int64_t t13 = 784011269821734LL;

	t13 = (x53|(x54|(x55<=x56)));

	if (t13 != 5121LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 10657;
	static int32_t x58 = INT32_MIN;
	uint64_t x59 = 1903043160LLU;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = -147977;

	t14 = (x57|(x58|(x59<=x60)));

	if (t14 != -2147472991) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -458968143529431774LL;
	int64_t x62 = INT64_MIN;
	uint64_t x63 = UINT64_MAX;
	volatile int64_t t15 = -138312LL;

	t15 = (x61|(x62|(x63<=x64)));

	if (t15 != -458968143529431774LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 230458U;
	uint32_t t16 = 43941U;

	t16 = (x65|(x66|(x67<=x68)));

	if (t16 != 1574696127U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x70 = INT64_MAX;
	int8_t x71 = 0;
	int64_t t17 = 3266149LL;

	t17 = (x69|(x70|(x71<=x72)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	int64_t x74 = INT64_MAX;
	static uint32_t x75 = UINT32_MAX;

	t18 = (x73|(x74|(x75<=x76)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint64_t x78 = 108178LLU;
	int8_t x80 = INT8_MAX;
	volatile uint64_t t19 = 173736513718LLU;

	t19 = (x77|(x78|(x79<=x80)));

	if (t19 != 9223372036854883987LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	uint32_t x83 = UINT32_MAX;
	int32_t t20 = 0;

	t20 = (x81|(x82|(x83<=x84)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 9434431;
	int16_t x86 = INT16_MAX;
	uint32_t x87 = 971179U;
	int16_t x88 = -1;
	volatile int32_t t21 = 7;

	t21 = (x85|(x86|(x87<=x88)));

	if (t21 != 9437183) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 6006;
	int64_t x90 = INT64_MIN;
	static uint64_t x91 = 802892LLU;
	int64_t x92 = INT64_MIN;
	volatile int64_t t22 = -630854LL;

	t22 = (x89|(x90|(x91<=x92)));

	if (t22 != -9223372036854769801LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	int8_t x96 = -1;

	t23 = (x93|(x94|(x95<=x96)));

	if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	volatile int8_t x99 = 0;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = -48;

	t24 = (x97|(x98|(x99<=x100)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	volatile int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MIN;
	int32_t t25 = 55801206;

	t25 = (x101|(x102|(x103<=x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = -6411887;
	volatile int16_t x107 = INT16_MIN;
	int16_t x108 = 14529;
	static volatile int32_t t26 = 3429;

	t26 = (x105|(x106|(x107<=x108)));

	if (t26 != -6411887) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MIN;
	uint16_t x110 = 23370U;
	int16_t x111 = -1;
	int32_t x112 = -1;
	volatile int32_t t27 = 29;

	t27 = (x109|(x110|(x111<=x112)));

	if (t27 != -53) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = UINT64_MAX;
	static int64_t x115 = -1LL;
	int8_t x116 = INT8_MAX;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (x113|(x114|(x115<=x116)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MAX;
	int16_t x119 = INT16_MIN;
	int16_t x120 = INT16_MIN;
	int32_t t29 = -18521;

	t29 = (x117|(x118|(x119<=x120)));

	if (t29 != -2147450881) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x121 = UINT32_MAX;
	int16_t x122 = INT16_MIN;
	volatile uint32_t t30 = UINT32_MAX;

	t30 = (x121|(x122|(x123<=x124)));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint64_t x126 = 94396428LLU;
	uint32_t x127 = 3963393U;
	static uint32_t x128 = 12U;
	volatile uint64_t t31 = 19879540837017295LLU;

	t31 = (x125|(x126|(x127<=x128)));

	if (t31 != 18446744071656464396LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MAX;
	int64_t x130 = INT64_MIN;
	uint32_t x131 = 40035U;

	t32 = (x129|(x130|(x131<=x132)));

	if (t32 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = 854;
	int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MAX;
	int32_t t33 = -1;

	t33 = (x133|(x134|(x135<=x136)));

	if (t33 != -55465) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = 43U;
	int16_t x138 = -1;
	int64_t x139 = -1LL;
	int16_t x140 = INT16_MAX;

	t34 = (x137|(x138|(x139<=x140)));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x142 = -1;
	int16_t x143 = 56;
	volatile int32_t t35 = 995535711;

	t35 = (x141|(x142|(x143<=x144)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	static int8_t x146 = INT8_MAX;
	uint16_t x147 = 49U;
	int32_t x148 = INT32_MIN;

	t36 = (x145|(x146|(x147<=x148)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x150 = UINT16_MAX;
	int16_t x151 = -1;
	static uint32_t x152 = UINT32_MAX;

	t37 = (x149|(x150|(x151<=x152)));

	if (t37 != 1015021567LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = INT16_MIN;
	int8_t x155 = INT8_MIN;
	volatile uint16_t x156 = 1087U;
	int32_t t38 = 266383667;

	t38 = (x153|(x154|(x155<=x156)));

	if (t38 != -31079) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	int16_t x158 = INT16_MAX;
	int32_t x160 = -1;
	volatile int32_t t39 = -173;

	t39 = (x157|(x158|(x159<=x160)));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = 4653100534612LL;
	uint8_t x163 = 2U;
	uint64_t x164 = 719639LLU;
	int64_t t40 = 119LL;

	t40 = (x161|(x162|(x163<=x164)));

	if (t40 != 4653100534647LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	volatile int32_t x166 = INT32_MAX;
	int8_t x167 = INT8_MIN;
	int32_t t41 = INT32_MAX;

	t41 = (x165|(x166|(x167<=x168)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = INT32_MIN;
	volatile int64_t x171 = -602608114307453LL;
	static int64_t x172 = -1LL;
	uint64_t t42 = UINT64_MAX;

	t42 = (x169|(x170|(x171<=x172)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MIN;
	volatile int32_t x174 = 168660;
	volatile int8_t x175 = -57;
	static uint8_t x176 = UINT8_MAX;
	static volatile int64_t t43 = -22973LL;

	t43 = (x173|(x174|(x175<=x176)));

	if (t43 != -9223372036854607147LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 29U;
	static volatile int64_t x178 = INT64_MIN;
	static int64_t x179 = INT64_MAX;
	int16_t x180 = -1;
	int64_t t44 = -66LL;

	t44 = (x177|(x178|(x179<=x180)));

	if (t44 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x181 = 7125420U;
	static int32_t x183 = 3;
	int32_t x184 = -347;

	t45 = (x181|(x182|(x183<=x184)));

	if (t45 != -9223372036847650388LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = 63908866776029LLU;
	static int8_t x186 = -1;
	int32_t x187 = INT32_MIN;

	t46 = (x185|(x186|(x187<=x188)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -820209;
	int64_t x190 = INT64_MAX;
	uint8_t x192 = 3U;
	static volatile int64_t t47 = -28332979198LL;

	t47 = (x189|(x190|(x191<=x192)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	int8_t x194 = -4;
	static uint8_t x195 = 8U;
	volatile int8_t x196 = INT8_MIN;
	static int32_t t48 = -1;

	t48 = (x193|(x194|(x195<=x196)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x200 = INT32_MAX;

	t49 = (x197|(x198|(x199<=x200)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -136929181LL;
	volatile int32_t x202 = 2306430;
	int16_t x203 = INT16_MAX;
	uint8_t x204 = UINT8_MAX;

	t50 = (x201|(x202|(x203<=x204)));

	if (t50 != -134762113LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = 94U;
	static int16_t x206 = INT16_MAX;
	int16_t x207 = INT16_MAX;
	uint8_t x208 = UINT8_MAX;
	int32_t t51 = 848;

	t51 = (x205|(x206|(x207<=x208)));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x210 = INT16_MIN;
	uint8_t x211 = UINT8_MAX;
	static volatile int16_t x212 = -1;
	int32_t t52 = 115317;

	t52 = (x209|(x210|(x211<=x212)));

	if (t52 != -55) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x215 = -1993975LL;
	int64_t x216 = -1LL;

	t53 = (x213|(x214|(x215<=x216)));

	if (t53 != 123) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 8274U;
	int64_t x218 = INT64_MAX;
	uint16_t x220 = UINT16_MAX;
	int64_t t54 = INT64_MAX;

	t54 = (x217|(x218|(x219<=x220)));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	volatile uint64_t x222 = 174574324LLU;
	volatile int16_t x223 = -14;
	uint64_t t55 = UINT64_MAX;

	t55 = (x221|(x222|(x223<=x224)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	uint32_t x226 = 1498197U;
	int64_t x227 = INT64_MIN;
	static int64_t x228 = -1LL;
	uint32_t t56 = UINT32_MAX;

	t56 = (x225|(x226|(x227<=x228)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x231 = INT16_MIN;
	static uint16_t x232 = 46U;
	volatile int64_t t57 = 4060982414LL;

	t57 = (x229|(x230|(x231<=x232)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = INT32_MIN;
	static int16_t x235 = 1784;
	uint64_t x236 = UINT64_MAX;
	int32_t t58 = -427;

	t58 = (x233|(x234|(x235<=x236)));

	if (t58 != -2147450881) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x238 = INT64_MIN;
	int8_t x239 = 1;
	int16_t x240 = INT16_MIN;
	volatile int64_t t59 = 681568010474621915LL;

	t59 = (x237|(x238|(x239<=x240)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x242 = 118U;
	static volatile int32_t t60 = 15937;

	t60 = (x241|(x242|(x243<=x244)));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x247 = -1;
	static uint64_t t61 = UINT64_MAX;

	t61 = (x245|(x246|(x247<=x248)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = UINT64_MAX;
	volatile uint16_t x250 = 660U;
	uint16_t x252 = UINT16_MAX;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (x249|(x250|(x251<=x252)));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MAX;
	volatile int64_t x254 = INT64_MAX;
	uint64_t x256 = 1LLU;

	t63 = (x253|(x254|(x255<=x256)));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	uint32_t x259 = 1U;
	int64_t t64 = 24533129LL;

	t64 = (x257|(x258|(x259<=x260)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	static uint64_t x262 = 26LLU;
	static volatile int32_t x264 = INT32_MIN;
	volatile uint64_t t65 = 84214400794745LLU;

	t65 = (x261|(x262|(x263<=x264)));

	if (t65 != 65535LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = INT8_MIN;
	static uint32_t x267 = 19U;
	int32_t t66 = -2;

	t66 = (x265|(x266|(x267<=x268)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	int64_t x270 = INT64_MIN;
	volatile int16_t x271 = 70;
	int8_t x272 = -1;
	int64_t t67 = -3277654256199865260LL;

	t67 = (x269|(x270|(x271<=x272)));

	if (t67 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x274 = INT64_MIN;
	uint64_t x275 = 2905858690719LLU;
	int64_t t68 = -276076651266LL;

	t68 = (x273|(x274|(x275<=x276)));

	if (t68 != -128LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	int8_t x278 = -9;
	static uint32_t x280 = 249417U;
	volatile int32_t t69 = -6926;

	t69 = (x277|(x278|(x279<=x280)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	static int16_t x282 = -1;
	static volatile int64_t x283 = 26717549LL;
	volatile uint64_t x284 = 1193664859LLU;
	static int32_t t70 = 1;

	t70 = (x281|(x282|(x283<=x284)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -3;
	uint8_t x286 = UINT8_MAX;
	volatile uint16_t x287 = 3U;
	volatile int32_t x288 = -1;
	static volatile int32_t t71 = -2640;

	t71 = (x285|(x286|(x287<=x288)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = INT16_MAX;
	int32_t x291 = INT32_MAX;
	static int8_t x292 = INT8_MIN;

	t72 = (x289|(x290|(x291<=x292)));

	if (t72 != 32767U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x294 = -67459395;
	volatile int32_t x295 = -4;
	static uint8_t x296 = UINT8_MAX;
	int32_t t73 = -30200864;

	t73 = (x293|(x294|(x295<=x296)));

	if (t73 != -67459395) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 720U;
	int64_t x298 = -149738724LL;
	int16_t x299 = 7;
	uint32_t x300 = 27147U;
	volatile int64_t t74 = 371573LL;

	t74 = (x297|(x298|(x299<=x300)));

	if (t74 != -149738531LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	static int32_t x302 = INT32_MIN;
	int8_t x303 = 25;
	int8_t x304 = INT8_MAX;
	int32_t t75 = -3;

	t75 = (x301|(x302|(x303<=x304)));

	if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 2U;
	int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MAX;

	t76 = (x305|(x306|(x307<=x308)));

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	int32_t x311 = -12599;
	volatile int64_t t77 = -17207819018LL;

	t77 = (x309|(x310|(x311<=x312)));

	if (t77 != 2147483647LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = INT16_MIN;
	int64_t t78 = -33LL;

	t78 = (x313|(x314|(x315<=x316)));

	if (t78 != -32767LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x317 = -1LL;
	int32_t x318 = INT32_MAX;
	int64_t x320 = -1LL;
	int64_t t79 = 8LL;

	t79 = (x317|(x318|(x319<=x320)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x321 = 512LLU;
	static int16_t x322 = -9572;
	uint32_t x323 = 1890U;
	static volatile int32_t x324 = INT32_MIN;
	uint64_t t80 = 10807069775459LLU;

	t80 = (x321|(x322|(x323<=x324)));

	if (t80 != 18446744073709542045LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 0;
	int32_t x327 = -1;
	static volatile int8_t x328 = 41;
	int32_t t81 = 8656565;

	t81 = (x325|(x326|(x327<=x328)));

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	static volatile int16_t x330 = INT16_MIN;
	volatile uint8_t x331 = 5U;

	t82 = (x329|(x330|(x331<=x332)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	int32_t x334 = 930283276;
	int16_t x335 = -1;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t83 = 31;

	t83 = (x333|(x334|(x335<=x336)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	static int64_t x338 = INT64_MAX;
	int8_t x339 = -1;
	int64_t x340 = -4149146828824LL;
	static uint64_t t84 = UINT64_MAX;

	t84 = (x337|(x338|(x339<=x340)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = -49;

	t85 = (x341|(x342|(x343<=x344)));

	if (t85 != -2147460817) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x345 = INT32_MIN;
	static uint8_t x347 = 30U;
	uint32_t x348 = 337U;
	static volatile int32_t t86 = 27343;

	t86 = (x345|(x346|(x347<=x348)));

	if (t86 != -2147483633) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = INT16_MIN;
	int32_t x351 = 0;
	int8_t x352 = 1;
	static volatile uint32_t t87 = 1118U;

	t87 = (x349|(x350|(x351<=x352)));

	if (t87 != 4294955707U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 17U;
	static volatile int8_t x354 = INT8_MAX;
	uint32_t x355 = 43033781U;
	int64_t x356 = INT64_MIN;

	t88 = (x353|(x354|(x355<=x356)));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = -4545;
	uint16_t x359 = 22U;
	int32_t t89 = -2;

	t89 = (x357|(x358|(x359<=x360)));

	if (t89 != -4545) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	static uint32_t x362 = UINT32_MAX;
	uint8_t x363 = UINT8_MAX;
	uint64_t x364 = UINT64_MAX;
	static uint32_t t90 = UINT32_MAX;

	t90 = (x361|(x362|(x363<=x364)));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x366 = 1U;
	uint16_t x367 = 15233U;
	uint16_t x368 = 6167U;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (x365|(x366|(x367<=x368)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int64_t x370 = -1LL;

	t92 = (x369|(x370|(x371<=x372)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = -1;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x373|(x374|(x375<=x376)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x378 = -1;
	volatile uint32_t x379 = 29U;
	volatile int16_t x380 = INT16_MAX;
	static volatile uint64_t t94 = UINT64_MAX;

	t94 = (x377|(x378|(x379<=x380)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 257768LLU;
	static volatile uint64_t x382 = 305796359643497LLU;
	uint8_t x383 = 71U;
	static int16_t x384 = INT16_MAX;
	volatile uint64_t t95 = 592937679662LLU;

	t95 = (x381|(x382|(x383<=x384)));

	if (t95 != 305796359647209LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = INT8_MAX;
	volatile uint64_t x387 = 623LLU;
	static int16_t x388 = INT16_MIN;

	t96 = (x385|(x386|(x387<=x388)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x390 = -27;
	int8_t x391 = INT8_MIN;
	volatile int32_t t97 = -1709;

	t97 = (x389|(x390|(x391<=x392)));

	if (t97 != -9) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = UINT8_MAX;
	volatile int8_t x395 = -1;
	volatile int8_t x396 = INT8_MIN;

	t98 = (x393|(x394|(x395<=x396)));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = -2;
	int8_t x398 = INT8_MIN;
	int16_t x399 = -1;
	int64_t x400 = -4LL;
	int32_t t99 = 205;

	t99 = (x397|(x398|(x399<=x400)));

	if (t99 != -2) { NG(); } else { ; }
	
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

