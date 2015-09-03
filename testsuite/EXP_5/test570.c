#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
volatile uint32_t x3 = 6684U;
volatile int64_t t0 = -8429172LL;
uint64_t t1 = 0LLU;
int64_t x19 = 2LL;
int64_t x23 = -104LL;
volatile int8_t x25 = INT8_MIN;
int8_t x32 = INT8_MIN;
static uint16_t x35 = 3U;
int32_t x42 = INT32_MIN;
uint8_t x43 = UINT8_MAX;
int8_t x48 = 1;
int32_t x49 = 234747;
uint64_t x52 = 8898637419LLU;
uint64_t t9 = 11424897964LLU;
int8_t x59 = INT8_MAX;
volatile int64_t x68 = -12430941542959LL;
int64_t t13 = -107605577LL;
uint32_t t16 = 9U;
int64_t x81 = -52140143673186513LL;
volatile int64_t t18 = -19280215926213599LL;
static uint16_t x98 = UINT16_MAX;
int8_t x126 = -1;
uint8_t x130 = UINT8_MAX;
static volatile uint16_t x133 = 0U;
volatile int16_t x144 = 4058;
int32_t x147 = 614;
volatile int16_t x148 = INT16_MIN;
volatile uint32_t x152 = 7549760U;
uint32_t t33 = 6U;
static int16_t x154 = INT16_MIN;
int32_t t34 = -150479;
volatile uint64_t x161 = UINT64_MAX;
static int16_t x168 = -934;
volatile int64_t x171 = 182378121303516143LL;
uint8_t x174 = 111U;
int64_t x177 = -1LL;
int16_t x187 = INT16_MIN;
int32_t x188 = -1;
int8_t x194 = -8;
volatile uint64_t x198 = UINT64_MAX;
int64_t x199 = INT64_MIN;
static uint64_t t45 = 1020637236935322LLU;
static volatile int32_t x201 = 669;
static int64_t x203 = -35907687545853259LL;
int8_t x206 = INT8_MIN;
int32_t x223 = 9518516;
uint32_t x230 = 92510957U;
int8_t x238 = 1;
static volatile int8_t x242 = INT8_MIN;
uint16_t x250 = UINT16_MAX;
volatile int64_t t56 = 50549745LL;
static int16_t x253 = INT16_MAX;
uint64_t t57 = 15827105016506LLU;
uint64_t x260 = 2782181940LLU;
uint32_t x268 = UINT32_MAX;
uint16_t x273 = 179U;
int8_t x277 = 1;
int64_t t62 = -215531525871LL;
volatile uint32_t x287 = UINT32_MAX;
volatile uint32_t t63 = 361139556U;
int64_t x300 = -254745736864985076LL;
static volatile int64_t t66 = -11066812688786506LL;
uint8_t x301 = 60U;
int64_t x303 = -1LL;
volatile uint64_t x305 = UINT64_MAX;
volatile int8_t x306 = -1;
int64_t x310 = INT64_MAX;
int32_t x311 = INT32_MAX;
int16_t x317 = INT16_MIN;
volatile uint64_t x319 = UINT64_MAX;
static int8_t x324 = INT8_MIN;
int8_t x335 = 19;
volatile uint64_t x339 = 1981292442052874324LLU;
volatile uint64_t t76 = 140213012183137LLU;
int16_t x343 = INT16_MIN;
volatile int64_t t77 = 1382685285327137150LL;
int64_t x348 = INT64_MAX;
volatile int8_t x350 = -1;
int64_t t79 = -128246485971886420LL;
uint16_t x353 = 12U;
uint64_t t80 = 1955905921009LLU;
int32_t x363 = 398;
int64_t t83 = -1897859LL;
volatile uint32_t t84 = 732968U;
uint64_t x375 = UINT64_MAX;
volatile int16_t x381 = -138;
uint64_t x382 = UINT64_MAX;
uint64_t t86 = 16184456962382LLU;
int64_t x393 = -110353964LL;
uint8_t x395 = 3U;
int32_t x399 = -2;
int32_t x405 = INT32_MAX;
static uint64_t t92 = 125LLU;
static uint8_t x419 = UINT8_MAX;
static int64_t x428 = INT64_MAX;
static int8_t x434 = 63;
int16_t x435 = -11;
uint64_t x440 = UINT64_MAX;


