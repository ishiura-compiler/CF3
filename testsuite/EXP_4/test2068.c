#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 6703239LLU;
volatile uint64_t t1 = 92999959277133LLU;
uint32_t x9 = 146U;
int32_t x12 = -1;
int64_t t2 = -21LL;
static uint8_t x16 = 1U;
int32_t t3 = 1453191;
uint16_t x17 = UINT16_MAX;
uint64_t x19 = 6837951021LLU;
uint16_t x22 = UINT16_MAX;
int32_t x24 = INT32_MIN;
uint16_t x27 = 1U;
volatile int32_t t6 = -1108059;
uint8_t x29 = UINT8_MAX;
int8_t x32 = -21;
volatile uint64_t x33 = UINT64_MAX;
int16_t x35 = -13;
int8_t x36 = INT8_MIN;
volatile uint64_t t8 = 517506846768751511LLU;
int8_t x38 = 2;
int32_t x39 = INT32_MIN;
uint32_t x40 = UINT32_MAX;
static int32_t x44 = -1;
int32_t x52 = INT32_MAX;
volatile uint64_t t14 = 121023749121241978LLU;
uint64_t t15 = 2212181996274381469LLU;
static volatile int64_t t17 = 33487343004710LL;
volatile int64_t x75 = -1LL;
int64_t t18 = -1017629217313LL;
int16_t x81 = INT16_MIN;
volatile int8_t x83 = INT8_MAX;
static int32_t x100 = INT32_MIN;
uint32_t x105 = 199890U;
int16_t x110 = 23;
static uint8_t x124 = UINT8_MAX;
int32_t x128 = INT32_MIN;
int8_t x129 = INT8_MIN;
uint16_t x131 = 30414U;
static int16_t x154 = -20;
volatile uint8_t x160 = 48U;
uint64_t x162 = UINT64_MAX;
static uint64_t t39 = 7LLU;
uint16_t x168 = UINT16_MAX;
int64_t t41 = -241LL;
static volatile int32_t x175 = INT32_MIN;
uint8_t x184 = 24U;
int32_t t44 = 6343;
int32_t x186 = INT32_MIN;
int16_t x187 = INT16_MAX;
uint64_t x188 = 547346128240LLU;
volatile int64_t x192 = INT64_MAX;
int64_t t46 = -88241884260LL;
int8_t x193 = 20;
uint8_t x194 = UINT8_MAX;
volatile int16_t x196 = INT16_MAX;
volatile int32_t t47 = -448;
static int32_t x197 = -1;
int32_t x199 = INT32_MIN;
volatile uint32_t t48 = 27239729U;
static int64_t x201 = INT64_MAX;
volatile int64_t x203 = INT64_MAX;
uint8_t x221 = UINT8_MAX;
volatile uint32_t x222 = UINT32_MAX;
static uint64_t x224 = 1LLU;
uint64_t x228 = 3998889475746773545LLU;
int64_t x237 = 85482105LL;
int32_t x238 = INT32_MIN;
volatile int64_t x239 = INT64_MIN;
static volatile int32_t x240 = INT32_MAX;
volatile int8_t x241 = INT8_MIN;
int16_t x245 = -2792;
int8_t x247 = -2;
uint8_t x250 = 45U;
int8_t x255 = INT8_MIN;
uint8_t x260 = 11U;
int64_t x267 = 7928080220362397LL;
volatile int64_t x269 = -24297276915LL;
static volatile int16_t x270 = INT16_MIN;
int64_t x272 = -4262191937LL;
int64_t x281 = INT64_MIN;
volatile int32_t x284 = 6;
uint32_t x287 = UINT32_MAX;
int32_t x289 = -1044180769;
int16_t x291 = INT16_MAX;
uint8_t x292 = UINT8_MAX;
int32_t t70 = -4765;
int64_t x296 = -1LL;
volatile uint8_t x303 = 1U;
volatile int32_t x315 = INT32_MAX;
uint32_t t76 = UINT32_MAX;
int32_t x323 = INT32_MIN;
static int32_t x328 = -1598711;
uint64_t x331 = 12032193186942058LLU;
static uint64_t t80 = 2922021117017412964LLU;
volatile int16_t x334 = 201;
static int16_t x337 = INT16_MAX;
int16_t x340 = -1;
static int16_t x343 = -1;
volatile uint8_t x345 = 13U;
volatile int16_t x346 = INT16_MIN;
uint32_t x347 = 1120523U;
uint32_t x350 = 54564601U;
uint32_t x356 = 32630207U;
int16_t x362 = -1021;
volatile int64_t x368 = -1LL;
int8_t x370 = INT8_MIN;
uint64_t x372 = UINT64_MAX;
uint8_t x376 = 0U;
volatile uint32_t t90 = 4U;
int64_t x379 = -21700323LL;
static int16_t x381 = INT16_MAX;
volatile int32_t t92 = -249;
volatile uint64_t x388 = 0LLU;
int8_t x392 = INT8_MAX;
volatile int32_t t94 = -8173;
int64_t x394 = INT64_MAX;
int8_t x396 = -2;
volatile int64_t x400 = INT64_MAX;
int8_t x401 = -1;
int8_t x410 = 13;
int64_t t99 = -165857049LL;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	int64_t x2 = -1LL;
	uint64_t x3 = 434762LLU;
	int64_t x4 = 1262752601364677461LL;

	t0 = (x1+(x2/(x3^x4)));

	if (t0 != 2147483661LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint64_t x6 = 1620384688LLU;
	uint8_t x7 = UINT8_MAX;
	int8_t x8 = INT8_MAX;

	t1 = (x5+(x6/(x7^x8)));

	if (t1 != 12659127LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x10 = INT64_MIN;
	int8_t x11 = -27;

	t2 = (x9+(x10/(x11^x12)));

	if (t2 != -354745078340568154LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = INT16_MAX;
	static volatile int8_t x14 = 18;
	int8_t x15 = INT8_MIN;

	t3 = (x13+(x14/(x15^x16)));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -3995633LL;
	uint8_t x20 = 13U;
	volatile uint64_t t4 = 28208LLU;

	t4 = (x17+(x18/(x19^x20)));

	if (t4 != 2697766067LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int8_t x23 = INT8_MAX;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x21+(x22/(x23^x24)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 47U;
	static uint16_t x26 = UINT16_MAX;
	int8_t x28 = -1;

	t6 = (x25+(x26/(x27^x28)));

	if (t6 != -32720) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 2595941026LLU;
	volatile int32_t x31 = -1;
	static volatile uint64_t t7 = 783920118554505LLU;

	t7 = (x29+(x30/(x31^x32)));

	if (t7 != 129797306LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 1918335202U;

	t8 = (x33+(x34/(x35^x36)));

	if (t8 != 16681174LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	volatile int64_t t9 = INT64_MAX;

	t9 = (x37+(x38/(x39^x40)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -16091939;
	uint8_t x42 = 0U;
	int16_t x43 = INT16_MIN;
	volatile int32_t t10 = 108897145;

	t10 = (x41+(x42/(x43^x44)));

	if (t10 != -16091939) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x45 = 5385U;
	int16_t x46 = INT16_MIN;
	int8_t x47 = -1;
	int32_t x48 = INT32_MIN;
	uint32_t t11 = 285003905U;

	t11 = (x45+(x46/(x47^x48)));

	if (t11 != 5385U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = 12493;
	uint16_t x50 = 621U;
	static volatile int32_t x51 = -1;
	volatile int32_t t12 = -16833035;

	t12 = (x49+(x50/(x51^x52)));

	if (t12 != 12493) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 67777711282900714LLU;
	uint64_t x54 = 8660044650420556LLU;
	int8_t x55 = INT8_MIN;
	uint32_t x56 = UINT32_MAX;
	uint64_t t13 = 299643909700274LLU;

	t13 = (x53+(x54/(x55^x56)));

	if (t13 != 67845900610856781LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	uint64_t x58 = UINT64_MAX;
	uint16_t x59 = UINT16_MAX;
	static int32_t x60 = -1;

	t14 = (x57+(x58/(x59^x60)));

	if (t14 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 5772211240LLU;
	int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MIN;
	static uint16_t x64 = UINT16_MAX;

	t15 = (x61+(x62/(x63^x64)));

	if (t15 != 5772211240LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	static int8_t x66 = -1;
	uint64_t x67 = UINT64_MAX;
	uint32_t x68 = 21181031U;
	uint64_t t16 = 58768LLU;

	t16 = (x65+(x66/(x67^x68)));

	if (t16 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 26;
	static int64_t x70 = INT64_MIN;
	volatile int64_t x71 = -1LL;
	int8_t x72 = INT8_MIN;

	t17 = (x69+(x70/(x71^x72)));

	if (t17 != -72624976668147815LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	volatile int32_t x74 = -580978340;
	int8_t x76 = INT8_MAX;

	t18 = (x73+(x74/(x75^x76)));

	if (t18 != 4506125LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x82 = -1;
	int16_t x84 = INT16_MAX;
	static int32_t t19 = 51802418;

	t19 = (x81+(x82/(x83^x84)));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = 17;
	int32_t x86 = -1;
	volatile int64_t x87 = INT64_MIN;
	uint16_t x88 = 14U;
	int64_t t20 = -528039704LL;

	t20 = (x85+(x86/(x87^x88)));

	if (t20 != 17LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = UINT32_MAX;
	volatile int8_t x90 = INT8_MAX;
	int8_t x91 = INT8_MAX;
	int16_t x92 = -1;
	uint32_t t21 = UINT32_MAX;

	t21 = (x89+(x90/(x91^x92)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MIN;
	uint32_t x95 = 4U;
	uint16_t x96 = 13U;
	uint32_t t22 = 836617101U;

	t22 = (x93+(x94/(x95^x96)));

	if (t22 != 477185806U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	int64_t x98 = INT64_MIN;
	uint16_t x99 = 432U;
	volatile int64_t t23 = -104316427987062LL;

	t23 = (x97+(x98/(x99^x100)));

	if (t23 != 8589935455LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	int64_t x102 = -1LL;
	static volatile uint64_t x103 = 4307021327308LLU;
	int32_t x104 = 11;
	volatile uint64_t t24 = 10941058LLU;

	t24 = (x101+(x102/(x103^x104)));

	if (t24 != 9223372036859058755LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x106 = UINT64_MAX;
	static int8_t x107 = INT8_MIN;
	static uint8_t x108 = 19U;
	uint64_t t25 = 66LLU;

	t25 = (x105+(x106/(x107^x108)));

	if (t25 != 199891LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = -1;
	static int64_t x111 = -32876030250382872LL;
	int64_t x112 = INT64_MIN;
	int64_t t26 = 59467330LL;

	t26 = (x109+(x110/(x111^x112)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	int8_t x114 = INT8_MIN;
	int32_t x115 = -1;
	volatile uint8_t x116 = 4U;
	volatile int32_t t27 = 5443970;

	t27 = (x113+(x114/(x115^x116)));

	if (t27 != 32792) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = 28U;
	static uint64_t x118 = 847LLU;
	int16_t x119 = -1;
	int16_t x120 = INT16_MAX;
	volatile uint64_t t28 = 9422901168LLU;

	t28 = (x117+(x118/(x119^x120)));

	if (t28 != 28LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MIN;
	uint64_t x123 = 375377315LLU;
	volatile uint64_t t29 = 493505414LLU;

	t29 = (x121+(x122/(x123^x124)));

	if (t29 != 46994397929LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -256756821024LL;
	uint64_t x126 = 263501342188063467LLU;
	int64_t x127 = -1LL;
	volatile uint64_t t30 = 32109156272619LLU;

	t30 = (x125+(x126/(x127^x128)));

	if (t30 != 18446743817075432966LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x130 = UINT16_MAX;
	int16_t x132 = -1;
	int32_t t31 = 323921;

	t31 = (x129+(x130/(x131^x132)));

	if (t31 != -130) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = UINT8_MAX;
	int8_t x134 = INT8_MAX;
	int64_t x135 = 2LL;
	uint64_t x136 = UINT64_MAX;
	uint64_t t32 = 105LLU;

	t32 = (x133+(x134/(x135^x136)));

	if (t32 != 255LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x137 = INT16_MAX;
	uint64_t x138 = 3314821124111LLU;
	static volatile int32_t x139 = 292;
	uint64_t x140 = 12060572373073400LLU;
	static volatile uint64_t t33 = 1800154LLU;

	t33 = (x137+(x138/(x139^x140)));

	if (t33 != 32767LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x141 = INT16_MIN;
	int8_t x142 = INT8_MAX;
	int16_t x143 = -1;
	int32_t x144 = INT32_MIN;
	volatile int32_t t34 = -2697876;

	t34 = (x141+(x142/(x143^x144)));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	int16_t x146 = -108;
	int32_t x147 = INT32_MAX;
	static uint64_t x148 = 7LLU;
	volatile uint64_t t35 = 250294117LLU;

	t35 = (x145+(x146/(x147^x148)));

	if (t35 != 8589934623LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x149 = INT64_MAX;
	uint16_t x150 = 1126U;
	int16_t x151 = -1;
	uint16_t x152 = 123U;
	volatile int64_t t36 = -1438951570459LL;

	t36 = (x149+(x150/(x151^x152)));

	if (t36 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = -1;
	static int32_t x155 = INT32_MAX;
	static volatile uint8_t x156 = 4U;
	volatile int32_t t37 = 8123128;

	t37 = (x153+(x154/(x155^x156)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x157 = INT8_MAX;
	static uint64_t x158 = UINT64_MAX;
	int64_t x159 = -4142164156375LL;
	volatile uint64_t t38 = 46604807LLU;

	t38 = (x157+(x158/(x159^x160)));

	if (t38 != 128LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = -3;
	volatile uint16_t x163 = 2641U;
	uint32_t x164 = 88U;

	t39 = (x161+(x162/(x163^x164)));

	if (t39 != 7180515404324462LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = INT8_MIN;
	static uint8_t x166 = 22U;
	static int8_t x167 = -1;
	volatile int32_t t40 = 17862789;

	t40 = (x165+(x166/(x167^x168)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	volatile int32_t x170 = INT32_MIN;
	int8_t x171 = INT8_MIN;
	static int64_t x172 = INT64_MAX;

	t41 = (x169+(x170/(x171^x172)));

	if (t41 != -32768LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x173 = -1;
	int32_t x174 = -1;
	volatile int64_t x176 = INT64_MIN;
	volatile int64_t t42 = 509400729454411556LL;

	t42 = (x173+(x174/(x175^x176)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	uint64_t x178 = 4197845669074600553LLU;
	uint16_t x179 = UINT16_MAX;
	static uint16_t x180 = 6U;
	volatile uint64_t t43 = 119124415946503787LLU;

	t43 = (x177+(x178/(x179^x180)));

	if (t43 != 9223436097738797761LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = UINT8_MAX;
	volatile uint16_t x182 = UINT16_MAX;
	volatile int8_t x183 = -1;

	t44 = (x181+(x182/(x183^x184)));

	if (t44 != -2366) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = 8;
	uint64_t t45 = 4752320928085802LLU;

	t45 = (x185+(x186/(x187^x188)));

	if (t45 != 33702161LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MAX;
	uint32_t x190 = 61U;
	volatile uint32_t x191 = 28U;

	t46 = (x189+(x190/(x191^x192)));

	if (t46 != 2147483647LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x195 = 65U;

	t47 = (x193+(x194/(x195^x196)));

	if (t47 != 20) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x198 = UINT32_MAX;
	volatile int16_t x200 = -1;

	t48 = (x197+(x198/(x199^x200)));

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x202 = INT32_MAX;
	uint32_t x204 = 1590988357U;
	int64_t t49 = INT64_MAX;

	t49 = (x201+(x202/(x203^x204)));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = INT8_MIN;
	static int8_t x206 = 1;
	int16_t x207 = 1;
	int64_t x208 = -1LL;
	int64_t t50 = 5988612LL;

	t50 = (x205+(x206/(x207^x208)));

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = 0;
	int64_t x210 = -1LL;
	int16_t x211 = -1;
	uint8_t x212 = 90U;
	static volatile int64_t t51 = 10904426LL;

	t51 = (x209+(x210/(x211^x212)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = 288;
	int8_t x214 = -6;
	int64_t x215 = -1LL;
	static int8_t x216 = INT8_MIN;
	volatile int64_t t52 = 7676085908LL;

	t52 = (x213+(x214/(x215^x216)));

	if (t52 != 288LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = UINT8_MAX;
	int16_t x218 = INT16_MIN;
	uint16_t x219 = 8U;
	int16_t x220 = 1517;
	int32_t t53 = 5668;

	t53 = (x217+(x218/(x219^x220)));

	if (t53 != 234) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x223 = 4341091624421772754LL;
	volatile uint64_t t54 = 253413LLU;

	t54 = (x221+(x222/(x223^x224)));

	if (t54 != 255LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x225 = 5U;
	uint8_t x226 = UINT8_MAX;
	static volatile uint32_t x227 = 874516U;
	uint64_t t55 = 43296LLU;

	t55 = (x225+(x226/(x227^x228)));

	if (t55 != 5LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = -1;
	int32_t x230 = INT32_MIN;
	volatile int16_t x231 = INT16_MAX;
	int64_t x232 = -1LL;
	int64_t t56 = -140683180204682LL;

	t56 = (x229+(x230/(x231^x232)));

	if (t56 != 65535LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = 230540228LL;
	int64_t x234 = -1LL;
	int16_t x235 = INT16_MIN;
	uint32_t x236 = 1U;
	volatile int64_t t57 = -1LL;

	t57 = (x233+(x234/(x235^x236)));

	if (t57 != 230540228LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t t58 = -55827103LL;

	t58 = (x237+(x238/(x239^x240)));

	if (t58 != 85482105LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x242 = UINT16_MAX;
	volatile uint32_t x243 = 2380U;
	int8_t x244 = -17;
	uint32_t t59 = 2267U;

	t59 = (x241+(x242/(x243^x244)));

	if (t59 != 4294967168U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x246 = UINT8_MAX;
	uint64_t x248 = UINT64_MAX;
	uint64_t t60 = 154LLU;

	t60 = (x245+(x246/(x247^x248)));

	if (t60 != 18446744073709549079LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x249 = INT16_MIN;
	int64_t x251 = 12535842548429LL;
	int32_t x252 = INT32_MAX;
	int64_t t61 = 28343680LL;

	t61 = (x249+(x250/(x251^x252)));

	if (t61 != -32768LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x253 = 466092837459168LL;
	int32_t x254 = INT32_MIN;
	volatile int64_t x256 = -8271645490126LL;
	volatile int64_t t62 = -49867363048564LL;

	t62 = (x253+(x254/(x255^x256)));

	if (t62 != 466092837459168LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x257 = INT32_MIN;
	uint32_t x258 = 9411461U;
	volatile int32_t x259 = INT32_MAX;
	volatile uint32_t t63 = 143596U;

	t63 = (x257+(x258/(x259^x260)));

	if (t63 != 2147483648U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = -1;
	uint16_t x262 = 7195U;
	static uint32_t x263 = 63U;
	int16_t x264 = INT16_MAX;
	static uint32_t t64 = UINT32_MAX;

	t64 = (x261+(x262/(x263^x264)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MAX;
	uint8_t x266 = UINT8_MAX;
	int32_t x268 = INT32_MIN;
	static int64_t t65 = -31437LL;

	t65 = (x265+(x266/(x267^x268)));

	if (t65 != 2147483647LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x271 = UINT64_MAX;
	uint64_t t66 = 8568836LLU;

	t66 = (x269+(x270/(x271^x272)));

	if (t66 != 18446744053740269392LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x277 = UINT16_MAX;
	int32_t x278 = INT32_MIN;
	int64_t x279 = INT64_MIN;
	uint8_t x280 = 0U;
	int64_t t67 = 787LL;

	t67 = (x277+(x278/(x279^x280)));

	if (t67 != 65535LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x282 = INT8_MAX;
	int16_t x283 = INT16_MAX;
	static int64_t t68 = INT64_MIN;

	t68 = (x281+(x282/(x283^x284)));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x285 = 4528;
	volatile uint64_t x286 = 3763530LLU;
	uint64_t x288 = 174929066LLU;
	uint64_t t69 = 473057LLU;

	t69 = (x285+(x286/(x287^x288)));

	if (t69 != 4528LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x290 = INT16_MIN;

	t70 = (x289+(x290/(x291^x292)));

	if (t70 != -1044180770) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x293 = UINT64_MAX;
	volatile uint16_t x294 = 13U;
	uint16_t x295 = 29U;
	uint64_t t71 = UINT64_MAX;

	t71 = (x293+(x294/(x295^x296)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x297 = -2;
	uint8_t x298 = 3U;
	volatile uint32_t x299 = 12317190U;
	static uint8_t x300 = UINT8_MAX;
	uint32_t t72 = 971267U;

	t72 = (x297+(x298/(x299^x300)));

	if (t72 != 4294967294U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = UINT8_MAX;
	int8_t x302 = -3;
	int64_t x304 = -1LL;
	volatile int64_t t73 = 3298103LL;

	t73 = (x301+(x302/(x303^x304)));

	if (t73 != 256LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x305 = UINT8_MAX;
	uint32_t x306 = UINT32_MAX;
	volatile int16_t x307 = INT16_MIN;
	static volatile int32_t x308 = 388698896;
	static volatile uint32_t t74 = 2622U;

	t74 = (x305+(x306/(x307^x308)));

	if (t74 != 256U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	volatile int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MIN;
	uint64_t x312 = UINT64_MAX;
	static uint64_t t75 = 183711326745855796LLU;

	t75 = (x309+(x310/(x311^x312)));

	if (t75 != 9223653520421683208LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = -1;
	volatile uint16_t x314 = UINT16_MAX;
	volatile uint32_t x316 = UINT32_MAX;

	t76 = (x313+(x314/(x315^x316)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MIN;
	volatile int32_t x318 = INT32_MIN;
	static int8_t x319 = INT8_MIN;
	uint8_t x320 = 1U;
	static int64_t t77 = -284393261529667709LL;

	t77 = (x317+(x318/(x319^x320)));

	if (t77 != -9223372036837866488LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int8_t x322 = INT8_MIN;
	volatile uint64_t x324 = UINT64_MAX;
	static volatile uint64_t t78 = 508611827956LLU;

	t78 = (x321+(x322/(x323^x324)));

	if (t78 != 8589934594LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x325 = 2084689LLU;
	volatile int16_t x326 = INT16_MIN;
	static int8_t x327 = 0;
	volatile uint64_t t79 = 377520LLU;

	t79 = (x325+(x326/(x327^x328)));

	if (t79 != 2084689LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = 245LLU;
	int8_t x330 = INT8_MAX;
	volatile uint32_t x332 = UINT32_MAX;

	t80 = (x329+(x330/(x331^x332)));

	if (t80 != 245LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x333 = 22806U;
	uint64_t x335 = UINT64_MAX;
	uint32_t x336 = 5U;
	static volatile uint64_t t81 = 232364631LLU;

	t81 = (x333+(x334/(x335^x336)));

	if (t81 != 22806LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x338 = -1;
	volatile uint16_t x339 = 12619U;
	volatile int32_t t82 = 4;

	t82 = (x337+(x338/(x339^x340)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x341 = 11U;
	uint8_t x342 = 25U;
	uint16_t x344 = 4U;
	int32_t t83 = -364;

	t83 = (x341+(x342/(x343^x344)));

	if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x348 = INT64_MIN;
	int64_t t84 = -16LL;

	t84 = (x345+(x346/(x347^x348)));

	if (t84 != 13LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x349 = -1;
	int32_t x351 = 158;
	static int64_t x352 = INT64_MIN;
	volatile int64_t t85 = -57LL;

	t85 = (x349+(x350/(x351^x352)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x353 = INT16_MAX;
	uint8_t x354 = UINT8_MAX;
	int8_t x355 = INT8_MIN;
	volatile uint32_t t86 = 32789U;

	t86 = (x353+(x354/(x355^x356)));

	if (t86 != 32767U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MIN;
	uint16_t x363 = 1U;
	volatile int16_t x364 = -1;
	int32_t t87 = -206619394;

	t87 = (x361+(x362/(x363^x364)));

	if (t87 != -2147483138) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x365 = 8645883434325207285LLU;
	static uint16_t x366 = 6870U;
	int16_t x367 = -31;
	uint64_t t88 = 145797LLU;

	t88 = (x365+(x366/(x367^x368)));

	if (t88 != 8645883434325207514LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = INT64_MIN;
	int32_t x371 = INT32_MAX;
	uint64_t t89 = 11915327490319LLU;

	t89 = (x369+(x370/(x371^x372)));

	if (t89 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x373 = 47U;
	static volatile uint16_t x374 = 24U;
	volatile uint16_t x375 = UINT16_MAX;

	t90 = (x373+(x374/(x375^x376)));

	if (t90 != 47U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x377 = UINT64_MAX;
	int8_t x378 = INT8_MIN;
	volatile uint64_t x380 = 4175062683LLU;
	static volatile uint64_t t91 = 51155LLU;

	t91 = (x377+(x378/(x379^x380)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x382 = INT8_MIN;
	int16_t x383 = -49;
	static int8_t x384 = INT8_MIN;

	t92 = (x381+(x382/(x383^x384)));

	if (t92 != 32766) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MIN;
	uint16_t x386 = 9U;
	int32_t x387 = INT32_MIN;
	volatile uint64_t t93 = 16274LLU;

	t93 = (x385+(x386/(x387^x388)));

	if (t93 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x389 = INT32_MIN;
	static uint8_t x390 = 56U;
	uint8_t x391 = 106U;

	t94 = (x389+(x390/(x391^x392)));

	if (t94 != -2147483646) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = -1;
	static int32_t x395 = INT32_MAX;
	volatile int64_t t95 = -1LL;

	t95 = (x393+(x394/(x395^x396)));

	if (t95 != -4294967299LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = -904949180255366953LL;
	static int8_t x398 = INT8_MIN;
	uint64_t x399 = 9LLU;
	uint64_t t96 = 83770841LLU;

	t96 = (x397+(x398/(x399^x400)));

	if (t96 != 17541794893454184664LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x402 = 0LL;
	int16_t x403 = -1580;
	int32_t x404 = INT32_MIN;
	static volatile int64_t t97 = -204LL;

	t97 = (x401+(x402/(x403^x404)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x405 = 282U;
	static uint8_t x406 = UINT8_MAX;
	volatile int32_t x407 = 652;
	uint64_t x408 = 30585802LLU;
	static volatile uint64_t t98 = 17374008LLU;

	t98 = (x405+(x406/(x407^x408)));

	if (t98 != 282LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x409 = INT32_MIN;
	int64_t x411 = INT64_MIN;
	int8_t x412 = -28;

	t99 = (x409+(x410/(x411^x412)));

	if (t99 != -2147483648LL) { NG(); } else { ; }
	
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

