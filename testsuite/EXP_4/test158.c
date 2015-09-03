#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x5 = UINT8_MAX;
int64_t x10 = INT64_MAX;
int64_t t2 = 1797078LL;
volatile uint16_t x13 = 60U;
int8_t x15 = -2;
int32_t x22 = -1;
int64_t x23 = 2384589004378494LL;
volatile uint64_t t7 = 786LLU;
int8_t x51 = 0;
uint16_t x52 = UINT16_MAX;
volatile int64_t t11 = -10LL;
volatile uint16_t x58 = UINT16_MAX;
int64_t x66 = INT64_MAX;
static int64_t x74 = INT64_MIN;
int64_t x76 = -1LL;
uint64_t x82 = 1091533837733LLU;
int16_t x86 = -1;
static int32_t x87 = -1;
static int32_t t18 = 268887;
int32_t x90 = -227787365;
volatile int16_t x94 = 3;
int8_t x97 = INT8_MAX;
int64_t t21 = 14LL;
int64_t x105 = -1LL;
uint64_t x108 = 4LLU;
volatile uint64_t t22 = 190181131523868LLU;
volatile uint8_t x120 = UINT8_MAX;
int32_t t23 = 5181;
static uint64_t t24 = 1119489154047983LLU;
int16_t x131 = INT16_MIN;
static int32_t t26 = -178960814;
uint8_t x134 = 65U;
volatile uint64_t t27 = 978LLU;
static int16_t x138 = INT16_MAX;
int8_t x142 = INT8_MAX;
volatile uint64_t x147 = UINT64_MAX;
int64_t t34 = -2675558983454305LL;
volatile uint8_t x172 = 3U;
static int64_t x174 = -1LL;
static int8_t x177 = 0;
static uint8_t x181 = UINT8_MAX;
int64_t x184 = INT64_MIN;
volatile uint64_t x187 = 2LLU;
int64_t x198 = INT64_MIN;
uint8_t x209 = UINT8_MAX;
uint16_t x212 = 0U;
static int64_t x217 = -55558025395223LL;
int32_t x223 = 2;
static int16_t x224 = INT16_MIN;
static volatile uint32_t t47 = 6U;
volatile uint64_t t49 = 8638801LLU;
volatile int64_t t53 = -8509053094105392LL;
uint16_t x258 = 8799U;
uint64_t t55 = 28424072927224423LLU;
int8_t x262 = INT8_MAX;
static volatile int64_t t56 = 4269476583401071863LL;
volatile int8_t x266 = INT8_MAX;
volatile int32_t t58 = 41034;
static int32_t t59 = 12191020;
volatile int16_t x289 = INT16_MIN;
int32_t t61 = -317832718;
volatile int16_t x293 = INT16_MAX;
static int8_t x294 = 21;
volatile int32_t x296 = 2444;
uint64_t x298 = 6714LLU;
int32_t x302 = -1;
uint64_t x304 = 9226903156553135LLU;
int8_t x307 = -1;
volatile int32_t t65 = -92801941;
static uint16_t x312 = 1369U;
int64_t x331 = -89LL;
volatile int32_t x332 = INT32_MIN;
volatile int64_t t69 = -362LL;
static volatile int64_t t70 = 43816559LL;
uint64_t t71 = 8582519956856212LLU;
int64_t x357 = 13173LL;
volatile int32_t x363 = 1;
volatile uint64_t t75 = 42328009027LLU;
int64_t t76 = -101810047618592519LL;
int8_t x377 = INT8_MIN;
int32_t x383 = INT32_MIN;
static int64_t x388 = -1LL;
static volatile int64_t t81 = -8382390106LL;
volatile int8_t x391 = INT8_MIN;
uint32_t x393 = 23359U;
uint64_t x399 = 38877LLU;
uint16_t x402 = 4177U;
volatile int32_t t85 = -3;
volatile uint64_t t87 = 0LLU;
volatile int16_t x429 = INT16_MIN;
int32_t x430 = INT32_MIN;
int8_t x435 = -3;
int64_t t91 = -173472389589550934LL;
volatile int64_t x442 = -4868435396938581LL;
int8_t x450 = INT8_MIN;
static int64_t x452 = INT64_MIN;
uint8_t x459 = UINT8_MAX;
static volatile uint32_t t97 = 14U;
volatile int64_t t98 = -17497LL;
int64_t x465 = INT64_MAX;
int64_t x466 = 1LL;
static int64_t t99 = -47039255099539997LL;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	static volatile int64_t x2 = INT64_MIN;
	volatile uint32_t x3 = 7629530U;
	int32_t x4 = 6446915;
	int64_t t0 = -36233LL;

	t0 = (x1-(x2^(x3+x4)));

	if (t0 != 9223372036840666595LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 539137162795LL;
	int64_t x7 = INT64_MIN;
	int32_t x8 = INT32_MAX;
	volatile int64_t t1 = 28097305717LL;

	t1 = (x5-(x6^(x7+x8)));

	if (t1 != 9223371495807663915LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -135LL;
	volatile uint8_t x11 = 2U;
	uint32_t x12 = 1580110456U;

	t2 = (x9-(x10^(x11+x12)));

	if (t2 != -9223372035274665484LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = INT64_MIN;
	volatile uint32_t x16 = 6722U;
	int64_t t3 = 837963867837012LL;

	t3 = (x13-(x14^(x15+x16)));

	if (t3 != 9223372036854769148LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -745;
	static int64_t x18 = INT64_MIN;
	static uint8_t x19 = 4U;
	int8_t x20 = -1;
	static int64_t t4 = 258309LL;

	t4 = (x17-(x18^(x19+x20)));

	if (t4 != 9223372036854775060LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 2;
	int16_t x24 = 1;
	int64_t t5 = -59606775326785LL;

	t5 = (x21-(x22^(x23+x24)));

	if (t5 != 2384589004378498LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 2U;
	volatile int64_t x26 = -174278824LL;
	uint32_t x27 = 61347274U;
	int16_t x28 = 911;
	volatile int64_t t6 = 69278927LL;

	t6 = (x25-(x26^(x27+x28)));

	if (t6 != 164319745LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 59U;
	static volatile uint32_t x30 = 9888597U;
	uint64_t x31 = 4986008LLU;
	int64_t x32 = INT64_MIN;

	t7 = (x29-(x30^(x31+x32)));

	if (t7 != 9223372036840425582LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int8_t x34 = INT8_MAX;
	int8_t x35 = INT8_MIN;
	static int64_t x36 = INT64_MAX;
	volatile int64_t t8 = -62874LL;

	t8 = (x33-(x34^(x35+x36)));

	if (t8 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = INT32_MIN;
	static uint16_t x46 = 244U;
	uint64_t x47 = 2224LLU;
	int8_t x48 = INT8_MIN;
	volatile uint64_t t9 = 11484345346001LLU;

	t9 = (x45-(x46^(x47+x48)));

	if (t9 != 18446744071562065724LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x49 = 9817U;
	static uint16_t x50 = 1U;
	volatile uint32_t t10 = 4151527U;

	t10 = (x49-(x50^(x51+x52)));

	if (t10 != 4294911579U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = UINT32_MAX;
	volatile int64_t x54 = 29040663533687211LL;
	int64_t x55 = -244LL;
	static volatile uint32_t x56 = UINT32_MAX;

	t11 = (x53-(x54^(x55+x56)));

	if (t11 != -29040660246458017LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	int8_t x59 = -1;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t12 = -267386506;

	t12 = (x57-(x58^(x59+x60)));

	if (t12 != -98049) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = -1;
	static int64_t x67 = 36966286746LL;
	int32_t x68 = INT32_MIN;
	volatile int64_t t13 = 28833461388LL;

	t13 = (x65-(x66^(x67+x68)));

	if (t13 != -9223372002035972710LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x69 = UINT8_MAX;
	uint8_t x70 = 1U;
	int32_t x71 = -2669;
	uint8_t x72 = 2U;
	volatile int32_t t14 = 859263;

	t14 = (x69-(x70^(x71+x72)));

	if (t14 != 2923) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x73 = 20618;
	int8_t x75 = -1;
	int64_t t15 = 195040305948675644LL;

	t15 = (x73-(x74^(x75+x76)));

	if (t15 != -9223372036854755188LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = 11;
	uint8_t x78 = 3U;
	static volatile int64_t x79 = 6459LL;
	uint64_t x80 = UINT64_MAX;
	uint64_t t16 = 33464076081LLU;

	t16 = (x77-(x78^(x79+x80)));

	if (t16 != 18446744073709545170LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MAX;
	int16_t x83 = 0;
	int32_t x84 = -456;
	volatile uint64_t t17 = 9LLU;

	t17 = (x81-(x82^(x83+x84)));

	if (t17 != 1093681321058LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -14;
	static int16_t x88 = -6;

	t18 = (x85-(x86^(x87+x88)));

	if (t18 != -20) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = UINT32_MAX;
	static int16_t x91 = 4;
	int16_t x92 = INT16_MIN;
	volatile uint32_t t19 = 2U;

	t19 = (x89-(x90^(x91+x92)));

	if (t19 != 4067181152U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MIN;
	uint16_t x95 = 1U;
	static volatile int8_t x96 = INT8_MIN;
	int32_t t20 = 78523;

	t20 = (x93-(x94^(x95+x96)));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x98 = 221274555721LL;
	int8_t x99 = INT8_MAX;
	static int64_t x100 = -936369545220307LL;

	t21 = (x97-(x98^(x99+x100)));

	if (t21 != 936423178032538LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x106 = UINT8_MAX;
	int32_t x107 = 14349221;

	t22 = (x105-(x106^(x107+x108)));

	if (t22 != 18446744073695202473LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x117 = 1U;
	volatile int8_t x118 = 1;
	int32_t x119 = INT32_MIN;

	t23 = (x117-(x118^(x119+x120)));

	if (t23 != 2147483395) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x121 = 5545837LLU;
	uint64_t x122 = 1843071898451499LLU;
	uint64_t x123 = 185454LLU;
	static int16_t x124 = INT16_MAX;

	t24 = (x121-(x122^(x123+x124)));

	if (t24 != 18444901001816601895LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x125 = INT8_MIN;
	uint32_t x126 = 26696U;
	uint16_t x127 = UINT16_MAX;
	uint32_t x128 = 6269U;
	uint32_t t25 = 711U;

	t25 = (x125-(x126^(x127+x128)));

	if (t25 != 4294872908U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = INT32_MAX;
	int32_t x130 = INT32_MIN;
	int8_t x132 = -55;

	t26 = (x129-(x130^(x131+x132)));

	if (t26 != 32822) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x133 = 19U;
	volatile uint64_t x135 = UINT64_MAX;
	int32_t x136 = -1043188;

	t27 = (x133-(x134^(x135+x136)));

	if (t27 != 1043145LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x137 = INT32_MIN;
	int64_t x139 = 1LL;
	int32_t x140 = 1;
	volatile int64_t t28 = 25978617176458298LL;

	t28 = (x137-(x138^(x139+x140)));

	if (t28 != -2147516413LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x141 = INT8_MAX;
	int16_t x143 = INT16_MIN;
	static int16_t x144 = 9690;
	volatile int32_t t29 = -124313062;

	t29 = (x141-(x142^(x143+x144)));

	if (t29 != 23258) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = -1LL;
	int16_t x146 = INT16_MIN;
	static int16_t x148 = INT16_MIN;
	uint64_t t30 = 561324410567306095LLU;

	t30 = (x145-(x146^(x147+x148)));

	if (t30 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x149 = UINT16_MAX;
	int16_t x150 = -1;
	uint8_t x151 = UINT8_MAX;
	static uint8_t x152 = UINT8_MAX;
	static volatile int32_t t31 = -4544;

	t31 = (x149-(x150^(x151+x152)));

	if (t31 != 66046) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = INT16_MAX;
	static volatile int32_t x154 = -1;
	int16_t x155 = 384;
	int64_t x156 = INT64_MIN;
	int64_t t32 = 121643785369368LL;

	t32 = (x153-(x154^(x155+x156)));

	if (t32 != -9223372036854742656LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = -1;
	volatile uint64_t x158 = 9619LLU;
	int32_t x159 = -28369111;
	uint16_t x160 = 1U;
	volatile uint64_t t33 = 928726613731LLU;

	t33 = (x157-(x158^(x159+x160)));

	if (t33 != 28362054LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = 290170;
	int32_t x162 = INT32_MIN;
	int64_t x163 = 2751377860793906LL;
	static uint8_t x164 = UINT8_MAX;

	t34 = (x161-(x162^(x163+x164)));

	if (t34 != 2751379336287817LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = 685976414048031637LLU;
	int64_t x166 = INT64_MIN;
	uint16_t x167 = 438U;
	static int16_t x168 = INT16_MIN;
	volatile uint64_t t35 = 12175043LLU;

	t35 = (x165-(x166^(x167+x168)));

	if (t35 != 9909348450902839775LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x169 = 1638U;
	int8_t x170 = -1;
	uint32_t x171 = 1492358096U;
	volatile uint32_t t36 = 2934145U;

	t36 = (x169-(x170^(x171+x172)));

	if (t36 != 1492359738U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x173 = -1508899415LL;
	static int8_t x175 = 22;
	int64_t x176 = -1LL;
	volatile int64_t t37 = 1805933571125183LL;

	t37 = (x173-(x174^(x175+x176)));

	if (t37 != -1508899393LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x178 = INT64_MIN;
	volatile int8_t x179 = INT8_MIN;
	uint64_t x180 = 7025096068640144029LLU;
	uint64_t t38 = 2LLU;

	t38 = (x177-(x178^(x179+x180)));

	if (t38 != 2198275968214631907LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x182 = 62LLU;
	static int64_t x183 = INT64_MAX;
	uint64_t t39 = 1833641LLU;

	t39 = (x181-(x182^(x183+x184)));

	if (t39 != 318LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x185 = UINT64_MAX;
	int16_t x186 = INT16_MIN;
	volatile int8_t x188 = INT8_MIN;
	static volatile uint64_t t40 = 62458LLU;

	t40 = (x185-(x186^(x187+x188)));

	if (t40 != 18446744073709518973LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = -2942971769108LL;
	uint16_t x190 = 281U;
	int8_t x191 = INT8_MAX;
	volatile int32_t x192 = INT32_MIN;
	static volatile int64_t t41 = 12347313762LL;

	t41 = (x189-(x190^(x191+x192)));

	if (t41 != -2940824285818LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x197 = 21U;
	uint32_t x199 = 126652U;
	uint64_t x200 = 340990LLU;
	uint64_t t42 = 16574956890527031LLU;

	t42 = (x197-(x198^(x199+x200)));

	if (t42 != 9223372036854308187LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = INT16_MIN;
	uint32_t x202 = 59587U;
	uint8_t x203 = 45U;
	uint8_t x204 = 1U;
	static uint32_t t43 = 24417899U;

	t43 = (x201-(x202^(x203+x204)));

	if (t43 != 4294874899U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x205 = 16213949U;
	uint32_t x206 = UINT32_MAX;
	uint16_t x207 = 79U;
	int16_t x208 = INT16_MIN;
	static volatile uint32_t t44 = 5215699U;

	t44 = (x205-(x206^(x207+x208)));

	if (t44 != 16181261U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x210 = -1887;
	volatile uint8_t x211 = UINT8_MAX;
	volatile int32_t t45 = 121956;

	t45 = (x209-(x210^(x211+x212)));

	if (t45 != 2209) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x218 = 1;
	int64_t x219 = -563121379LL;
	int16_t x220 = INT16_MAX;
	int64_t t46 = 266190223082133096LL;

	t46 = (x217-(x218^(x219+x220)));

	if (t46 != -55557462306612LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x221 = -8;
	uint32_t x222 = 61519U;

	t47 = (x221-(x222^(x223+x224)));

	if (t47 != 36779U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x225 = 370165569U;
	volatile int32_t x226 = INT32_MAX;
	static volatile uint64_t x227 = UINT64_MAX;
	int32_t x228 = 1;
	uint64_t t48 = 14446616LLU;

	t48 = (x225-(x226^(x227+x228)));

	if (t48 != 18446744071932233538LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = INT64_MAX;
	uint64_t x230 = UINT64_MAX;
	static volatile uint16_t x231 = UINT16_MAX;
	uint32_t x232 = 14U;

	t49 = (x229-(x230^(x231+x232)));

	if (t49 != 9223372036854841357LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = INT8_MIN;
	uint64_t x234 = 3548LLU;
	uint64_t x235 = 1596111636637LLU;
	int32_t x236 = -1031262733;
	uint64_t t50 = 23201618463139LLU;

	t50 = (x233-(x234^(x235+x236)));

	if (t50 != 18446742478629176372LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x237 = 428;
	uint64_t x238 = 50054811738LLU;
	uint32_t x239 = 83875694U;
	uint64_t x240 = UINT64_MAX;
	uint64_t t51 = 580LLU;

	t51 = (x237-(x238^(x239+x240)));

	if (t51 != 18446744023721835125LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = INT64_MIN;
	uint16_t x242 = 14U;
	int32_t x243 = INT32_MAX;
	int32_t x244 = INT32_MIN;
	int64_t t52 = -8LL;

	t52 = (x241-(x242^(x243+x244)));

	if (t52 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x245 = INT64_MIN;
	int32_t x246 = INT32_MIN;
	int32_t x247 = -1;
	uint16_t x248 = UINT16_MAX;

	t53 = (x245-(x246^(x247+x248)));

	if (t53 != -9223372034707357694LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = -1;
	static uint32_t x250 = 58U;
	int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MIN;
	volatile uint32_t t54 = 446838369U;

	t54 = (x249-(x250^(x251+x252)));

	if (t54 != 65477U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x257 = 31289LLU;
	int8_t x259 = -1;
	volatile int32_t x260 = 1537449;

	t55 = (x257-(x258^(x259+x260)));

	if (t55 != 18446744073708053058LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x261 = INT64_MIN;
	int32_t x263 = -2;
	int64_t x264 = -1LL;

	t56 = (x261-(x262^(x263+x264)));

	if (t56 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = -1;
	int8_t x267 = INT8_MIN;
	volatile int32_t x268 = -890;
	int32_t t57 = -1;

	t57 = (x265-(x266^(x267+x268)));

	if (t57 != 902) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x269 = UINT16_MAX;
	uint16_t x270 = 86U;
	uint8_t x271 = UINT8_MAX;
	int16_t x272 = INT16_MAX;

	t58 = (x269-(x270^(x271+x272)));

	if (t58 != 32599) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = -545;
	int8_t x274 = -1;
	int8_t x275 = INT8_MIN;
	uint16_t x276 = 1U;

	t59 = (x273-(x274^(x275+x276)));

	if (t59 != -671) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x277 = INT32_MIN;
	uint64_t x278 = 53685992LLU;
	int64_t x279 = -1LL;
	volatile uint64_t x280 = 355329058LLU;
	volatile uint64_t t60 = 7101538749244435362LLU;

	t60 = (x277-(x278^(x279+x280)));

	if (t60 != 18446744071190951223LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x290 = -1;
	volatile int16_t x291 = 0;
	static int8_t x292 = 2;

	t61 = (x289-(x290^(x291+x292)));

	if (t61 != -32765) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x295 = 25317U;
	uint32_t t62 = 56U;

	t62 = (x293-(x294^(x295+x296)));

	if (t62 != 5019U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x297 = 5264220741339721309LLU;
	int32_t x299 = INT32_MIN;
	int32_t x300 = 10183238;
	uint64_t t63 = 16143935LLU;

	t63 = (x297-(x298^(x299+x300)));

	if (t63 != 5264220743477016033LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x301 = INT8_MIN;
	int64_t x303 = INT64_MIN;
	uint64_t t64 = 36508147288882LLU;

	t64 = (x301-(x302^(x303+x304)));

	if (t64 != 9232598940011328816LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = INT8_MAX;
	uint8_t x306 = 119U;
	int32_t x308 = 7690;

	t65 = (x305-(x306^(x307+x308)));

	if (t65 != -7679) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x309 = 4U;
	int32_t x310 = 23584176;
	int16_t x311 = INT16_MIN;
	static uint32_t t66 = 214697190U;

	t66 = (x309-(x310^(x311+x312)));

	if (t66 != 23570203U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = INT16_MIN;
	static uint16_t x318 = 103U;
	int8_t x319 = INT8_MIN;
	int32_t x320 = -1;
	volatile int32_t t67 = 48145465;

	t67 = (x317-(x318^(x319+x320)));

	if (t67 != -32536) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x321 = 31;
	static int16_t x322 = INT16_MIN;
	static int32_t x323 = -1;
	int64_t x324 = -842777LL;
	volatile int64_t t68 = 16547697LL;

	t68 = (x321-(x322^(x323+x324)));

	if (t68 != -828359LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x329 = -1;
	int32_t x330 = INT32_MAX;

	t69 = (x329-(x330^(x331+x332)));

	if (t69 != 4294967207LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x337 = INT64_MIN;
	int64_t x338 = INT64_MAX;
	int32_t x339 = INT32_MIN;
	int64_t x340 = -1LL;

	t70 = (x337-(x338^(x339+x340)));

	if (t70 != -2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x345 = UINT8_MAX;
	int16_t x346 = INT16_MIN;
	static uint64_t x347 = 1952LLU;
	int8_t x348 = -48;

	t71 = (x345-(x346^(x347+x348)));

	if (t71 != 31119LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x349 = 28U;
	int16_t x350 = INT16_MAX;
	uint8_t x351 = UINT8_MAX;
	static int8_t x352 = INT8_MIN;
	int32_t t72 = 11180821;

	t72 = (x349-(x350^(x351+x352)));

	if (t72 != -32612) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x353 = UINT16_MAX;
	int8_t x354 = INT8_MIN;
	volatile uint64_t x355 = 554401359040839438LLU;
	int64_t x356 = -9631448175LL;
	static uint64_t t73 = 74593189LLU;

	t73 = (x353-(x354^(x355+x356)));

	if (t73 != 554401349409456864LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x358 = -14;
	static int64_t x359 = 263320137617999748LL;
	volatile int64_t x360 = -1418122LL;
	volatile int64_t t74 = 609282286851717LL;

	t74 = (x357-(x358^(x359+x360)));

	if (t74 != 263320137616594797LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x361 = 0U;
	volatile uint64_t x362 = UINT64_MAX;
	int8_t x364 = INT8_MIN;

	t75 = (x361-(x362^(x363+x364)));

	if (t75 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x365 = -1LL;
	int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MIN;

	t76 = (x365-(x366^(x367+x368)));

	if (t76 != -32513LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x369 = INT8_MAX;
	int8_t x370 = -1;
	int8_t x371 = -1;
	static uint32_t x372 = UINT32_MAX;
	uint32_t t77 = 88U;

	t77 = (x369-(x370^(x371+x372)));

	if (t77 != 126U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x373 = -3780474273431776960LL;
	static volatile uint8_t x374 = 0U;
	int8_t x375 = 9;
	uint8_t x376 = 19U;
	static volatile int64_t t78 = 17451502756531770LL;

	t78 = (x373-(x374^(x375+x376)));

	if (t78 != -3780474273431776988LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x378 = UINT32_MAX;
	uint8_t x379 = 3U;
	int32_t x380 = INT32_MIN;
	volatile uint32_t t79 = 59U;

	t79 = (x377-(x378^(x379+x380)));

	if (t79 != 2147483524U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x381 = 61;
	int64_t x382 = INT64_MIN;
	volatile uint64_t x384 = UINT64_MAX;
	static volatile uint64_t t80 = 962205124908532125LLU;

	t80 = (x381-(x382^(x383+x384)));

	if (t80 != 9223372039002259518LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x385 = INT16_MAX;
	static int64_t x386 = 39416548LL;
	static uint16_t x387 = 740U;

	t81 = (x385-(x386^(x387+x388)));

	if (t81 != -39383048LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x389 = 304;
	volatile int16_t x390 = INT16_MIN;
	volatile uint8_t x392 = 5U;
	static int32_t t82 = -10524413;

	t82 = (x389-(x390^(x391+x392)));

	if (t82 != -32341) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MIN;
	static uint32_t t83 = 249U;

	t83 = (x393-(x394^(x395+x396)));

	if (t83 != 4294957760U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x397 = INT32_MAX;
	uint32_t x398 = 215U;
	static int32_t x400 = INT32_MIN;
	static volatile uint64_t t84 = 15436034764245350LLU;

	t84 = (x397-(x398^(x399+x400)));

	if (t84 != 4294928629LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x401 = 0;
	int8_t x403 = -1;
	int8_t x404 = INT8_MIN;

	t85 = (x401-(x402^(x403+x404)));

	if (t85 != 4306) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x409 = UINT64_MAX;
	static int8_t x410 = INT8_MIN;
	int32_t x411 = -1;
	int8_t x412 = -1;
	uint64_t t86 = 581520LLU;

	t86 = (x409-(x410^(x411+x412)));

	if (t86 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x413 = 2U;
	int16_t x414 = 0;
	uint64_t x415 = 25130148038334220LLU;
	int16_t x416 = INT16_MIN;

	t87 = (x413-(x414^(x415+x416)));

	if (t87 != 18421613925671250166LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x421 = INT16_MIN;
	static int32_t x422 = INT32_MIN;
	uint16_t x423 = 3U;
	int16_t x424 = 2272;
	volatile int32_t t88 = 206566;

	t88 = (x421-(x422^(x423+x424)));

	if (t88 != 2147448605) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x425 = -67;
	static uint8_t x426 = 24U;
	uint64_t x427 = 11574LLU;
	static volatile int32_t x428 = -1;
	volatile uint64_t t89 = 4315946LLU;

	t89 = (x425-(x426^(x427+x428)));

	if (t89 != 18446744073709539984LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x431 = UINT64_MAX;
	int8_t x432 = 1;
	uint64_t t90 = 785467136LLU;

	t90 = (x429-(x430^(x431+x432)));

	if (t90 != 2147450880LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x433 = -1LL;
	uint16_t x434 = UINT16_MAX;
	int8_t x436 = 0;

	t91 = (x433-(x434^(x435+x436)));

	if (t91 != 65533LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = 2LL;
	int32_t x438 = INT32_MIN;
	volatile uint16_t x439 = UINT16_MAX;
	int16_t x440 = 0;
	static int64_t t92 = 168689604LL;

	t92 = (x437-(x438^(x439+x440)));

	if (t92 != 2147418115LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x441 = 12U;
	int8_t x443 = -24;
	uint32_t x444 = 7U;
	volatile int64_t t93 = -15945795LL;

	t93 = (x441-(x442^(x443+x444)));

	if (t93 != 4868431556752584LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x445 = INT32_MIN;
	int16_t x446 = INT16_MAX;
	uint8_t x447 = 25U;
	volatile int16_t x448 = -28;
	volatile int32_t t94 = -777342510;

	t94 = (x445-(x446^(x447+x448)));

	if (t94 != -2147450882) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x449 = UINT16_MAX;
	volatile uint16_t x451 = 20U;
	int64_t t95 = 1106601168356LL;

	t95 = (x449-(x450^(x451+x452)));

	if (t95 != -9223372036854710165LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x453 = 9U;
	uint16_t x454 = 29821U;
	int32_t x455 = -44031;
	int16_t x456 = INT16_MIN;
	volatile int32_t t96 = 13972;

	t96 = (x453-(x454^(x455+x456)));

	if (t96 != 89997) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x457 = 235U;
	int32_t x458 = INT32_MIN;
	static uint32_t x460 = 235016U;

	t97 = (x457-(x458^(x459+x460)));

	if (t97 != 2147248612U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x461 = 106LL;
	static volatile int64_t x462 = INT64_MIN;
	uint32_t x463 = 49199U;
	int32_t x464 = 47738;

	t98 = (x461-(x462^(x463+x464)));

	if (t98 != 9223372036854678977LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x467 = UINT8_MAX;
	volatile int64_t x468 = 201040633178LL;

	t99 = (x465-(x466^(x467+x468)));

	if (t99 != 9223371835814142375LL) { NG(); } else { ; }
	
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

