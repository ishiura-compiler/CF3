#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
uint32_t x3 = UINT32_MAX;
uint64_t x6 = UINT64_MAX;
int32_t x7 = INT32_MIN;
static volatile uint64_t t2 = 1076897400606LLU;
volatile uint32_t t4 = 60793U;
int32_t x25 = 248;
static int16_t x27 = INT16_MAX;
volatile int32_t x31 = INT32_MIN;
int64_t t7 = -242642123564LL;
int32_t x35 = 154;
uint8_t x37 = UINT8_MAX;
int8_t x41 = -1;
volatile uint64_t x46 = 30LLU;
int32_t x52 = -166298;
uint16_t x55 = 207U;
uint64_t x58 = 1997951466LLU;
int16_t x62 = INT16_MIN;
uint8_t x63 = UINT8_MAX;
volatile uint8_t x67 = UINT8_MAX;
int64_t x75 = INT64_MIN;
volatile int8_t x78 = 1;
volatile uint64_t t19 = 5518007704996LLU;
uint32_t x82 = 3U;
static volatile uint32_t t20 = 101806151U;
volatile uint64_t x86 = UINT64_MAX;
volatile uint32_t x87 = UINT32_MAX;
static volatile int64_t t22 = -5LL;
uint64_t x100 = 110987649LLU;
static int8_t x103 = 1;
int8_t x105 = INT8_MIN;
volatile uint64_t t25 = 1LLU;
int16_t x113 = INT16_MAX;
int8_t x118 = -1;
static int8_t x124 = 40;
static int64_t t29 = -498081183825LL;
volatile uint8_t x127 = 43U;
int64_t t31 = 98779891LL;
volatile int16_t x133 = INT16_MIN;
int8_t x135 = INT8_MIN;
static volatile int64_t t34 = -40868989270829082LL;
volatile uint32_t x153 = 156U;
volatile int16_t x157 = INT16_MIN;
volatile uint64_t t37 = 19659561LLU;
int16_t x169 = 0;
int32_t t40 = -129550154;
int64_t t42 = 31671336280489674LL;
int16_t x184 = INT16_MIN;
int32_t x187 = -1;
static volatile uint8_t x207 = 1U;
int8_t x208 = INT8_MIN;
static int32_t t48 = -5573867;
uint16_t x211 = 112U;
static int8_t x218 = -5;
uint64_t x221 = 9198973567785LLU;
volatile uint8_t x222 = UINT8_MAX;
uint64_t t52 = 554242161147957LLU;
int8_t x234 = INT8_MAX;
uint16_t x235 = 4U;
static int8_t x239 = -1;
int64_t x248 = INT64_MIN;
uint16_t x253 = UINT16_MAX;
int32_t x263 = -28682;
int64_t x266 = 6277790161LL;
int64_t t63 = 28853769083967453LL;
volatile uint32_t t64 = UINT32_MAX;
int64_t t68 = 1LL;
int16_t x294 = INT16_MIN;
int16_t x297 = -1;
static int64_t x299 = INT64_MIN;
int32_t x300 = -4970614;
uint32_t x306 = 2U;
uint16_t x308 = 573U;
int64_t t73 = -454608764786LL;
volatile int16_t x326 = -7;
uint64_t x337 = 101139149001698LLU;
volatile int32_t x344 = INT32_MIN;
uint64_t x348 = 8922772LLU;
static volatile uint64_t t82 = 4074762145282484929LLU;
uint8_t x357 = 31U;
int32_t t84 = 14545;
volatile int8_t x366 = INT8_MIN;
int32_t x374 = INT32_MIN;
static volatile int16_t x378 = -3927;
uint32_t x382 = 789710U;
int64_t x385 = INT64_MIN;
static int16_t x390 = -82;
volatile int16_t x392 = INT16_MIN;
static int64_t x394 = INT64_MAX;
int64_t t93 = -886556206LL;
int16_t x407 = -1;
static volatile int64_t x408 = INT64_MIN;
static int64_t t95 = -16107LL;
int16_t x411 = INT16_MIN;
uint64_t t96 = 20009393LLU;
volatile int32_t t97 = 48569838;
volatile int32_t t98 = 19403;
volatile int8_t x422 = 7;


