#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x6 = 13U;
int16_t x8 = INT16_MAX;
int16_t x10 = 57;
static int32_t x11 = INT32_MIN;
int8_t x17 = INT8_MIN;
static int64_t x23 = 1732157361912505699LL;
int16_t x29 = INT16_MAX;
volatile int32_t t7 = 24555641;
uint64_t t10 = 683113LLU;
static volatile int16_t x58 = INT16_MIN;
volatile int32_t x60 = -1;
int64_t t14 = -127339444LL;
int16_t x67 = INT16_MIN;
volatile int16_t x69 = INT16_MAX;
static int32_t x74 = INT32_MAX;
uint64_t x80 = 256407733LLU;
static volatile int64_t t19 = -1048574LL;
int32_t x81 = INT32_MIN;
static volatile int32_t t20 = INT32_MIN;
static int32_t x88 = 1;
int8_t x92 = INT8_MIN;
uint64_t x93 = 85758LLU;
uint64_t x94 = UINT64_MAX;
int32_t x98 = 1;
int16_t x100 = 0;
int16_t x102 = INT16_MAX;
int8_t x110 = INT8_MIN;
int32_t x111 = -318942;
int32_t x114 = 15177;
int64_t x117 = INT64_MIN;
volatile int32_t x120 = -1;
uint64_t x123 = 3074LLU;
int32_t x129 = INT32_MIN;
volatile int64_t x130 = 1121632047365065528LL;
int64_t x137 = INT64_MAX;
int64_t t35 = INT64_MIN;
volatile uint8_t x145 = 0U;
volatile int32_t t36 = -130722;
static int32_t x151 = INT32_MIN;
int16_t x153 = INT16_MAX;
static int32_t x156 = INT32_MIN;
int8_t x157 = 3;
int32_t t39 = -2903109;
uint8_t x171 = 3U;
volatile int64_t x176 = INT64_MIN;
uint64_t t43 = 1093062152758LLU;
static int32_t t44 = -258;
volatile int32_t t45 = 35164431;
volatile int32_t t46 = -2657;
uint8_t x194 = 55U;
int16_t x196 = -1;
static volatile int32_t t47 = INT32_MIN;
uint64_t x199 = 1LLU;
int64_t x200 = 5997LL;
static uint32_t x202 = 1U;
volatile uint64_t x209 = UINT64_MAX;
static volatile uint8_t x212 = 3U;
volatile int64_t t52 = 27077LL;
volatile int64_t t53 = 51414LL;
static int16_t x233 = -102;
int8_t x238 = 20;
uint64_t t58 = 2612863LLU;
volatile int32_t x248 = INT32_MIN;
static volatile int8_t x253 = 3;
int64_t x256 = INT64_MIN;
uint64_t t61 = 313LLU;
static int8_t x258 = INT8_MAX;
static int16_t x262 = INT16_MIN;
int64_t x263 = INT64_MAX;
int16_t x265 = INT16_MAX;
int64_t x274 = INT64_MIN;
int16_t x275 = -8432;
int32_t t67 = 148768;
uint64_t x281 = UINT64_MAX;
volatile int32_t x286 = -1;
int16_t x288 = 3;
uint32_t x293 = 11993383U;
uint16_t x298 = 465U;
volatile int8_t x300 = -56;
volatile int16_t x307 = 1;
volatile int16_t x309 = 103;
volatile int32_t t75 = -5093;
int64_t x313 = -2839141181286LL;
static uint32_t x320 = 17016579U;
static int32_t t78 = -5747;
int16_t x330 = INT16_MAX;
int64_t x338 = -4096LL;
int64_t x343 = INT64_MIN;
volatile int64_t x354 = -379595618691740LL;
int32_t x361 = INT32_MIN;
int32_t x366 = INT32_MIN;
int16_t x368 = -28;
static volatile int32_t t90 = -102;
uint8_t x375 = 2U;
static volatile int64_t x379 = INT64_MAX;
uint16_t x384 = 544U;
int8_t x385 = INT8_MAX;
static int8_t x386 = INT8_MIN;
int16_t x388 = -1;
int32_t t95 = 55525;
static uint64_t x395 = 828370667378LLU;
static int32_t t96 = 720;
static volatile int64_t x397 = INT64_MIN;
static int32_t x409 = INT32_MIN;
volatile int64_t t99 = -4512319988778654140LL;