void f0(void) {
	volatile int64_t x2 = 0LL;
	int64_t x4 = INT64_MIN;

	t0 = (x1&((x2/x3)%x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = UINT64_MAX;
	uint64_t x6 = UINT64_MAX;
	static uint64_t x7 = 7936LLU;
	int16_t x8 = -14;

	t1 = (x5&((x6/x7)%x8));

	if (t1 != 2324438517352514LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x17 = 1915326422LLU;
	int32_t x18 = 6997;
	int64_t x20 = -1LL;
	uint64_t t2 = 2658630011436LLU;

	t2 = (x17&((x18/x19)%x20));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x21 = -1;
	int64_t x22 = INT64_MIN;
	uint32_t x24 = UINT32_MAX;
	volatile int64_t t3 = -1132450916256058LL;

	t3 = (x21&((x22/x23)%x24));

	if (t3 != 1011795180LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x26 = INT32_MAX;
	uint32_t x27 = UINT32_MAX;
	int8_t x28 = 1;
	uint32_t t4 = 272207U;

	t4 = (x25&((x26/x27)%x28));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = INT64_MIN;
	uint16_t x30 = UINT16_MAX;
	volatile int64_t x31 = INT64_MIN;
	volatile int64_t t5 = 1LL;

	t5 = (x29&((x30/x31)%x32));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = 3;
	static volatile int64_t x34 = INT64_MAX;
	uint16_t x36 = 22U;
	int64_t t6 = 120432056LL;

	t6 = (x33&((x34/x35)%x36));

	if (t6 != 2LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x41 = -1;
	int16_t x44 = 28;
	static volatile int32_t t7 = -1;

	t7 = (x41&((x42/x43)%x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = -1;
	volatile uint16_t x46 = 110U;
	int32_t x47 = -1204798;
	int32_t t8 = -49547271;

	t8 = (x45&((x46/x47)%x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x50 = INT16_MAX;
	int64_t x51 = INT64_MAX;

	t9 = (x49&((x50/x51)%x52));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x53 = INT64_MIN;
	int16_t x54 = INT16_MIN;
	int16_t x55 = INT16_MIN;
	uint16_t x56 = UINT16_MAX;
	int64_t t10 = 603210676060170LL;

	t10 = (x53&((x54/x55)%x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 3U;
	volatile int64_t x58 = INT64_MAX;
	static int16_t x60 = -8750;
	int64_t t11 = -25LL;

	t11 = (x57&((x58/x59)%x60));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = UINT64_MAX;
	int8_t x62 = -1;
	uint8_t x63 = 103U;
	volatile int16_t x64 = -3;
	static uint64_t t12 = 138136055615093LLU;

	t12 = (x61&((x62/x63)%x64));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 84U;
	int8_t x66 = 0;
	int8_t x67 = INT8_MIN;

	t13 = (x65&((x66/x67)%x68));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = UINT64_MAX;
	int8_t x70 = -1;
	static uint32_t x71 = 91U;
	volatile int8_t x72 = INT8_MAX;
	volatile uint64_t t14 = 120342473933LLU;

	t14 = (x69&((x70/x71)%x72));

	if (t14 != 51LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 26U;
	int64_t x74 = INT64_MAX;
	uint32_t x75 = 14321U;
	static volatile uint16_t x76 = 28U;
	volatile int64_t t15 = 111422205399176LL;

	t15 = (x73&((x74/x75)%x76));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -1;
	volatile uint32_t x78 = 464U;
	uint32_t x79 = 98791792U;
	int8_t x80 = 1;

	t16 = (x77&((x78/x79)%x80));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x82 = INT16_MAX;
	static int8_t x83 = 62;
	int32_t x84 = INT32_MAX;
	int64_t t17 = -221802490274450LL;

	t17 = (x81&((x82/x83)%x84));

	if (t17 != 512LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 15U;
	static int64_t x86 = 170LL;
	volatile int8_t x87 = -1;
	static int16_t x88 = -1;

	t18 = (x85&((x86/x87)%x88));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MAX;
	int32_t x90 = -1;
	volatile int64_t x91 = -1LL;
	uint32_t x92 = 78U;
	int64_t t19 = -22854LL;

	t19 = (x89&((x90/x91)%x92));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x93 = INT16_MIN;
	int32_t x94 = 833675428;
	static int16_t x95 = INT16_MIN;
	volatile uint64_t x96 = 3750568517274467LLU;
	uint64_t t20 = 140698LLU;

	t20 = (x93&((x94/x95)%x96));

	if (t20 != 1448105753673728LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = 7308390433017266LLU;
	int16_t x99 = 77;
	static uint32_t x100 = 6U;
	volatile uint64_t t21 = 537025700023480912LLU;

	t21 = (x97&((x98/x99)%x100));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MIN;
	uint8_t x102 = 9U;
	uint8_t x103 = 10U;
	volatile uint8_t x104 = UINT8_MAX;
	volatile int32_t t22 = -3761135;

	t22 = (x101&((x102/x103)%x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x105 = -6906;
	static int8_t x106 = INT8_MIN;
	int32_t x107 = INT32_MAX;
	int32_t x108 = -17;
	static volatile int32_t t23 = 618;

	t23 = (x105&((x106/x107)%x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = -61344705;
	int16_t x110 = INT16_MAX;
	static int8_t x111 = INT8_MIN;
	int16_t x112 = INT16_MIN;
	volatile int32_t t24 = 6879;

	t24 = (x109&((x110/x111)%x112));

	if (t24 != -61344767) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = 108894365414987723LL;
	int64_t x114 = -109366342842LL;
	static uint32_t x115 = UINT32_MAX;
	int16_t x116 = -9;
	volatile int64_t t25 = -861148675053LL;

	t25 = (x113&((x114/x115)%x116));

	if (t25 != 108894365414987721LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 0U;
	uint8_t x118 = 1U;
	volatile uint8_t x119 = 8U;
	volatile int8_t x120 = INT8_MAX;
	int32_t t26 = -63;

	t26 = (x117&((x118/x119)%x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = -1;
	uint8_t x122 = 5U;
	volatile int8_t x123 = INT8_MIN;
	int32_t x124 = -1;
	int32_t t27 = 3;

	t27 = (x121&((x122/x123)%x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = -255328569;
	uint32_t x127 = 507589U;
	uint64_t x128 = 360058196853LLU;
	uint64_t t28 = 39LLU;

	t28 = (x125&((x126/x127)%x128));

	if (t28 != 8197LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x129 = -6;
	volatile uint8_t x131 = 4U;
	volatile uint64_t x132 = 65LLU;
	volatile uint64_t t29 = 484765051460LLU;

	t29 = (x129&((x130/x131)%x132));

	if (t29 != 58LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x134 = -5;
	int64_t x135 = INT64_MAX;
	volatile int32_t x136 = 885922896;
	volatile int64_t t30 = -1493717876566LL;

	t30 = (x133&((x134/x135)%x136));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = 21;
	uint16_t x142 = 83U;
	int8_t x143 = INT8_MIN;
	int32_t t31 = -947;

	t31 = (x141&((x142/x143)%x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = 8099U;
	uint16_t x146 = UINT16_MAX;
	int32_t t32 = -4406;

	t32 = (x145&((x146/x147)%x148));

	if (t32 != 34) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x149 = -1;
	static uint8_t x150 = 0U;
	volatile uint8_t x151 = 62U;

	t33 = (x149&((x150/x151)%x152));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = 22;
	static int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;

	t34 = (x153&((x154/x155)%x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x157 = INT32_MIN;
	static int8_t x158 = 1;
	static int8_t x159 = INT8_MIN;
	uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t35 = 515052111940LLU;

	t35 = (x157&((x158/x159)%x160));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x162 = INT64_MIN;
	int32_t x163 = INT32_MIN;
	volatile int32_t x164 = INT32_MIN;
	uint64_t t36 = 8147025962739860LLU;

	t36 = (x161&((x162/x163)%x164));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = -1;
	uint64_t x166 = 365LLU;
	uint32_t x167 = UINT32_MAX;
	volatile uint64_t t37 = 625569310186272LLU;

	t37 = (x165&((x166/x167)%x168));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = -421632542646971829LL;
	static int8_t x170 = -55;
	int64_t x172 = INT64_MIN;
	volatile int64_t t38 = -1LL;

	t38 = (x169&((x170/x171)%x172));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = -1;
	int8_t x175 = -1;
	uint32_t x176 = 62U;
	uint32_t t39 = 422147176U;

	t39 = (x173&((x174/x175)%x176));

	if (t39 != 17U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x178 = 12570596475883525LLU;
	int8_t x179 = 6;
	volatile int16_t x180 = -1786;
	static uint64_t t40 = 5230055LLU;

	t40 = (x177&((x178/x179)%x180));

	if (t40 != 2095099412647254LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = UINT64_MAX;
	static int32_t x182 = INT32_MIN;
	int16_t x183 = INT16_MIN;
	uint8_t x184 = UINT8_MAX;
	uint64_t t41 = 354LLU;

	t41 = (x181&((x182/x183)%x184));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = -1;
	int8_t x186 = 1;
	int32_t t42 = -3;

	t42 = (x185&((x186/x187)%x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = -2LL;
	volatile uint32_t x190 = 23024U;
	uint8_t x191 = 1U;
	uint8_t x192 = 50U;
	int64_t t43 = -517503LL;

	t43 = (x189&((x190/x191)%x192));

	if (t43 != 24LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = UINT16_MAX;
	int8_t x195 = -1;
	static uint32_t x196 = 61645489U;
	static volatile uint32_t t44 = 9U;

	t44 = (x193&((x194/x195)%x196));

	if (t44 != 8U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x197 = 4077U;
	int8_t x200 = -4;

	t45 = (x197&((x198/x199)%x200));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x202 = 62;
	int32_t x204 = INT32_MIN;
	volatile int64_t t46 = 513101233674913LL;

	t46 = (x201&((x202/x203)%x204));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = INT64_MIN;
	volatile uint8_t x207 = 29U;
	uint8_t x208 = UINT8_MAX;
	int64_t t47 = INT64_MIN;

	t47 = (x205&((x206/x207)%x208));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x209 = UINT16_MAX;
	int16_t x210 = INT16_MAX;
	int16_t x211 = INT16_MAX;
	volatile uint64_t x212 = UINT64_MAX;
	static volatile uint64_t t48 = 37LLU;

	t48 = (x209&((x210/x211)%x212));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = 104118045U;
	uint8_t x214 = 3U;
	int32_t x215 = INT32_MAX;
	uint16_t x216 = 102U;
	static uint32_t t49 = 3236840U;

	t49 = (x213&((x214/x215)%x216));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x221 = 25U;
	int16_t x222 = INT16_MIN;
	volatile uint64_t x224 = 16534581923814642LLU;
	volatile uint64_t t50 = 6333704943LLU;

	t50 = (x221&((x222/x223)%x224));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = -1;
	uint32_t x226 = 176943441U;
	static int64_t x227 = -1038622971251LL;
	static uint16_t x228 = UINT16_MAX;
	volatile int64_t t51 = -964586LL;

	t51 = (x225&((x226/x227)%x228));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = INT16_MIN;
	int32_t x231 = 7588154;
	int32_t x232 = INT32_MIN;
	volatile uint32_t t52 = 2588U;

	t52 = (x229&((x230/x231)%x232));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = -8737552149242043LL;
	uint32_t x239 = 27U;
	volatile int32_t x240 = INT32_MAX;
	static int64_t t53 = 64273271268LL;

	t53 = (x237&((x238/x239)%x240));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = 7236U;
	int8_t x243 = 22;
	uint64_t x244 = 49145342063899LLU;
	static uint64_t t54 = 218211556951007LLU;

	t54 = (x241&((x242/x243)%x244));

	if (t54 != 3136LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = -6975649LL;
	static uint32_t x246 = 41947U;
	int8_t x247 = INT8_MIN;
	static int32_t x248 = 63;
	int64_t t55 = -1288965824486954LL;

	t55 = (x245&((x246/x247)%x248));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x249 = 0U;
	int64_t x251 = INT64_MAX;
	static int32_t x252 = 23715;

	t56 = (x249&((x250/x251)%x252));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x254 = -27433232;
	volatile int64_t x255 = 7906994LL;
	uint64_t x256 = 18789918932006LLU;

	t57 = (x253&((x254/x255)%x256));

	if (t57 != 24973LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x257 = INT8_MAX;
	volatile int16_t x258 = INT16_MIN;
	volatile uint16_t x259 = 29U;
	uint64_t t58 = 259191565800426LLU;

	t58 = (x257&((x258/x259)%x260));

	if (t58 != 107LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = 14693114912993LL;
	int8_t x266 = -1;
	uint64_t x267 = UINT64_MAX;
	volatile uint64_t t59 = 47LLU;

	t59 = (x265&((x266/x267)%x268));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MIN;
	int32_t x271 = INT32_MIN;
	uint32_t x272 = 1265U;
	static uint32_t t60 = 10795451U;

	t60 = (x269&((x270/x271)%x272));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x274 = -9907675;
	int32_t x275 = INT32_MIN;
	static int64_t x276 = -1LL;
	volatile int64_t t61 = -1LL;

	t61 = (x273&((x274/x275)%x276));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x278 = -1LL;
	uint8_t x279 = UINT8_MAX;
	int64_t x280 = INT64_MAX;

	t62 = (x277&((x278/x279)%x280));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x285 = INT32_MIN;
	int32_t x286 = INT32_MAX;
	uint32_t x288 = UINT32_MAX;

	t63 = (x285&((x286/x287)%x288));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x289 = 29023U;
	uint8_t x290 = 5U;
	uint16_t x291 = UINT16_MAX;
	int64_t x292 = 96380894LL;
	volatile int64_t t64 = -10LL;

	t64 = (x289&((x290/x291)%x292));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x293 = -1;
	int64_t x294 = INT64_MIN;
	volatile int32_t x295 = INT32_MIN;
	int32_t x296 = -99595;
	static int64_t t65 = -13516LL;

	t65 = (x293&((x294/x295)%x296));

	if (t65 != 32516LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x297 = INT64_MAX;
	int16_t x298 = INT16_MAX;
	int8_t x299 = -1;

	t66 = (x297&((x298/x299)%x300));

	if (t66 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x302 = -224LL;
	static int32_t x304 = 42;
	volatile int64_t t67 = -5368460519LL;

	t67 = (x301&((x302/x303)%x304));

	if (t67 != 12LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x307 = INT64_MIN;
	volatile int8_t x308 = 18;
	uint64_t t68 = 8453889LLU;

	t68 = (x305&((x306/x307)%x308));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x309 = UINT8_MAX;
	uint8_t x312 = 7U;
	static int64_t t69 = 98148885LL;

	t69 = (x309&((x310/x311)%x312));

	if (t69 != 6LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x313 = 30U;
	volatile int64_t x314 = INT64_MAX;
	volatile uint32_t x315 = 212430048U;
	int64_t x316 = INT64_MIN;
	int64_t t70 = 388040052352381LL;

	t70 = (x313&((x314/x315)%x316));

	if (t70 != 8LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x318 = -1;
	uint64_t x320 = UINT64_MAX;
	uint64_t t71 = 1519828954516LLU;

	t71 = (x317&((x318/x319)%x320));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = 9907930913LL;
	volatile uint16_t x322 = 1U;
	int32_t x323 = 4132726;
	volatile int64_t t72 = -1903936715191974LL;

	t72 = (x321&((x322/x323)%x324));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x325 = 16U;
	static uint64_t x326 = 24847264395099471LLU;
	uint64_t x327 = 1210854LLU;
	int64_t x328 = INT64_MAX;
	uint64_t t73 = 435607392943152523LLU;

	t73 = (x325&((x326/x327)%x328));

	if (t73 != 16LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = -1;
	static uint64_t x330 = 155124272668907LLU;
	int32_t x331 = INT32_MIN;
	uint8_t x332 = 4U;
	uint64_t t74 = 48111LLU;

	t74 = (x329&((x330/x331)%x332));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x333 = 35U;
	int32_t x334 = -1;
	uint8_t x336 = UINT8_MAX;
	int32_t t75 = 280835160;

	t75 = (x333&((x334/x335)%x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x337 = -1LL;
	uint8_t x338 = 125U;
	int8_t x340 = INT8_MAX;

	t76 = (x337&((x338/x339)%x340));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = 1;
	volatile uint8_t x342 = UINT8_MAX;
	int64_t x344 = INT64_MIN;

	t77 = (x341&((x342/x343)%x344));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x345 = UINT8_MAX;
	int64_t x346 = INT64_MIN;
	int8_t x347 = -3;
	int64_t t78 = 8819788102826LL;

	t78 = (x345&((x346/x347)%x348));

	if (t78 != 170LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = 27;
	int64_t x351 = -1496066LL;
	volatile int32_t x352 = 143495819;

	t79 = (x349&((x350/x351)%x352));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x354 = INT64_MIN;
	volatile uint64_t x355 = 3094297200499946LLU;
	volatile int16_t x356 = INT16_MIN;

	t80 = (x353&((x354/x355)%x356));

	if (t80 != 4LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x357 = INT64_MAX;
	int32_t x358 = 387086;
	static int32_t x359 = 21;
	int64_t x360 = 575925LL;
	int64_t t81 = -29792037949963LL;

	t81 = (x357&((x358/x359)%x360));

	if (t81 != 18432LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x361 = INT8_MAX;
	uint64_t x362 = 1356LLU;
	volatile int64_t x364 = 53LL;
	volatile uint64_t t82 = 102011LLU;

	t82 = (x361&((x362/x363)%x364));

	if (t82 != 3LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = INT16_MIN;
	volatile int64_t x366 = INT64_MIN;
	static int64_t x367 = 691787216146LL;
	static volatile uint8_t x368 = 36U;

	t83 = (x365&((x366/x367)%x368));

	if (t83 != -32768LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x369 = 1008U;
	uint8_t x370 = 6U;
	int32_t x371 = -814586572;
	static volatile int8_t x372 = INT8_MIN;

	t84 = (x369&((x370/x371)%x372));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x373 = INT32_MIN;
	int16_t x374 = -1134;
	int8_t x376 = -25;
	volatile uint64_t t85 = 24758218984LLU;

	t85 = (x373&((x374/x375)%x376));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x383 = 21U;
	uint8_t x384 = 1U;

	t86 = (x381&((x382/x383)%x384));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = 55LL;
	int8_t x386 = INT8_MIN;
	int32_t x387 = INT32_MIN;
	int32_t x388 = -1;
	int64_t t87 = 740437429LL;

	t87 = (x385&((x386/x387)%x388));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x394 = INT16_MAX;
	volatile int32_t x396 = INT32_MIN;
	static int64_t t88 = 0LL;

	t88 = (x393&((x394/x395)%x396));

	if (t88 != 8320LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x397 = INT8_MIN;
	uint8_t x398 = UINT8_MAX;
	static int8_t x400 = -1;
	volatile int32_t t89 = -3790790;

	t89 = (x397&((x398/x399)%x400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = -1;
	volatile int8_t x402 = 0;
	static volatile int16_t x403 = INT16_MAX;
	int8_t x404 = INT8_MIN;
	static int32_t t90 = 12347498;

	t90 = (x401&((x402/x403)%x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x406 = INT8_MAX;
	int8_t x407 = -1;
	int64_t x408 = INT64_MAX;
	volatile int64_t t91 = 338403587037987154LL;

	t91 = (x405&((x406/x407)%x408));

	if (t91 != 2147483521LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x409 = -1LL;
	int8_t x410 = -1;
	uint64_t x411 = UINT64_MAX;
	int16_t x412 = INT16_MIN;

	t92 = (x409&((x410/x411)%x412));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MIN;
	int64_t x415 = 2355223753102145154LL;
	static int32_t x416 = -20;
	int64_t t93 = 1455645274693LL;

	t93 = (x413&((x414/x415)%x416));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = 1;
	int64_t x418 = INT64_MIN;
	static volatile int16_t x420 = INT16_MIN;
	int64_t t94 = 6346215LL;

	t94 = (x417&((x418/x419)%x420));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = INT8_MIN;
	volatile int32_t x422 = INT32_MAX;
	uint8_t x423 = UINT8_MAX;
	static uint64_t x424 = 255222799LLU;
	uint64_t t95 = 504904300626LLU;

	t95 = (x421&((x422/x423)%x424));

	if (t95 != 8421504LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x425 = INT16_MIN;
	int32_t x426 = -55275;
	int64_t x427 = -1LL;
	int64_t t96 = -69843351202889LL;

	t96 = (x425&((x426/x427)%x428));

	if (t96 != 32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x429 = INT16_MIN;
	static uint64_t x430 = 2034076052871815296LLU;
	int64_t x431 = -1LL;
	int8_t x432 = INT8_MIN;
	static uint64_t t97 = 299911846764LLU;

	t97 = (x429&((x430/x431)%x432));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x433 = INT8_MIN;
	int8_t x436 = -31;
	volatile int32_t t98 = -5;

	t98 = (x433&((x434/x435)%x436));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x437 = INT32_MIN;
	volatile int32_t x438 = INT32_MIN;
	int8_t x439 = INT8_MIN;
	uint64_t t99 = 271241341583LLU;

	t99 = (x437&((x438/x439)%x440));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