void f0(void) {
	volatile uint32_t x2 = UINT32_MAX;
	int32_t x4 = INT32_MAX;
	volatile uint32_t t0 = 6477U;

	t0 = (x1+((x2|x3)/x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 1673876453620LLU;
	volatile int8_t x8 = -2;
	uint64_t t1 = 1095280182160316LLU;

	t1 = (x5+((x6|x7)/x8));

	if (t1 != 1673876453621LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint32_t x10 = 2043U;
	uint64_t x11 = 11427335390589139LLU;
	volatile uint16_t x12 = 53U;

	t2 = (x9+((x10|x11)/x12));

	if (t2 != 215610101774798LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 63;
	uint32_t x14 = 31901U;
	static int8_t x15 = INT8_MIN;
	uint16_t x16 = 3U;
	uint32_t t3 = 25009171U;

	t3 = (x13+((x14|x15)/x16));

	if (t3 != 1431655795U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 243U;
	int32_t x18 = -87;
	static uint8_t x19 = UINT8_MAX;
	static int16_t x20 = INT16_MIN;

	t4 = (x17+((x18|x19)/x20));

	if (t4 != 243U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MAX;
	uint64_t x22 = 1411220387LLU;
	int16_t x23 = INT16_MIN;
	int64_t x24 = -930571217042863443LL;
	volatile uint64_t t5 = 26347034264290171LLU;

	t5 = (x21+((x22|x23)/x24));

	if (t5 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	int8_t x28 = INT8_MIN;
	uint32_t t6 = 23506U;

	t6 = (x25+((x26|x27)/x28));

	if (t6 != 249U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 8U;
	static int64_t x30 = INT64_MIN;
	int64_t x32 = INT64_MAX;

	t7 = (x29+((x30|x31)/x32));

	if (t7 != 8LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = -1;
	uint16_t x34 = UINT16_MAX;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = 264692104;

	t8 = (x33+((x34|x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -9;
	int16_t x39 = INT16_MIN;
	static int8_t x40 = INT8_MIN;
	int32_t t9 = -1;

	t9 = (x37+((x38|x39)/x40));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	volatile int32_t x43 = -1;
	int64_t x44 = 561819450778553606LL;
	int64_t t10 = 388199929852797LL;

	t10 = (x41+((x42|x43)/x44));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 1;
	uint32_t x47 = UINT32_MAX;
	int32_t x48 = -1;
	uint64_t t11 = 2322168033429296LLU;

	t11 = (x45+((x46|x47)/x48));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -844020710794249LL;
	int16_t x50 = -8069;
	int32_t x51 = -1;
	volatile int64_t t12 = -1718768894852852LL;

	t12 = (x49+((x50|x51)/x52));

	if (t12 != -844020710794249LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 10659;
	int64_t x54 = INT64_MIN;
	uint16_t x56 = UINT16_MAX;
	int64_t t13 = -8LL;

	t13 = (x53+((x54|x55)/x56));

	if (t13 != -140739635861085LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -43LL;
	int64_t x59 = -1LL;
	uint8_t x60 = 21U;
	uint64_t t14 = 252777463394729LLU;

	t14 = (x57+((x58|x59)/x60));

	if (t14 != 878416384462359557LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1043;
	volatile int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 2483;

	t15 = (x61+((x62|x63)/x64));

	if (t15 != -1043) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = 7;
	uint32_t x68 = 65993951U;
	uint32_t t16 = 21896U;

	t16 = (x65+((x66|x67)/x68));

	if (t16 != 4294934528U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MIN;
	int8_t x70 = 27;
	int8_t x71 = -1;
	int64_t x72 = INT64_MIN;
	volatile int64_t t17 = 1LL;

	t17 = (x69+((x70|x71)/x72));

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = INT64_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (x73+((x74|x75)/x76));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int64_t x79 = INT64_MIN;
	int32_t x80 = 2052;

	t19 = (x77+((x78|x79)/x80));

	if (t19 != 18442249253028823167LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -3;
	volatile uint16_t x83 = UINT16_MAX;
	static int32_t x84 = 142;

	t20 = (x81+((x82|x83)/x84));

	if (t20 != 458U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	int16_t x88 = -13094;
	volatile uint64_t t21 = 56986873360080LLU;

	t21 = (x85+((x86|x87)/x88));

	if (t21 != 2147483648LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = INT16_MIN;
	volatile int16_t x94 = INT16_MIN;
	int64_t x95 = INT64_MAX;
	int32_t x96 = INT32_MAX;

	t22 = (x93+((x94|x95)/x96));

	if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = INT8_MAX;
	int16_t x98 = INT16_MAX;
	volatile uint64_t x99 = 994268LLU;
	uint64_t t23 = 12044LLU;

	t23 = (x97+((x98|x99)/x100));

	if (t23 != 127LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 1U;
	int8_t x102 = 0;
	uint16_t x104 = UINT16_MAX;
	uint32_t t24 = 235529U;

	t24 = (x101+((x102|x103)/x104));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x106 = INT16_MIN;
	int16_t x107 = -1;
	uint64_t x108 = UINT64_MAX;

	t25 = (x105+((x106|x107)/x108));

	if (t25 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	uint16_t x110 = 1U;
	int16_t x111 = -1;
	volatile uint16_t x112 = 937U;
	int32_t t26 = -7455;

	t26 = (x109+((x110|x111)/x112));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x114 = 25149059U;
	int8_t x115 = INT8_MIN;
	volatile uint64_t x116 = UINT64_MAX;
	volatile uint64_t t27 = 966258824888222LLU;

	t27 = (x113+((x114|x115)/x116));

	if (t27 != 32767LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = 54;
	uint16_t x119 = 5648U;
	int64_t x120 = 1887LL;
	static volatile int64_t t28 = -369LL;

	t28 = (x117+((x118|x119)/x120));

	if (t28 != 54LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x121 = UINT32_MAX;
	volatile uint8_t x122 = 2U;
	int64_t x123 = -1LL;

	t29 = (x121+((x122|x123)/x124));

	if (t29 != 4294967295LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = UINT8_MAX;
	volatile int64_t x126 = -1LL;
	volatile uint16_t x128 = UINT16_MAX;
	int64_t t30 = -15082292LL;

	t30 = (x125+((x126|x127)/x128));

	if (t30 != 255LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 114U;
	int16_t x130 = 10;
	int64_t x131 = INT64_MAX;
	int8_t x132 = INT8_MIN;

	t31 = (x129+((x130|x131)/x132));

	if (t31 != -72057594037927821LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x134 = -1;
	int64_t x136 = -4139975523212LL;
	int64_t t32 = 1151442492454642LL;

	t32 = (x133+((x134|x135)/x136));

	if (t32 != -32768LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = 3;
	int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MIN;
	int32_t x144 = INT32_MIN;
	volatile int64_t t33 = -113680383LL;

	t33 = (x141+((x142|x143)/x144));

	if (t33 != 3LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x145 = -1LL;
	static int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MAX;
	int8_t x148 = INT8_MIN;

	t34 = (x145+((x146|x147)/x148));

	if (t34 != 16776959LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = INT8_MIN;
	uint32_t x150 = 219106455U;
	int32_t x151 = INT32_MAX;
	uint32_t x152 = UINT32_MAX;
	uint32_t t35 = 189U;

	t35 = (x149+((x150|x151)/x152));

	if (t35 != 4294967168U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x154 = INT8_MIN;
	volatile uint64_t x155 = 506LLU;
	uint8_t x156 = UINT8_MAX;
	uint64_t t36 = 1805815676928746201LLU;

	t36 = (x153+((x154|x155)/x156));

	if (t36 != 72340172838076828LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x158 = -1LL;
	uint64_t x159 = 721627916LLU;
	volatile uint8_t x160 = UINT8_MAX;

	t37 = (x157+((x158|x159)/x160));

	if (t37 != 72340172838043905LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x161 = 5U;
	int16_t x162 = INT16_MIN;
	static uint64_t x163 = UINT64_MAX;
	int8_t x164 = INT8_MIN;
	volatile uint64_t t38 = 47LLU;

	t38 = (x161+((x162|x163)/x164));

	if (t38 != 6LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 10295U;
	uint8_t x166 = 8U;
	static uint32_t x167 = 10798934U;
	int32_t x168 = INT32_MIN;
	volatile uint32_t t39 = 14U;

	t39 = (x165+((x166|x167)/x168));

	if (t39 != 10295U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x170 = INT8_MIN;
	int16_t x171 = INT16_MIN;
	int16_t x172 = -1;

	t40 = (x169+((x170|x171)/x172));

	if (t40 != 128) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	volatile uint16_t x174 = 2201U;
	int64_t x175 = -57069077828LL;
	static int16_t x176 = INT16_MIN;
	volatile int64_t t41 = -5795711571600LL;

	t41 = (x173+((x174|x175)/x176));

	if (t41 != 1708842LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = 45;
	static int64_t x178 = INT64_MIN;
	uint32_t x179 = UINT32_MAX;
	static int16_t x180 = INT16_MIN;

	t42 = (x177+((x178|x179)/x180));

	if (t42 != 281474976579629LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x181 = -1;
	static int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	volatile int32_t t43 = -1393;

	t43 = (x181+((x182|x183)/x184));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x185 = 64;
	static uint8_t x186 = 46U;
	static uint64_t x188 = UINT64_MAX;
	static uint64_t t44 = 50LLU;

	t44 = (x185+((x186|x187)/x188));

	if (t44 != 65LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = 6500;
	int8_t x190 = 9;
	uint16_t x191 = UINT16_MAX;
	volatile uint32_t x192 = 1654U;
	volatile uint32_t t45 = 790935437U;

	t45 = (x189+((x190|x191)/x192));

	if (t45 != 6539U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MAX;
	int8_t x194 = INT8_MIN;
	int32_t x195 = -1;
	volatile uint16_t x196 = 440U;
	static int64_t t46 = INT64_MAX;

	t46 = (x193+((x194|x195)/x196));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x201 = INT32_MIN;
	int32_t x202 = -1;
	int8_t x203 = 32;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t47 = 28643799264301029LLU;

	t47 = (x201+((x202|x203)/x204));

	if (t47 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MAX;
	int8_t x206 = INT8_MIN;

	t48 = (x205+((x206|x207)/x208));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x209 = 5;
	int16_t x210 = -454;
	int32_t x212 = INT32_MIN;
	int32_t t49 = 72;

	t49 = (x209+((x210|x211)/x212));

	if (t49 != 5) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x213 = 4952U;
	volatile int32_t x214 = INT32_MAX;
	static int8_t x215 = INT8_MIN;
	uint16_t x216 = UINT16_MAX;
	static uint32_t t50 = 4U;

	t50 = (x213+((x214|x215)/x216));

	if (t50 != 4952U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x217 = INT8_MIN;
	static volatile int64_t x219 = INT64_MAX;
	int8_t x220 = INT8_MAX;
	int64_t t51 = 149517973174LL;

	t51 = (x217+((x218|x219)/x220));

	if (t51 != -128LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x223 = INT16_MAX;
	static int16_t x224 = -1;

	t52 = (x221+((x222|x223)/x224));

	if (t52 != 9198973535018LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = UINT8_MAX;
	static int32_t x226 = -1;
	int32_t x227 = 1;
	uint8_t x228 = 40U;
	int32_t t53 = 27096;

	t53 = (x225+((x226|x227)/x228));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = -1;
	uint16_t x230 = 1U;
	uint16_t x231 = 5201U;
	static int32_t x232 = 445547;
	static int32_t t54 = 22;

	t54 = (x229+((x230|x231)/x232));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = -6;
	static int16_t x236 = INT16_MIN;
	static int32_t t55 = 5550;

	t55 = (x233+((x234|x235)/x236));

	if (t55 != -6) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x237 = -31;
	uint32_t x238 = UINT32_MAX;
	int64_t x240 = 9843LL;
	static int64_t t56 = -10416100778184949LL;

	t56 = (x237+((x238|x239)/x240));

	if (t56 != 436316LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = INT32_MAX;
	uint64_t x242 = 453LLU;
	int8_t x243 = -1;
	uint32_t x244 = UINT32_MAX;
	uint64_t t57 = 357492417LLU;

	t57 = (x241+((x242|x243)/x244));

	if (t57 != 6442450944LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x245 = 137U;
	int32_t x246 = INT32_MIN;
	int16_t x247 = -20;
	volatile int64_t t58 = -20977275352481LL;

	t58 = (x245+((x246|x247)/x248));

	if (t58 != 137LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x249 = INT64_MIN;
	volatile int16_t x250 = INT16_MAX;
	static uint16_t x251 = 0U;
	static int32_t x252 = INT32_MIN;
	volatile int64_t t59 = INT64_MIN;

	t59 = (x249+((x250|x251)/x252));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x254 = -1LL;
	uint32_t x255 = UINT32_MAX;
	static volatile uint64_t x256 = 10046984321592LLU;
	uint64_t t60 = 310923630527LLU;

	t60 = (x253+((x254|x255)/x256));

	if (t60 != 1901582LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x257 = 591U;
	volatile uint16_t x258 = 1252U;
	static volatile int64_t x259 = -1LL;
	static volatile int64_t x260 = -847001185LL;
	volatile int64_t t61 = -100042002091583047LL;

	t61 = (x257+((x258|x259)/x260));

	if (t61 != 591LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = -1LL;
	int8_t x262 = INT8_MAX;
	int16_t x264 = -2921;
	volatile int64_t t62 = -209LL;

	t62 = (x261+((x262|x263)/x264));

	if (t62 != 8LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x265 = INT16_MIN;
	static int64_t x267 = INT64_MAX;
	volatile int16_t x268 = -45;

	t63 = (x265+((x266|x267)/x268));

	if (t63 != -204963823041250008LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x269 = UINT32_MAX;
	volatile uint16_t x270 = 200U;
	uint8_t x271 = UINT8_MAX;
	int16_t x272 = -2884;

	t64 = (x269+((x270|x271)/x272));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x273 = 0U;
	static uint64_t x274 = 449578347240655282LLU;
	volatile int32_t x275 = 479;
	volatile uint8_t x276 = UINT8_MAX;
	volatile uint64_t t65 = 10046337305298429LLU;

	t65 = (x273+((x274|x275)/x276));

	if (t65 != 1763052342120217LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = INT16_MIN;
	int64_t x278 = 117LL;
	uint16_t x279 = UINT16_MAX;
	static uint8_t x280 = 3U;
	int64_t t66 = -82100LL;

	t66 = (x277+((x278|x279)/x280));

	if (t66 != -10923LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x285 = UINT16_MAX;
	int64_t x286 = INT64_MAX;
	int8_t x287 = 31;
	uint64_t x288 = 11174464035703LLU;
	static uint64_t t67 = 36246712698LLU;

	t67 = (x285+((x286|x287)/x288));

	if (t67 != 890932LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MAX;
	static uint32_t x291 = 22296737U;
	int64_t x292 = 132506604877LL;

	t68 = (x289+((x290|x291)/x292));

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = 53083323338453LL;
	int64_t x295 = INT64_MIN;
	int64_t x296 = INT64_MAX;
	int64_t t69 = -2135892406032LL;

	t69 = (x293+((x294|x295)/x296));

	if (t69 != 53083323338453LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x298 = 5LL;
	int64_t t70 = -1LL;

	t70 = (x297+((x298|x299)/x300));

	if (t70 != 1855580022276LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x301 = -1LL;
	uint64_t x302 = 48855922LLU;
	volatile int16_t x303 = 1;
	uint64_t x304 = 50006620094027LLU;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x301+((x302|x303)/x304));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = INT8_MAX;
	int64_t x307 = INT64_MIN;
	static volatile int64_t t72 = -178811142030796LL;

	t72 = (x305+((x306|x307)/x308));

	if (t72 != -16096635317372954LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x309 = 0;
	static int16_t x310 = -1;
	int8_t x311 = -1;
	int64_t x312 = INT64_MIN;

	t73 = (x309+((x310|x311)/x312));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x313 = 0;
	uint8_t x314 = 0U;
	volatile int8_t x315 = 1;
	static volatile int32_t x316 = -1;
	volatile int32_t t74 = -706559487;

	t74 = (x313+((x314|x315)/x316));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = -762;
	int8_t x318 = -1;
	int8_t x319 = 3;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t75 = -5976475;

	t75 = (x317+((x318|x319)/x320));

	if (t75 != -762) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x321 = 25140LLU;
	uint16_t x322 = UINT16_MAX;
	static volatile uint8_t x323 = 1U;
	volatile int32_t x324 = -133474010;
	volatile uint64_t t76 = 299430005290LLU;

	t76 = (x321+((x322|x323)/x324));

	if (t76 != 25140LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = INT16_MIN;
	volatile int8_t x327 = INT8_MIN;
	static int64_t x328 = -1LL;
	int64_t t77 = -883906990LL;

	t77 = (x325+((x326|x327)/x328));

	if (t77 != -32761LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = -1;
	uint8_t x330 = UINT8_MAX;
	uint16_t x331 = 135U;
	int16_t x332 = INT16_MAX;
	volatile int32_t t78 = -2209595;

	t78 = (x329+((x330|x331)/x332));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = -1;
	volatile uint8_t x334 = 79U;
	volatile uint32_t x335 = UINT32_MAX;
	volatile uint8_t x336 = 69U;
	volatile uint32_t t79 = 3787804U;

	t79 = (x333+((x334|x335)/x336));

	if (t79 != 62245901U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x338 = -1;
	int8_t x339 = -12;
	static uint32_t x340 = UINT32_MAX;
	uint64_t t80 = 2LLU;

	t80 = (x337+((x338|x339)/x340));

	if (t80 != 101139149001699LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = INT16_MIN;
	static int8_t x342 = 14;
	static int8_t x343 = INT8_MIN;
	int32_t t81 = -96597094;

	t81 = (x341+((x342|x343)/x344));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x345 = 77787U;
	uint32_t x346 = UINT32_MAX;
	int8_t x347 = 4;

	t82 = (x345+((x346|x347)/x348));

	if (t82 != 78268LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x349 = UINT32_MAX;
	int8_t x350 = -1;
	static uint16_t x351 = UINT16_MAX;
	int16_t x352 = -1;
	volatile uint32_t t83 = 112984U;

	t83 = (x349+((x350|x351)/x352));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x358 = 2083U;
	uint16_t x359 = 125U;
	int32_t x360 = 1;

	t84 = (x357+((x358|x359)/x360));

	if (t84 != 2206) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = INT16_MIN;
	int32_t x362 = INT32_MAX;
	int16_t x363 = -1;
	int8_t x364 = 42;
	volatile int32_t t85 = 927063690;

	t85 = (x361+((x362|x363)/x364));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = -29LL;
	static int16_t x367 = INT16_MAX;
	int64_t x368 = INT64_MIN;
	volatile int64_t t86 = 1668278396LL;

	t86 = (x365+((x366|x367)/x368));

	if (t86 != -29LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = -1;
	int16_t x370 = INT16_MIN;
	int32_t x371 = INT32_MIN;
	int8_t x372 = -13;
	volatile int32_t t87 = -18;

	t87 = (x369+((x370|x371)/x372));

	if (t87 != 2519) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x373 = 28LL;
	int64_t x375 = 715362449138623LL;
	uint32_t x376 = 1U;
	volatile int64_t t88 = -12775LL;

	t88 = (x373+((x374|x375)/x376));

	if (t88 != -861232165LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x377 = 1;
	int16_t x379 = 778;
	volatile uint64_t x380 = 190354189401400858LLU;
	volatile uint64_t t89 = 297915LLU;

	t89 = (x377+((x378|x379)/x380));

	if (t89 != 97LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = 236U;
	uint16_t x383 = 3441U;
	int32_t x384 = 1707083;
	static volatile uint32_t t90 = 12983U;

	t90 = (x381+((x382|x383)/x384));

	if (t90 != 236U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x386 = -1;
	static uint64_t x387 = UINT64_MAX;
	uint64_t x388 = UINT64_MAX;
	uint64_t t91 = 3722780221770LLU;

	t91 = (x385+((x386|x387)/x388));

	if (t91 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x389 = UINT16_MAX;
	uint32_t x391 = 155U;
	static uint32_t t92 = 339135028U;

	t92 = (x389+((x390|x391)/x392));

	if (t92 != 65536U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x393 = 2310U;
	int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MAX;

	t93 = (x393+((x394|x395)/x396));

	if (t93 != 2310LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x397 = 28444612503652LLU;
	static uint64_t x398 = UINT64_MAX;
	static volatile uint64_t x399 = 912308997LLU;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t94 = 27265410890943332LLU;

	t94 = (x397+((x398|x399)/x400));

	if (t94 != 28444612503653LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = INT32_MIN;
	int8_t x406 = -1;

	t95 = (x405+((x406|x407)/x408));

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = 3312584LL;
	volatile uint64_t x410 = UINT64_MAX;
	int8_t x412 = -1;

	t96 = (x409+((x410|x411)/x412));

	if (t96 != 3312585LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MIN;
	uint16_t x415 = 91U;
	int16_t x416 = INT16_MIN;

	t97 = (x413+((x414|x415)/x416));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x417 = UINT8_MAX;
	int32_t x418 = -2395090;
	int16_t x419 = -1;
	int8_t x420 = -1;

	t98 = (x417+((x418|x419)/x420));

	if (t98 != 256) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = INT64_MAX;
	int64_t x423 = 1497LL;
	static int16_t x424 = -1;
	volatile int64_t t99 = -94935018686LL;

	t99 = (x421+((x422|x423)/x424));

	if (t99 != 9223372036854774304LL) { NG(); } else { ; }
	
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

