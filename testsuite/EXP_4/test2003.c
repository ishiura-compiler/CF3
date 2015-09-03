#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x4 = INT32_MIN;
uint64_t t2 = 18599LLU;
uint64_t t4 = 466345286610LLU;
volatile int8_t x24 = -1;
int16_t x26 = -1;
static volatile uint64_t t6 = 873448856262245970LLU;
static uint64_t x35 = 5681LLU;
volatile uint64_t t10 = 208577489121393637LLU;
int8_t x46 = -15;
volatile int8_t x48 = -1;
static volatile int8_t x50 = -1;
static uint64_t t12 = 163654349LLU;
static uint16_t x58 = 34U;
int32_t x67 = -1;
uint16_t x70 = 20756U;
volatile int16_t x72 = INT16_MAX;
int32_t x78 = -1;
int32_t x81 = -1;
volatile int64_t x83 = -230456678914121716LL;
static volatile uint64_t t20 = 62LLU;
int32_t x92 = 120177817;
int8_t x93 = -1;
int16_t x95 = INT16_MIN;
int64_t x100 = 130LL;
volatile int64_t x104 = INT64_MAX;
uint32_t x107 = 0U;
int32_t x109 = INT32_MAX;
int32_t x111 = -66458291;
volatile uint32_t t26 = 11867003U;
static int8_t x114 = INT8_MIN;
static volatile uint64_t t27 = 4020910LLU;
static int8_t x119 = INT8_MIN;
uint16_t x121 = 3U;
uint64_t x125 = UINT64_MAX;
static volatile int64_t x128 = INT64_MAX;
int16_t x131 = -1;
uint64_t x134 = UINT64_MAX;
static volatile uint64_t t33 = 59363869953686LLU;
volatile int64_t x142 = INT64_MIN;
static int8_t x151 = INT8_MAX;
int8_t x156 = INT8_MAX;
uint64_t x158 = UINT64_MAX;
uint64_t x174 = UINT64_MAX;
int64_t x175 = -1LL;
uint32_t x191 = 1U;
uint32_t t45 = 1301U;
volatile int32_t x194 = -1;
volatile int64_t t46 = -29068625298062161LL;
volatile int16_t x199 = INT16_MAX;
int32_t x203 = -1;
int64_t x221 = -457LL;
uint64_t x226 = 16LLU;
int32_t x227 = INT32_MIN;
uint32_t t55 = 48313019U;
int32_t x234 = 15187289;
int16_t x237 = INT16_MIN;
volatile int64_t t57 = -380927445332LL;
uint16_t x242 = 4754U;
volatile int64_t t58 = 205564LL;
int32_t x256 = 49;
int16_t x261 = INT16_MAX;
int32_t x267 = INT32_MIN;
int16_t x268 = 45;
int32_t x275 = INT32_MIN;
int16_t x279 = -165;
int32_t x280 = -1;
static volatile int32_t t66 = 91656796;
static int8_t x282 = INT8_MIN;
int64_t t69 = 1915055263056011524LL;
static volatile uint64_t t72 = 88109LLU;
uint64_t x325 = UINT64_MAX;
int32_t x331 = INT32_MIN;
volatile int32_t t77 = -143608680;
int8_t x334 = -56;
uint32_t x335 = UINT32_MAX;
int64_t x346 = INT64_MIN;
static int16_t x353 = INT16_MIN;
uint32_t t84 = 49050U;
uint8_t x365 = 83U;
int16_t x366 = 36;
uint64_t t87 = 414039326062251LLU;
uint8_t x394 = 2U;
volatile int8_t x395 = -2;
uint8_t x401 = 1U;
uint64_t x419 = 70825740357751LLU;
int32_t x423 = 93;
uint16_t x424 = 20U;