void f0(void) {
	uint8_t x1 = 6U;
	int8_t x2 = INT8_MAX;
	volatile uint16_t x3 = UINT16_MAX;
	static int64_t x4 = -819081510104LL;
	volatile int32_t t0 = -258581397;

	t0 = (x1+(x2&(x3<=x4)));

	if (t0 != 6) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	static uint8_t x7 = 2U;
	int32_t t1 = -28;

	t1 = (x5+(x6&(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = 0;
	int8_t x12 = 24;
	volatile int32_t t2 = -151089;

	t2 = (x9+(x10&(x11<=x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 66LLU;
	volatile int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MIN;
	volatile uint16_t x16 = 15922U;
	static volatile uint64_t t3 = 1687881LLU;

	t3 = (x13+(x14&(x15<=x16)));

	if (t3 != 66LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = 29114LL;
	static uint16_t x19 = UINT16_MAX;
	static uint32_t x20 = UINT32_MAX;
	int64_t t4 = 560298757LL;

	t4 = (x17+(x18&(x19<=x20)));

	if (t4 != -128LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int8_t x22 = INT8_MIN;
	uint8_t x24 = 27U;
	int32_t t5 = 313402;

	t5 = (x21+(x22&(x23<=x24)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int8_t x26 = INT8_MIN;
	static uint32_t x27 = 6741U;
	static int8_t x28 = INT8_MAX;
	static volatile uint64_t t6 = UINT64_MAX;

	t6 = (x25+(x26&(x27<=x28)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = UINT64_MAX;

	t7 = (x29+(x30&(x31<=x32)));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 203366554602808LLU;
	volatile int64_t x34 = INT64_MIN;
	volatile uint32_t x35 = UINT32_MAX;
	volatile uint32_t x36 = 43191971U;
	volatile uint64_t t8 = 0LLU;

	t8 = (x33+(x34&(x35<=x36)));

	if (t8 != 203366554602808LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint32_t x38 = 13716091U;
	int8_t x39 = INT8_MAX;
	volatile int8_t x40 = 0;
	static volatile uint32_t t9 = 13620U;

	t9 = (x37+(x38&(x39<=x40)));

	if (t9 != 4294934528U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	static uint64_t x42 = 25234900LLU;
	uint32_t x43 = 254902634U;
	int32_t x44 = INT32_MIN;

	t10 = (x41+(x42&(x43<=x44)));

	if (t10 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	volatile int32_t x46 = INT32_MIN;
	int32_t x47 = 380644;
	int64_t x48 = INT64_MIN;
	int32_t t11 = INT32_MIN;

	t11 = (x45+(x46&(x47<=x48)));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = -20;
	int64_t x50 = INT64_MIN;
	int32_t x51 = INT32_MAX;
	int8_t x52 = -1;
	int64_t t12 = -495LL;

	t12 = (x49+(x50&(x51<=x52)));

	if (t12 != -20LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 42930LLU;
	volatile int16_t x54 = INT16_MIN;
	volatile uint16_t x55 = UINT16_MAX;
	static uint16_t x56 = 1U;
	uint64_t t13 = 10LLU;

	t13 = (x53+(x54&(x55<=x56)));

	if (t13 != 42930LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 39666051701168LL;
	static volatile uint64_t x59 = 8533358LLU;

	t14 = (x57+(x58&(x59<=x60)));

	if (t14 != 39666051701168LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	int32_t x62 = -2340;
	uint32_t x63 = 3711544U;
	volatile int32_t x64 = -3;
	int64_t t15 = INT64_MIN;

	t15 = (x61+(x62&(x63<=x64)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	uint16_t x66 = 491U;
	int32_t x68 = -1;
	volatile int32_t t16 = -1;

	t16 = (x65+(x66&(x67<=x68)));

	if (t16 != 256) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x70 = 17105309965LL;
	int32_t x71 = -1;
	static int64_t x72 = 41670953426LL;
	volatile int64_t t17 = -235773984200LL;

	t17 = (x69+(x70&(x71<=x72)));

	if (t17 != 32768LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 23U;
	uint32_t x75 = 3898640U;
	uint8_t x76 = 11U;
	static volatile uint32_t t18 = 367768U;

	t18 = (x73+(x74&(x75<=x76)));

	if (t18 != 23U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint32_t x78 = UINT32_MAX;
	uint8_t x79 = UINT8_MAX;

	t19 = (x77+(x78&(x79<=x80)));

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = 106830;
	uint8_t x83 = 12U;
	int32_t x84 = INT32_MAX;

	t20 = (x81+(x82&(x83<=x84)));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -1;
	int64_t x86 = -15946207272636LL;
	static int16_t x87 = INT16_MIN;
	int64_t t21 = 4LL;

	t21 = (x85+(x86&(x87<=x88)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 4U;
	int16_t x90 = INT16_MAX;
	volatile uint8_t x91 = UINT8_MAX;
	static int32_t t22 = -23137;

	t22 = (x89+(x90&(x91<=x92)));

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x95 = INT8_MAX;
	volatile int16_t x96 = -1;
	static volatile uint64_t t23 = 1735587LLU;

	t23 = (x93+(x94&(x95<=x96)));

	if (t23 != 85758LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	volatile int64_t t24 = -1502177903325832971LL;

	t24 = (x97+(x98&(x99<=x100)));

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MIN;
	static uint8_t x103 = UINT8_MAX;
	int16_t x104 = INT16_MAX;
	int32_t t25 = 1;

	t25 = (x101+(x102&(x103<=x104)));

	if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	uint32_t x106 = UINT32_MAX;
	uint16_t x107 = UINT16_MAX;
	int16_t x108 = -1;
	static uint32_t t26 = UINT32_MAX;

	t26 = (x105+(x106&(x107<=x108)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -1;
	uint32_t x112 = UINT32_MAX;
	int32_t t27 = -3604357;

	t27 = (x109+(x110&(x111<=x112)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = -1;
	volatile uint32_t x115 = 21408377U;
	uint16_t x116 = 6U;
	int32_t t28 = 3;

	t28 = (x113+(x114&(x115<=x116)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x118 = 109U;
	int8_t x119 = 1;
	static int64_t t29 = INT64_MIN;

	t29 = (x117+(x118&(x119<=x120)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 14644494008681LLU;
	int32_t x122 = -799113942;
	static int32_t x124 = -1947;
	volatile uint64_t t30 = 1813579147925LLU;

	t30 = (x121+(x122&(x123<=x124)));

	if (t30 != 14644494008681LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	static volatile int16_t x126 = INT16_MAX;
	uint32_t x127 = UINT32_MAX;
	uint32_t x128 = 66899570U;
	int32_t t31 = INT32_MIN;

	t31 = (x125+(x126&(x127<=x128)));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x131 = INT16_MIN;
	static int8_t x132 = 1;
	int64_t t32 = -15013642738LL;

	t32 = (x129+(x130&(x131<=x132)));

	if (t32 != -2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	static int32_t x134 = INT32_MIN;
	static int8_t x135 = -1;
	int8_t x136 = -1;
	volatile int32_t t33 = 954;

	t33 = (x133+(x134&(x135<=x136)));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x138 = INT64_MAX;
	int32_t x139 = 33472089;
	volatile uint32_t x140 = 13930053U;
	static int64_t t34 = INT64_MAX;

	t34 = (x137+(x138&(x139<=x140)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int16_t x142 = 22;
	int16_t x143 = INT16_MAX;
	int8_t x144 = INT8_MIN;

	t35 = (x141+(x142&(x143<=x144)));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = UINT8_MAX;
	uint32_t x147 = 2656566U;
	int16_t x148 = 59;

	t36 = (x145+(x146&(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = UINT32_MAX;
	int32_t x150 = -1;
	int32_t x152 = 13053;
	volatile uint32_t t37 = 648958595U;

	t37 = (x149+(x150&(x151<=x152)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x154 = -1;
	static uint8_t x155 = UINT8_MAX;
	int32_t t38 = -89;

	t38 = (x153+(x154&(x155<=x156)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x158 = -3080750;
	uint16_t x159 = 1U;
	int8_t x160 = -1;

	t39 = (x157+(x158&(x159<=x160)));

	if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x161 = 1894179LLU;
	uint32_t x162 = 13U;
	volatile int16_t x163 = INT16_MIN;
	int16_t x164 = INT16_MIN;
	volatile uint64_t t40 = 1604059802099480778LLU;

	t40 = (x161+(x162&(x163<=x164)));

	if (t40 != 1894180LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int64_t x166 = 0LL;
	int16_t x167 = INT16_MIN;
	int8_t x168 = INT8_MIN;
	int64_t t41 = -80480729532LL;

	t41 = (x165+(x166&(x167<=x168)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	static uint64_t x172 = 6843570614962LLU;
	volatile int32_t t42 = INT32_MIN;

	t42 = (x169+(x170&(x171<=x172)));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x173 = 3U;
	uint64_t x174 = UINT64_MAX;
	int32_t x175 = 184310;

	t43 = (x173+(x174&(x175<=x176)));

	if (t43 != 3LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	int32_t x178 = INT32_MAX;
	static volatile uint64_t x179 = UINT64_MAX;
	int8_t x180 = INT8_MIN;

	t44 = (x177+(x178&(x179<=x180)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 60U;
	int8_t x186 = -1;
	int8_t x187 = INT8_MIN;
	int8_t x188 = INT8_MAX;

	t45 = (x185+(x186&(x187<=x188)));

	if (t45 != 61) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 2294U;
	static int16_t x190 = -3522;
	int16_t x191 = 0;
	int32_t x192 = 560586453;

	t46 = (x189+(x190&(x191<=x192)));

	if (t46 != 2294) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x193 = INT32_MIN;
	uint16_t x195 = UINT16_MAX;

	t47 = (x193+(x194&(x195<=x196)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x197 = 98U;
	int64_t x198 = -1LL;
	int64_t t48 = 14417132685721LL;

	t48 = (x197+(x198&(x199<=x200)));

	if (t48 != 99LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = 448629LL;
	static uint8_t x203 = UINT8_MAX;
	uint64_t x204 = 7152260LLU;
	int64_t t49 = -2460652464438706759LL;

	t49 = (x201+(x202&(x203<=x204)));

	if (t49 != 448630LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = 5LL;
	volatile uint32_t x206 = 60171170U;
	static int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	volatile int64_t t50 = 7570LL;

	t50 = (x205+(x206&(x207<=x208)));

	if (t50 != 5LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x210 = INT64_MIN;
	int16_t x211 = -1;
	uint64_t t51 = UINT64_MAX;

	t51 = (x209+(x210&(x211<=x212)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = INT16_MIN;
	int64_t x218 = INT64_MAX;
	volatile uint16_t x219 = UINT16_MAX;
	volatile int64_t x220 = -1475556485LL;

	t52 = (x217+(x218&(x219<=x220)));

	if (t52 != -32768LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = -115;
	int64_t x222 = -5LL;
	int64_t x223 = 27LL;
	uint8_t x224 = 82U;

	t53 = (x221+(x222&(x223<=x224)));

	if (t53 != -114LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x225 = 1U;
	int64_t x226 = -3375965134LL;
	int16_t x227 = 3117;
	static uint8_t x228 = UINT8_MAX;
	static volatile int64_t t54 = 2827212831635LL;

	t54 = (x225+(x226&(x227<=x228)));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = 116084598LLU;
	int8_t x230 = INT8_MAX;
	int16_t x231 = INT16_MAX;
	uint32_t x232 = 7U;
	uint64_t t55 = 45984160673LLU;

	t55 = (x229+(x230&(x231<=x232)));

	if (t55 != 116084598LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x234 = 1LLU;
	int16_t x235 = INT16_MIN;
	int16_t x236 = 961;
	volatile uint64_t t56 = 208085653239188LLU;

	t56 = (x233+(x234&(x235<=x236)));

	if (t56 != 18446744073709551515LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = 13;
	int8_t x239 = -1;
	static uint64_t x240 = 58044271831022LLU;
	volatile int32_t t57 = 213030;

	t57 = (x237+(x238&(x239<=x240)));

	if (t57 != 13) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x241 = 2316660270LLU;
	int8_t x242 = INT8_MIN;
	int8_t x243 = 2;
	int8_t x244 = INT8_MIN;

	t58 = (x241+(x242&(x243<=x244)));

	if (t58 != 2316660270LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = 547U;
	int64_t x246 = INT64_MIN;
	uint16_t x247 = UINT16_MAX;
	int64_t t59 = -1166LL;

	t59 = (x245+(x246&(x247<=x248)));

	if (t59 != 547LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MAX;
	static uint16_t x250 = 562U;
	volatile int16_t x251 = INT16_MAX;
	volatile int16_t x252 = -1;
	int32_t t60 = INT32_MAX;

	t60 = (x249+(x250&(x251<=x252)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x254 = 52LLU;
	uint64_t x255 = 15282541LLU;

	t61 = (x253+(x254&(x255<=x256)));

	if (t61 != 3LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x257 = UINT16_MAX;
	static uint8_t x259 = 2U;
	uint8_t x260 = UINT8_MAX;
	int32_t t62 = 11;

	t62 = (x257+(x258&(x259<=x260)));

	if (t62 != 65536) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x261 = UINT8_MAX;
	uint8_t x264 = 26U;
	volatile int32_t t63 = 6423113;

	t63 = (x261+(x262&(x263<=x264)));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x266 = INT32_MIN;
	static int16_t x267 = INT16_MIN;
	static uint8_t x268 = 7U;
	volatile int32_t t64 = -121;

	t64 = (x265+(x266&(x267<=x268)));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = INT8_MAX;
	uint64_t x270 = 2LLU;
	uint32_t x271 = 0U;
	static int64_t x272 = INT64_MIN;
	static volatile uint64_t t65 = 565368389620728258LLU;

	t65 = (x269+(x270&(x271<=x272)));

	if (t65 != 127LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = UINT8_MAX;
	static int32_t x276 = INT32_MIN;
	int64_t t66 = -118116989LL;

	t66 = (x273+(x274&(x275<=x276)));

	if (t66 != 255LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x277 = INT16_MIN;
	volatile int8_t x278 = -23;
	volatile int32_t x279 = INT32_MIN;
	int8_t x280 = -5;

	t67 = (x277+(x278&(x279<=x280)));

	if (t67 != -32767) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x282 = 33U;
	static int32_t x283 = INT32_MIN;
	volatile int32_t x284 = INT32_MIN;
	volatile uint64_t t68 = 280LLU;

	t68 = (x281+(x282&(x283<=x284)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x285 = UINT64_MAX;
	int16_t x287 = -14481;
	uint64_t t69 = 11435826590126LLU;

	t69 = (x285+(x286&(x287<=x288)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	static int32_t x290 = INT32_MIN;
	volatile int64_t x291 = INT64_MIN;
	volatile int64_t x292 = -53631LL;
	static volatile int32_t t70 = 188;

	t70 = (x289+(x290&(x291<=x292)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x294 = UINT16_MAX;
	uint8_t x295 = 113U;
	static int8_t x296 = INT8_MAX;
	static volatile uint32_t t71 = 72677U;

	t71 = (x293+(x294&(x295<=x296)));

	if (t71 != 11993384U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = 0;
	static uint64_t x299 = UINT64_MAX;
	volatile int32_t t72 = 4185843;

	t72 = (x297+(x298&(x299<=x300)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x301 = -1;
	uint32_t x302 = 38416U;
	static int16_t x303 = INT16_MAX;
	static int16_t x304 = INT16_MAX;
	volatile uint32_t t73 = UINT32_MAX;

	t73 = (x301+(x302&(x303<=x304)));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x305 = -1;
	static int8_t x306 = -36;
	int16_t x308 = INT16_MIN;
	volatile int32_t t74 = 240341773;

	t74 = (x305+(x306&(x307<=x308)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x310 = 0U;
	static int16_t x311 = INT16_MAX;
	static int8_t x312 = -1;

	t75 = (x309+(x310&(x311<=x312)));

	if (t75 != 103) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x314 = 5LLU;
	volatile int8_t x315 = INT8_MIN;
	uint16_t x316 = 4U;
	volatile uint64_t t76 = 6675908852453LLU;

	t76 = (x313+(x314&(x315<=x316)));

	if (t76 != 18446741234568370331LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = INT16_MIN;
	int8_t x318 = INT8_MAX;
	int8_t x319 = -1;
	static volatile int32_t t77 = -4;

	t77 = (x317+(x318&(x319<=x320)));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = 268196;
	int32_t x322 = INT32_MAX;
	uint32_t x323 = UINT32_MAX;
	int16_t x324 = 4;

	t78 = (x321+(x322&(x323<=x324)));

	if (t78 != 268196) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = INT32_MAX;
	uint64_t x326 = UINT64_MAX;
	uint64_t x327 = 91799026046044647LLU;
	int32_t x328 = 831171459;
	uint64_t t79 = 10831614510LLU;

	t79 = (x325+(x326&(x327<=x328)));

	if (t79 != 2147483647LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MIN;
	uint8_t x331 = 17U;
	int64_t x332 = INT64_MIN;
	volatile int32_t t80 = INT32_MIN;

	t80 = (x329+(x330&(x331<=x332)));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MIN;
	static int16_t x334 = INT16_MIN;
	int32_t x335 = INT32_MAX;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t81 = -125257;

	t81 = (x333+(x334&(x335<=x336)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x337 = INT32_MIN;
	int64_t x339 = 2043240LL;
	int16_t x340 = INT16_MIN;
	volatile int64_t t82 = -446458760656946318LL;

	t82 = (x337+(x338&(x339<=x340)));

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x341 = UINT8_MAX;
	int16_t x342 = INT16_MIN;
	static uint64_t x344 = 33623372796214LLU;
	int32_t t83 = -1747933;

	t83 = (x341+(x342&(x343<=x344)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = -1;
	volatile int8_t x346 = INT8_MIN;
	int64_t x347 = INT64_MAX;
	volatile uint8_t x348 = 0U;
	volatile int32_t t84 = -103012;

	t84 = (x345+(x346&(x347<=x348)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x349 = 599339319235500997LLU;
	int16_t x350 = -2763;
	uint32_t x351 = 8U;
	static int64_t x352 = INT64_MIN;
	uint64_t t85 = 4353402051918379548LLU;

	t85 = (x349+(x350&(x351<=x352)));

	if (t85 != 599339319235500997LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = -1;
	volatile int64_t x355 = 982755649467LL;
	int8_t x356 = INT8_MAX;
	volatile int64_t t86 = 23827389433LL;

	t86 = (x353+(x354&(x355<=x356)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = INT64_MAX;
	uint64_t x358 = 63323008100135LLU;
	int64_t x359 = 11395046930LL;
	volatile uint8_t x360 = 18U;
	static volatile uint64_t t87 = 4640185496LLU;

	t87 = (x357+(x358&(x359<=x360)));

	if (t87 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x362 = -1LL;
	int8_t x363 = -1;
	int16_t x364 = -5;
	volatile int64_t t88 = -1LL;

	t88 = (x361+(x362&(x363<=x364)));

	if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x365 = 0U;
	int8_t x367 = 32;
	int32_t t89 = -491;

	t89 = (x365+(x366&(x367<=x368)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = -1;
	volatile uint16_t x370 = UINT16_MAX;
	int32_t x371 = -817;
	uint8_t x372 = 7U;

	t90 = (x369+(x370&(x371<=x372)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x373 = -3162;
	static int16_t x374 = INT16_MIN;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t91 = -186111625;

	t91 = (x373+(x374&(x375<=x376)));

	if (t91 != -3162) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = -928;
	volatile uint16_t x378 = UINT16_MAX;
	int64_t x380 = 30434954451474LL;
	int32_t t92 = -148;

	t92 = (x377+(x378&(x379<=x380)));

	if (t92 != -928) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x381 = UINT32_MAX;
	volatile int16_t x382 = INT16_MIN;
	int32_t x383 = -1;
	static uint32_t t93 = UINT32_MAX;

	t93 = (x381+(x382&(x383<=x384)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x387 = INT32_MIN;
	volatile int32_t t94 = 895;

	t94 = (x385+(x386&(x387<=x388)));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x389 = INT16_MIN;
	static int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MAX;
	uint32_t x392 = 11044322U;

	t95 = (x389+(x390&(x391<=x392)));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x393 = -47;
	volatile int16_t x394 = 98;
	volatile int16_t x396 = INT16_MAX;

	t96 = (x393+(x394&(x395<=x396)));

	if (t96 != -47) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x398 = 1732582064953300LL;
	int64_t x399 = INT64_MAX;
	uint16_t x400 = 45U;
	volatile int64_t t97 = INT64_MIN;

	t97 = (x397+(x398&(x399<=x400)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x405 = -1;
	int8_t x406 = 7;
	static int8_t x407 = -1;
	int32_t x408 = INT32_MAX;
	int32_t t98 = 0;

	t98 = (x405+(x406&(x407<=x408)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MAX;
	static volatile int64_t x412 = 3LL;

	t99 = (x409+(x410&(x411<=x412)));

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