void f0(void) {
	int64_t x1 = INT64_MAX;
	static volatile int8_t x2 = INT8_MAX;
	volatile int8_t x3 = INT8_MIN;
	int64_t t0 = 118589735375382989LL;

	t0 = (x1+(x2|(x3|x4)));

	if (t0 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint64_t x6 = UINT64_MAX;
	uint16_t x7 = 135U;
	int32_t x8 = INT32_MAX;
	volatile uint64_t t1 = 8525922LLU;

	t1 = (x5+(x6|(x7|x8)));

	if (t1 != 65534LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int8_t x10 = 13;
	int16_t x11 = -1;
	static uint64_t x12 = 25LLU;

	t2 = (x9+(x10|(x11|x12)));

	if (t2 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 1870499243743229LLU;
	int16_t x14 = -55;
	static int32_t x15 = INT32_MIN;
	int16_t x16 = 28;
	volatile uint64_t t3 = 1829667018LLU;

	t3 = (x13+(x14|(x15|x16)));

	if (t3 != 1870499243743194LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	uint32_t x18 = UINT32_MAX;
	uint64_t x19 = UINT64_MAX;
	volatile uint64_t x20 = 6994465978341344LLU;

	t4 = (x17+(x18|(x19|x20)));

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = INT64_MAX;
	int16_t x23 = INT16_MIN;
	int64_t t5 = -320LL;

	t5 = (x21+(x22|(x23|x24)));

	if (t5 != -32769LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 5589LLU;
	uint64_t x27 = UINT64_MAX;
	volatile uint8_t x28 = 0U;

	t6 = (x25+(x26|(x27|x28)));

	if (t6 != 5588LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1436;
	uint64_t x30 = 277LLU;
	volatile int8_t x31 = INT8_MIN;
	int32_t x32 = INT32_MIN;
	volatile uint64_t t7 = 8116591645424740688LLU;

	t7 = (x29+(x30|(x31|x32)));

	if (t7 != 18446744073709550073LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	static uint64_t x34 = UINT64_MAX;
	static int8_t x36 = INT8_MAX;
	volatile uint64_t t8 = 7642865LLU;

	t8 = (x33+(x34|(x35|x36)));

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 120U;
	int8_t x38 = INT8_MIN;
	int16_t x39 = -1;
	volatile int32_t x40 = INT32_MAX;
	int32_t t9 = 977438;

	t9 = (x37+(x38|(x39|x40)));

	if (t9 != 119) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MAX;
	static volatile uint64_t x42 = 7615731LLU;
	int32_t x43 = INT32_MIN;
	volatile int32_t x44 = 99999080;

	t10 = (x41+(x42|(x43|x44)));

	if (t10 != 18446744071662108154LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = -1;
	int32_t x47 = -1;
	int32_t t11 = -968617423;

	t11 = (x45+(x46|(x47|x48)));

	if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 150366681013876403LLU;
	volatile int32_t x51 = INT32_MAX;
	int8_t x52 = INT8_MIN;

	t12 = (x49+(x50|(x51|x52)));

	if (t12 != 150366681013876402LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 13U;
	uint32_t x54 = 949797U;
	int8_t x55 = INT8_MIN;
	uint64_t x56 = 165097566903079LLU;
	static volatile uint64_t t13 = 26793867LLU;

	t13 = (x53+(x54|(x55|x56)));

	if (t13 != 18446744073709551540LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	volatile uint64_t x59 = 50838475LLU;
	uint64_t x60 = 25385461LLU;
	uint64_t t14 = 11279196522LLU;

	t14 = (x57+(x58|(x59|x60)));

	if (t14 != 18446744071621311487LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x65 = 1U;
	volatile uint64_t x66 = 6885685572968109022LLU;
	int8_t x68 = 4;
	static volatile uint64_t t15 = 21035LLU;

	t15 = (x65+(x66|(x67|x68)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = UINT64_MAX;
	volatile uint64_t x71 = 546055895963503783LLU;
	static volatile uint64_t t16 = 394123606LLU;

	t16 = (x69+(x70|(x71|x72)));

	if (t16 != 546055895963533310LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x73 = 795676137LLU;
	int32_t x74 = -1;
	int64_t x75 = 4500989272LL;
	volatile int8_t x76 = -58;
	volatile uint64_t t17 = 256351LLU;

	t17 = (x73+(x74|(x75|x76)));

	if (t17 != 795676136LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 643390U;
	int8_t x79 = INT8_MAX;
	int16_t x80 = -1;
	static uint32_t t18 = 440926U;

	t18 = (x77+(x78|(x79|x80)));

	if (t18 != 643389U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x82 = INT32_MIN;
	int32_t x84 = -1;
	int64_t t19 = 23LL;

	t19 = (x81+(x82|(x83|x84)));

	if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = UINT64_MAX;
	volatile int64_t x86 = -1LL;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = -1;

	t20 = (x85+(x86|(x87|x88)));

	if (t20 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x89 = 515899U;
	volatile int64_t x90 = 7075635395462LL;
	uint32_t x91 = 43U;
	int64_t t21 = -184063134LL;

	t21 = (x89+(x90|(x91|x92)));

	if (t21 != 7075686244090LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = INT16_MAX;
	int8_t x96 = -1;
	volatile int32_t t22 = -6021738;

	t22 = (x93+(x94|(x95|x96)));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MAX;
	uint64_t x98 = 7330456268LLU;
	uint8_t x99 = 8U;
	uint64_t t23 = 3639951343LLU;

	t23 = (x97+(x98|(x99|x100)));

	if (t23 != 7330489037LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = INT16_MAX;
	int32_t x102 = INT32_MIN;
	int16_t x103 = -873;
	volatile int64_t t24 = 27262243008860586LL;

	t24 = (x101+(x102|(x103|x104)));

	if (t24 != 32766LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = UINT64_MAX;
	int32_t x106 = -1;
	volatile int16_t x108 = INT16_MIN;
	uint64_t t25 = 404243LLU;

	t25 = (x105+(x106|(x107|x108)));

	if (t25 != 4294967294LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x110 = 30U;
	static int16_t x112 = -44;

	t26 = (x109+(x110|(x111|x112)));

	if (t26 != 2147483614U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = 94914317U;
	int32_t x115 = INT32_MIN;
	uint64_t x116 = 5491312699049961262LLU;

	t27 = (x113+(x114|(x115|x116)));

	if (t27 != 94914235LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = INT8_MAX;
	int64_t x118 = -1LL;
	uint16_t x120 = 25187U;
	int64_t t28 = 441070509284811458LL;

	t28 = (x117+(x118|(x119|x120)));

	if (t28 != 126LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x122 = 3U;
	int8_t x123 = INT8_MAX;
	int8_t x124 = 15;
	int32_t t29 = -6956;

	t29 = (x121+(x122|(x123|x124)));

	if (t29 != 130) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x126 = INT16_MIN;
	uint64_t x127 = 3033151019LLU;
	volatile uint64_t t30 = 16487LLU;

	t30 = (x125+(x126|(x127|x128)));

	if (t30 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x129 = 5U;
	static int8_t x130 = -1;
	uint8_t x132 = 2U;
	int32_t t31 = -128205295;

	t31 = (x129+(x130|(x131|x132)));

	if (t31 != 4) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = -1;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = 1527111806U;
	uint64_t t32 = 1541991961337784019LLU;

	t32 = (x133+(x134|(x135|x136)));

	if (t32 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x137 = 18916813LLU;
	static int16_t x138 = INT16_MIN;
	uint16_t x139 = 1289U;
	int64_t x140 = -144031722482LL;

	t33 = (x137+(x138|(x139|x140)));

	if (t33 != 18905820LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x141 = -43;
	static int32_t x143 = INT32_MAX;
	volatile uint64_t x144 = UINT64_MAX;
	uint64_t t34 = 71029646470417520LLU;

	t34 = (x141+(x142|(x143|x144)));

	if (t34 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 1162992LLU;
	int8_t x146 = 18;
	int32_t x147 = -1;
	volatile int64_t x148 = INT64_MIN;
	uint64_t t35 = 112876LLU;

	t35 = (x145+(x146|(x147|x148)));

	if (t35 != 1162991LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = -1;
	int32_t x150 = -2415906;
	static int64_t x152 = -2749LL;
	volatile int64_t t36 = -1253067658913418LL;

	t36 = (x149+(x150|(x151|x152)));

	if (t36 != -2050LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x153 = INT16_MIN;
	volatile uint8_t x154 = UINT8_MAX;
	int8_t x155 = INT8_MIN;
	int32_t t37 = 23078924;

	t37 = (x153+(x154|(x155|x156)));

	if (t37 != -32769) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MAX;
	uint64_t x159 = 4704790223858239854LLU;
	int16_t x160 = INT16_MIN;
	volatile uint64_t t38 = 113250599727152361LLU;

	t38 = (x157+(x158|(x159|x160)));

	if (t38 != 2147483646LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = 4229504617831353LL;
	int16_t x162 = INT16_MAX;
	int64_t x163 = INT64_MIN;
	int8_t x164 = INT8_MAX;
	volatile int64_t t39 = -101659LL;

	t39 = (x161+(x162|(x163|x164)));

	if (t39 != -9219142532236911688LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = -1;
	int16_t x171 = INT16_MAX;
	uint32_t x172 = 7364150U;
	uint32_t t40 = 34U;

	t40 = (x169+(x170|(x171|x172)));

	if (t40 != 2147483647U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x173 = INT32_MIN;
	uint32_t x176 = 38U;
	uint64_t t41 = 1LLU;

	t41 = (x173+(x174|(x175|x176)));

	if (t41 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MIN;
	uint64_t x179 = UINT64_MAX;
	static volatile int32_t x180 = -1;
	uint64_t t42 = 506293014304879LLU;

	t42 = (x177+(x178|(x179|x180)));

	if (t42 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x181 = INT16_MIN;
	static int64_t x182 = INT64_MIN;
	int16_t x183 = 19;
	volatile int16_t x184 = -66;
	static int64_t t43 = 14LL;

	t43 = (x181+(x182|(x183|x184)));

	if (t43 != -32833LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x185 = 5799U;
	static int8_t x186 = -11;
	int64_t x187 = 401566067280LL;
	int8_t x188 = INT8_MIN;
	int64_t t44 = 229869LL;

	t44 = (x185+(x186|(x187|x188)));

	if (t44 != 5788LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = -466;
	int16_t x190 = INT16_MIN;
	static int8_t x192 = INT8_MIN;

	t45 = (x189+(x190|(x191|x192)));

	if (t45 != 4294966703U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x193 = INT16_MIN;
	int64_t x195 = -1LL;
	static int16_t x196 = -1;

	t46 = (x193+(x194|(x195|x196)));

	if (t46 != -32769LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x197 = 0;
	int16_t x198 = -1;
	volatile int32_t x200 = INT32_MIN;
	volatile int32_t t47 = -44;

	t47 = (x197+(x198|(x199|x200)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x201 = -1LL;
	static int8_t x202 = 8;
	int8_t x204 = INT8_MIN;
	int64_t t48 = -375635080709005776LL;

	t48 = (x201+(x202|(x203|x204)));

	if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = UINT16_MAX;
	uint16_t x206 = 1U;
	int64_t x207 = INT64_MAX;
	int32_t x208 = INT32_MIN;
	volatile int64_t t49 = -284325811277375087LL;

	t49 = (x205+(x206|(x207|x208)));

	if (t49 != 65534LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = UINT16_MAX;
	int64_t x210 = INT64_MAX;
	static int16_t x211 = INT16_MIN;
	static int16_t x212 = INT16_MIN;
	static volatile int64_t t50 = 12544888559216049LL;

	t50 = (x209+(x210|(x211|x212)));

	if (t50 != 65534LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	int8_t x214 = INT8_MIN;
	static volatile uint32_t x215 = 50U;
	volatile uint16_t x216 = 28U;
	uint32_t t51 = 1549U;

	t51 = (x213+(x214|(x215|x216)));

	if (t51 != 4294967102U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MAX;
	int64_t x219 = INT64_MIN;
	static int32_t x220 = -27791;
	uint64_t t52 = 268784LLU;

	t52 = (x217+(x218|(x219|x220)));

	if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x222 = INT64_MAX;
	int16_t x223 = INT16_MAX;
	int32_t x224 = INT32_MAX;
	static volatile int64_t t53 = -1LL;

	t53 = (x221+(x222|(x223|x224)));

	if (t53 != 9223372036854775350LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MAX;
	uint16_t x228 = 818U;
	uint64_t t54 = 2462090058LLU;

	t54 = (x225+(x226|(x227|x228)));

	if (t54 != 817LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x229 = 2720U;
	int8_t x230 = INT8_MIN;
	static int32_t x231 = -1;
	uint16_t x232 = 3U;

	t55 = (x229+(x230|(x231|x232)));

	if (t55 != 2719U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MIN;
	int32_t x235 = 6791637;
	uint64_t x236 = 4571545LLU;
	uint64_t t56 = 82599300347LLU;

	t56 = (x233+(x234|(x235|x236)));

	if (t56 != 15203677LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x238 = 1U;
	int16_t x239 = INT16_MIN;
	volatile int64_t x240 = -370496565383823685LL;

	t57 = (x237+(x238|(x239|x240)));

	if (t57 != -33093LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x241 = UINT16_MAX;
	int64_t x243 = INT64_MIN;
	static uint16_t x244 = 72U;

	t58 = (x241+(x242|(x243|x244)));

	if (t58 != -9223372036854705447LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	static volatile uint32_t x246 = 5325188U;
	uint32_t x247 = 60U;
	uint64_t x248 = 989018966LLU;
	uint64_t t59 = 63434056295LLU;

	t59 = (x245+(x246|(x247|x248)));

	if (t59 != 989002750LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MAX;
	int16_t x255 = INT16_MAX;
	int32_t t60 = 12118;

	t60 = (x253+(x254|(x255|x256)));

	if (t60 != -2147450881) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = -119451LL;
	static int16_t x258 = INT16_MIN;
	static int16_t x259 = 15328;
	volatile int8_t x260 = INT8_MIN;
	volatile int64_t t61 = -33127295102983LL;

	t61 = (x257+(x258|(x259|x260)));

	if (t61 != -119483LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x262 = 849870686540LLU;
	int32_t x263 = INT32_MIN;
	uint8_t x264 = 68U;
	volatile uint64_t t62 = 44541129LLU;

	t62 = (x261+(x262|(x263|x264)));

	if (t62 != 18446744073176746315LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x265 = UINT8_MAX;
	int8_t x266 = 1;
	volatile int32_t t63 = -3682710;

	t63 = (x265+(x266|(x267|x268)));

	if (t63 != -2147483348) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = INT16_MAX;
	int8_t x270 = INT8_MAX;
	int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MIN;
	static int32_t t64 = -107;

	t64 = (x269+(x270|(x271|x272)));

	if (t64 != 32766) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = -183LL;
	int64_t x274 = -1LL;
	uint64_t x276 = 17239LLU;
	volatile uint64_t t65 = 9923276161116LLU;

	t65 = (x273+(x274|(x275|x276)));

	if (t65 != 18446744073709551432LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = 7U;
	int8_t x278 = 0;

	t66 = (x277+(x278|(x279|x280)));

	if (t66 != 6) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = INT16_MIN;
	static uint16_t x283 = 1731U;
	static int16_t x284 = -1;
	int32_t t67 = -3492;

	t67 = (x281+(x282|(x283|x284)));

	if (t67 != -32769) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x285 = UINT32_MAX;
	static int64_t x286 = INT64_MIN;
	static int64_t x287 = -7604LL;
	int64_t x288 = INT64_MIN;
	static volatile int64_t t68 = -22142LL;

	t68 = (x285+(x286|(x287|x288)));

	if (t68 != 4294959691LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MIN;
	static int64_t x290 = INT64_MIN;
	static int64_t x291 = 983100LL;
	uint32_t x292 = UINT32_MAX;

	t69 = (x289+(x290|(x291|x292)));

	if (t69 != -9223372032559841281LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x293 = UINT64_MAX;
	int8_t x294 = 4;
	int64_t x295 = -1204172LL;
	volatile uint8_t x296 = 10U;
	uint64_t t70 = 1LLU;

	t70 = (x293+(x294|(x295|x296)));

	if (t70 != 18446744073708347453LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = -3;
	static uint16_t x306 = 117U;
	static volatile uint32_t x307 = 0U;
	uint32_t x308 = UINT32_MAX;
	static uint32_t t71 = 3310U;

	t71 = (x305+(x306|(x307|x308)));

	if (t71 != 4294967292U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x309 = 4413U;
	static volatile uint64_t x310 = 248176LLU;
	volatile uint32_t x311 = UINT32_MAX;
	uint32_t x312 = 5U;

	t72 = (x309+(x310|(x311|x312)));

	if (t72 != 4294971708LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x313 = INT8_MIN;
	uint16_t x314 = 13U;
	int32_t x315 = 0;
	int64_t x316 = -30730644602518LL;
	int64_t t73 = 32230754095LL;

	t73 = (x313+(x314|(x315|x316)));

	if (t73 != -30730644602641LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x317 = INT8_MIN;
	volatile int8_t x318 = INT8_MIN;
	int16_t x319 = INT16_MAX;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t74 = 7183368;

	t74 = (x317+(x318|(x319|x320)));

	if (t74 != -129) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x321 = 2U;
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = -1;
	volatile int16_t x324 = -1;
	uint64_t t75 = 6023737907766LLU;

	t75 = (x321+(x322|(x323|x324)));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x326 = -3225325397102760137LL;
	int8_t x327 = 1;
	static int32_t x328 = INT32_MIN;
	uint64_t t76 = 5568740551598659786LLU;

	t76 = (x325+(x326|(x327|x328)));

	if (t76 != 18446744072847945526LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = 0;
	int8_t x330 = -1;
	int8_t x332 = -1;

	t77 = (x329+(x330|(x331|x332)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = -1;
	int8_t x336 = INT8_MAX;
	volatile uint32_t t78 = 15U;

	t78 = (x333+(x334|(x335|x336)));

	if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MIN;
	int64_t x339 = INT64_MAX;
	int64_t x340 = INT64_MIN;
	volatile int64_t t79 = 3038278164396416440LL;

	t79 = (x337+(x338|(x339|x340)));

	if (t79 != -129LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x341 = 28U;
	int16_t x342 = INT16_MIN;
	static uint64_t x343 = 116767862143LLU;
	int32_t x344 = INT32_MIN;
	uint64_t t80 = 15543047349565787LLU;

	t80 = (x341+(x342|(x343|x344)));

	if (t80 != 18446744073709530523LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x345 = 2U;
	volatile uint64_t x347 = UINT64_MAX;
	uint32_t x348 = 7419U;
	uint64_t t81 = 500002372LLU;

	t81 = (x345+(x346|(x347|x348)));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = -1470;
	volatile int16_t x350 = -15458;
	volatile uint8_t x351 = 19U;
	int16_t x352 = 92;
	volatile int32_t t82 = -768;

	t82 = (x349+(x350|(x351|x352)));

	if (t82 != -16863) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x354 = -1;
	int32_t x355 = INT32_MAX;
	int64_t x356 = -1786029730580LL;
	static int64_t t83 = -49960252288297LL;

	t83 = (x353+(x354|(x355|x356)));

	if (t83 != -32769LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x357 = INT8_MIN;
	uint32_t x358 = UINT32_MAX;
	uint32_t x359 = UINT32_MAX;
	uint16_t x360 = 0U;

	t84 = (x357+(x358|(x359|x360)));

	if (t84 != 4294967167U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = -1LL;
	static int64_t x362 = INT64_MIN;
	volatile int16_t x363 = INT16_MIN;
	static uint8_t x364 = UINT8_MAX;
	static int64_t t85 = 11LL;

	t85 = (x361+(x362|(x363|x364)));

	if (t85 != -32514LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x367 = INT16_MIN;
	int64_t x368 = -1031828624984537781LL;
	int64_t t86 = 64660756447834LL;

	t86 = (x365+(x366|(x367|x368)));

	if (t86 != -31294LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x369 = UINT16_MAX;
	uint64_t x370 = 0LLU;
	int16_t x371 = -1;
	uint32_t x372 = 1922844U;

	t87 = (x369+(x370|(x371|x372)));

	if (t87 != 4295032830LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x377 = 15597980245LL;
	int32_t x378 = -232;
	int64_t x379 = -230920633211286618LL;
	int16_t x380 = INT16_MAX;
	int64_t t88 = -842031567002LL;

	t88 = (x377+(x378|(x379|x380)));

	if (t88 != 15597980244LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x381 = -14205394807415666LL;
	volatile int64_t x382 = -109LL;
	int16_t x383 = INT16_MIN;
	int32_t x384 = INT32_MIN;
	volatile int64_t t89 = 1530LL;

	t89 = (x381+(x382|(x383|x384)));

	if (t89 != -14205394807415775LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x385 = UINT64_MAX;
	int16_t x386 = INT16_MIN;
	int64_t x387 = 1432391813273437LL;
	static volatile int32_t x388 = -12;
	uint64_t t90 = 10352LLU;

	t90 = (x385+(x386|(x387|x388)));

	if (t90 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x389 = -1;
	int64_t x390 = 1007610LL;
	static int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MAX;
	volatile int64_t t91 = 635687LL;

	t91 = (x389+(x390|(x391|x392)));

	if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x393 = -1;
	int32_t x396 = INT32_MIN;
	static volatile int32_t t92 = -15;

	t92 = (x393+(x394|(x395|x396)));

	if (t92 != -3) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x397 = INT16_MIN;
	int16_t x398 = 37;
	volatile uint16_t x399 = 530U;
	volatile uint8_t x400 = UINT8_MAX;
	static volatile int32_t t93 = -114;

	t93 = (x397+(x398|(x399|x400)));

	if (t93 != -32001) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x402 = 10023LLU;
	int64_t x403 = INT64_MAX;
	static int32_t x404 = -85209953;
	uint64_t t94 = 133275261LLU;

	t94 = (x401+(x402|(x403|x404)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x405 = INT32_MAX;
	int64_t x406 = INT64_MIN;
	int32_t x407 = -63186339;
	volatile int32_t x408 = INT32_MIN;
	int64_t t95 = 3982419419564LL;

	t95 = (x405+(x406|(x407|x408)));

	if (t95 != 2084297308LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x409 = -1;
	static volatile int8_t x410 = -1;
	int64_t x411 = INT64_MIN;
	int32_t x412 = INT32_MIN;
	volatile int64_t t96 = -2167493331366294315LL;

	t96 = (x409+(x410|(x411|x412)));

	if (t96 != -2LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x413 = INT16_MAX;
	static volatile uint16_t x414 = UINT16_MAX;
	int64_t x415 = -748729840236760529LL;
	int32_t x416 = -51;
	static int64_t t97 = 278118660744069586LL;

	t97 = (x413+(x414|(x415|x416)));

	if (t97 != 32766LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x417 = UINT32_MAX;
	int64_t x418 = 7962518246635628LL;
	int16_t x420 = INT16_MIN;
	volatile uint64_t t98 = 24368169178849396LLU;

	t98 = (x417+(x418|(x419|x420)));

	if (t98 != 4294965374LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x421 = INT8_MIN;
	int16_t x422 = 7214;
	int32_t t99 = -30;

	t99 = (x421+(x422|(x423|x424)));

	if (t99 != 7167) { NG(); } else { ; }
	
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

